int findMax(vector<int>&piles){
    int maxi=INT_MIN;
    for(int i=0;i<piles.size();i++){
        maxi= max(piles[i],maxi);
    }
    return maxi;
}

long long calculateHours(vector<int>& piles, int hourly){
    long long totalH=0;
    for(int i=0;i<piles.size();i++){
        totalH+= ceil((double)piles[i]/(double)hourly);
    }
    return totalH;
}
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high=findMax(piles);
        while(low<=high){
            int mid=(low+high)/2;
            long long totalH=calculateHours(piles,mid);
            //we have to minimize totalhours so that all bananas can eaten 
            if(totalH<=h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};