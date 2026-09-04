class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int n=nums.size();
        vector<int> minarr(n);
        for(int i=n-1;i>=0;i--){
            mini=min(nums[i],mini);
            minarr[i]=mini;            
        }
        for(int i=0;i<n;i++){
            maxi=max(nums[i],maxi);
            int instability=maxi-minarr[i];
            if(instability<=k){
                return i;
            }
        }
        return -1;

    }
};