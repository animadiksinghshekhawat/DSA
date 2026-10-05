class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        int n=g.size();
        int m=s.size();
        int i=0,j=0;
        while(i<n && j<m){
            if(g[i]<=s[j]){
                i+=1;
            }
            j+=1;
        }
        return i;
    }
};