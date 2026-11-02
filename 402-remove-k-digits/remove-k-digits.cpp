class Solution {
public:
    string removeKdigits(string num, int k) {
        vector<char> st;
        for(int i=0;i<num.size();i++){
            while(!st.empty() && k>0 && st.back()-'0'>num[i]-'0'){
                st.pop_back();
                k--;
            }
            st.push_back(num[i]);
        }
        while(k>0){
            st.pop_back();
            k--;
        }
        if(st.empty()) return "0";
        int i=0;
        while(i<st.size() && st[i]=='0'){
            i++;
        }
        string ans="";
        for(;i<st.size();i++){
            ans+=st[i];
        }
        return ans==""?"0":ans;
    }
};