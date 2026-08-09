class Solution {
    bool ispossible(vector<int>& nums,int div, int threshold){
    int sum=0;
    for(int i=0;i<nums.size();i++){
        sum+=ceil((double)nums[i]/div);
    }
    return sum<=threshold;
    }   
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
        }
        int low=1,high=maxi;
        int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(ispossible(nums,mid,threshold)){
                high=mid-1;
            }
            else low=mid+1;
        }
        return low;
    }
};