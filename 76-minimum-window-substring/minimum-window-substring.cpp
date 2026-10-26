class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n==0||m==0||n<m) return "";
        int r=0,l=0,cnt=0,minlen=INT_MAX,sindex=-1;
        vector<int>need(256,0);
        for(int i=0;i<m;i++){
            need[t[i]]++;
        }
        while(r<n){
            if(need[s[r]]>0) cnt++;
            need[s[r]]--;
            while(cnt==m){
                if(r-l+1<minlen){
                minlen=r-l+1;
                sindex=l;
                }
                need[s[l]]++;
                if(need[s[l]]>0) cnt--;
                l++;
            }
            r++;
        }
        return sindex==-1?"":s.substr(sindex,minlen);

    }
};