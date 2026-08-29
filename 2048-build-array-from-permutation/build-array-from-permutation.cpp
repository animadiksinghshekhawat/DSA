class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> temp(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int val=temp[i];
            nums[i]=temp[val];
        }
        return nums;
    }
};