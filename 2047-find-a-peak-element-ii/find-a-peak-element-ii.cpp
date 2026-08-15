class Solution {
public:
    int findmaxrowelement(vector<vector<int>>& mat,int n , int col){
        int maxelement=-1;
        int index=-1;
        for(int i=0;i<n;i++){
            if(mat[i][col]>maxelement){
                maxelement=mat[i][col];
                index=i;
            }
        }
        return index;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int low=0;
        int high=m-1;
        while(low<=high){
            int mid=(low+high)/2;
            int maxRowEleInd=findmaxrowelement(mat,n,mid);
            int left= (mid-1)>=0 ? mat[maxRowEleInd][mid-1] : -1;
            int right=mid+1<m ? mat[maxRowEleInd][mid+1] : -1;
            if(mat[maxRowEleInd][mid]>left && mat[maxRowEleInd][mid]> right){
                return {maxRowEleInd,mid};
            }
            else if(mat[maxRowEleInd][mid]<left) high=mid-1;
            else low=mid+1;
        }
        return {-1,-1};
    }
};