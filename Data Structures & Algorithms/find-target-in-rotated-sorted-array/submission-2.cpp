class Solution {
public:
    int BS(vector<int>arr, int target, int start, int end)
    {
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(arr[mid]==target)
              return mid;
            else if (arr[mid]>target)
               end=mid-1;
            else
               start=mid+1;
        }
        return -1;
    }
    int findPivot(const vector<int>& arr) {
        int n = arr.size();
        if (n == 0) return -1;
        int start = 0, end = n - 1;
        if (arr[start] <= arr[end]) return end; // not rotated: largest is at end

        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (mid < end && arr[mid] > arr[mid + 1]) return mid;
            //if (mid > start && arr[mid] < arr[mid - 1]) return mid - 1;

            if (arr[mid] >= arr[start]) start = mid + 1;
            else end = mid - 1;
        }
        return end;
    }
    int search(vector<int>& nums, int target) {
       //find pivot in logn time
        int start=0;
        int end=nums.size()-1;
        int pivot=findPivot(nums);
        cout<<pivot<<" ";
        int a=BS(nums, target,0, pivot);
        if(a!=-1)
          return a;
        int b=BS(nums, target,pivot+1, end);
        if(b!=-1)
           return b;
        return -1;

    }
};
