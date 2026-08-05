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
int countOccurrences(vector < int > arr, int x) {
    int n=arr.size();
        int lb=lowerbound(arr,n,x);
        if(lb==n || x!=arr[lb]) return {0};
        return {upperbound(arr,n,x)-lb};
}
