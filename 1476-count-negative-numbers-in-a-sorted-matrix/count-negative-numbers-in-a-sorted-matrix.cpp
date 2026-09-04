class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m=grid[0].size();
        int n=grid.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int low=0;
            int high=m-1;
            int add=0;
            while(low<=high){
                int mid=(low+high)/2;
                if(grid[i][mid]<0){
                    high=mid-1;
                    add=m-mid;
                }
                else{
                    low=mid+1;
                }
            }
            ans+=add;
        }
        return ans;
    }
};