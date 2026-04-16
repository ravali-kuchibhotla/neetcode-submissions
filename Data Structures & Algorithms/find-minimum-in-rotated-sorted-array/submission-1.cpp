class Solution {
public:
    int findPivot(vector<int>arr)
    {
        int start=0; 
        int end=arr.size()-1;
        if(arr[start]<arr[end])
           return 0;
        while(start<=end)
        {
            int mid=(start+end)/2;
            cout<<arr[mid]<<" ";
            if(mid> 0 && arr[mid]<arr[mid-1])
              return mid;
            else if(arr[mid]<arr[end])
               end=mid-1;
            else
               start=mid+1;
        }
        return arr.size()-1;
    }
    int findMin(vector<int> &nums) {
        return nums[findPivot(nums)];
    }
};
