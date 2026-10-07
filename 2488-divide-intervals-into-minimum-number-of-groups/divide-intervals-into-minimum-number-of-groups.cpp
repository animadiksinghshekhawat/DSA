class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        priority_queue<int,vector<int>,greater<int>> pq;
        for(auto it:intervals){
            int left=it[0];
            int right=it[1];
            if(!pq.empty() && pq.top()<left){
                pq.pop();
            }
            pq.push(right);
        }
        return pq.size();
    }
};