class Solution {
public:
    bool check(vector<int>& nums,int target){
        int minOdd=INT_MAX;
        for(int x:nums){
            if(x%2==1){
                minOdd=min(minOdd,x);
            }
        }

        for(int x:nums){
            if(x%2==target)
                continue;
            if(minOdd>=x)
                return false;
            }
        return true;
    }

    bool uniformArray(vector<int>& nums1) {
        return check(nums1,0) || check(nums1,1);
    }
};