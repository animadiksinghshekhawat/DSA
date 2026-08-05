int lowerbound(vector<int> &nums,int n,int x){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]>=x){
            high=mid-1;
            ans=mid;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}

int upperbound(vector<int> &nums,int n, int x){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]>x){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int lb=lowerbound(nums,n,target);
        if(lb==n || target!=nums[lb]) return {-1,-1};
        return {lb,upperbound(nums,n,target)-1};
    }
};
