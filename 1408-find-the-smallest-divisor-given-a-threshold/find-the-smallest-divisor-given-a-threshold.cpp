class Solution {
    bool ispossible(vector<int>& nums,int div, int threshold){
    int sum=0;
    for(int i=0;i<nums.size();i++){
        sum+=(nums[i] + (div - 1)) / div;
    }
    return sum<=threshold;
    }   
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1,high=*max_element(nums.begin(), nums.end());
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