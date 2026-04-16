class Solution {
public:
    struct myComp{
        bool operator()(pair<int, vector<int>>&a, pair<int, vector<int>> &b){
            return a.first > b.first;
        }
    };
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>ans;
        priority_queue<pair<int, vector<int>>, vector<pair<int, vector<int>>>, myComp>pq;
        for(int i=0; i<points.size(); i++)
        {
            int x=points[i][0];
            int y=points[i][1];
            int dist=(x*x)+(y*y);
            pair<int, vector<int>> p={dist, points[i]};
            pq.push(p);
        }
        for(int i=0; i<k; i++)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
