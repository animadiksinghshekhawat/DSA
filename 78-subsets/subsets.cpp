class Solution {
public:
    void PrintSubset(int index,vector<int>& nums,vector<int>& ds,vector<vector<int>> &ans){
        int n=nums.size();
        if(index==n){
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[index]);
        PrintSubset(index+1,nums,ds,ans);
        ds.pop_back();
        PrintSubset(index+1,nums,ds,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        PrintSubset(0,nums,ds,ans);
        return ans;
    }
};