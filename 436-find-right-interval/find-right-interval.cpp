class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        int n=intervals.size();
        int m=intervals[0].size();
        vector<pair<int, int>> starts;
        for (int i = 0; i < n; i++) {
            starts.push_back({intervals[i][0], i});
        }
        sort(starts.begin(), starts.end());
        vector<int> ans(n,-1);
        for (int i = 0; i < n; i++) {
            int end=intervals[i][1];
            int low=0;
            int high= n-1;
            int index=-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(starts[mid].first>=end){
                    index=starts[mid].second;
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            ans[i]=index;
        }

        return ans;
        
    }
};