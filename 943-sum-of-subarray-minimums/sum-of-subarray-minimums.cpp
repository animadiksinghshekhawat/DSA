class Solution {
public:
    vector<int> findNSE(vector<int>& arr,int n){ //next smaller element
        stack<int> st;
        vector<int> nse(n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            nse[i]=st.empty()?n:st.top();
            st.push(i);
        }
        return nse;
    }
    vector<int> findPSEE(vector<int>& arr,int n){ //previous smaller or equal element -> equal to handle edge cases 
        stack<int> st;
        vector<int> psee(n);
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]>arr[i]){
                st.pop();
            }
            psee[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        return psee;
    }

    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        vector<int> nse=findNSE(arr,n);
        vector<int> psee=findPSEE(arr,n);
        long long total=0,mod=(int)(1e9+7);
        for(int i=0;i<n;i++){
            int left=i-psee[i];
            int right=nse[i]-i;
            total=(total+(right*left*1LL*arr[i]))%mod;
        }
        return total;
    }
};