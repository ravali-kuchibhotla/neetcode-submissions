class Solution {
public:
    //function which return the index of the target if present else returns the index of the closest smallernumber
    int BS(vector<int>v, int target)
    {
        if(v.size()==0)
           return 0;
        int start=0;
        int end=v.size()-1;
        int prev=0;
        while(start<=end)
        {            int mid=start + (end-start)/2;
            if(v[mid]==target)
               return mid;
            else if (v[mid]<target)
            {
               prev=mid;
               start=mid+1;
            }
            else
               end=mid-1;
        }
        return prev;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int num_rows=matrix.size();
        int num_cols=matrix[0].size();
        vector<int>v;
        for(int i=0; i<num_rows; i++)
           v.push_back(matrix[i][0]);
        int row=BS(v, target);
        int col=BS(matrix[row], target);
        if(matrix[row][col]==target)
          return true;
        return false;
    }
};