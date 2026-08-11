class Solution {
public:
    bool canWePlace(vector<int>& position,int dist,int m){ 
        int cntBall=1;
        int lastPlace=position[0];
        for(int i=1;i<position.size();i++){
            if(position[i]-lastPlace>=dist){
                cntBall++;
                lastPlace=position[i];
            if(cntBall>=m) return true;
            }
        }
        return false;

    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int low=1,high=*max_element(position.begin(),position.end());
        while(low<=high){
            int mid=(low+high)/2;
            if(canWePlace(position,mid,m)) low=mid+1;
            else high=mid-1;
        }
        return high;
    }
};