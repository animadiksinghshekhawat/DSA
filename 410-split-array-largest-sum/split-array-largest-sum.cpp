class Solution {
public:
    int calculcatecnt(vector<int>& nums, long long letsize){
        int cnt=1;
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]+sum<=letsize){
                sum+=nums[i];
            }
            else{
                cnt++;
                sum=nums[i];
            }
        }
        return cnt;
    }
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        long long high=accumulate(nums.begin(),nums.end(),0LL);
        while(low<=high){
            long long mid=(low+high)/2;
            int cnt=calculcatecnt(nums,mid);
            if(cnt<=k) high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};