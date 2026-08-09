int findmin(vector<int>& bloomDay){
    int mini=INT_MAX;
    for(int i=0;i<bloomDay.size();i++){
        mini= min(mini,bloomDay[i]);
    }
    return mini;
}
int findmax(vector<int>& bloomDay){
    int maxi=INT_MIN;
    for(int i=0;i<bloomDay.size();i++){
        maxi= max(maxi,bloomDay[i]);
    }
    return maxi;
}
int findDay(vector<int>& bloomDay,int day, int m, int k){
    int cnt=0, bouquets=0;
    for(int i=0;i<bloomDay.size();i++){
        if(bloomDay[i]<=day){
            cnt++;
        }
        else{
            bouquets+=cnt/k;
            cnt=0;
        }
    }
    bouquets+=cnt/k;
    
    if(bouquets>=m) return 1;
    else return -1;
}
class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long n=bloomDay.size();
        if(((long long)m*(long long)k)>n) return -1;
        int low=findmin(bloomDay), high=findmax(bloomDay);
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            int BloomDay=findDay(bloomDay,mid,m,k);
            if (BloomDay==1){
                high=mid-1;
                ans=mid;
            }
            else low=mid+1;
        }
        return ans;
    }
};