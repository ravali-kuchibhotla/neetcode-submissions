class Solution {
public:
    bool isPossible(vector<int>arr, int k, int h)
    {
        long long int total_hrs=0;
        for(int i=0; i<arr.size(); i++)
        { 
           int a=ceil((double)arr[i] / k);
           //cout<<a<<" ";
           total_hrs+=max(a,1);
        }
        //cout<<total_hrs<<" ";
        if(total_hrs<=h)
          return true;
        else
           return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long int sum=0;
        for(int i=0; i<piles.size(); i++)
           sum+=piles[i];
        //k can be between 1 and sum. 
        //BS b/w 1 and sum to find the min eating rate k, under the constraint of finishing all bananas in h hrs
        long long int start=1;
        long long int end=sum;
        long long int ans=sum;
        while(start<=end)
        {
            long long int mid=(start+end)/2;
            cout<<mid<<" ";
            bool pos=isPossible(piles, mid, h);
            //cout<<pos<<" ";
            if(pos)
            {
                ans=min(ans, mid);
                end=mid-1;
            }
            else 
               start=mid+1;
        }
        return ans;
    }
};
