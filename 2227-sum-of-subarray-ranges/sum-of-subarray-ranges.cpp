class Solution {
public:
    vector<int> findnse(vector<int>& arr,int n){
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
    vector<int> findpsee(vector<int>& arr,int n){
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
    long long subArrayMin(vector<int>& arr,int n){
        vector<int> nse=findnse(arr,n);
        vector<int> psee=findpsee(arr,n);
        long long total=0;
        for(int i=0;i<n;i++){
            int left=i-psee[i];
            int right=nse[i]-i;
            total=total+(left*right*1LL*arr[i]);
        }
        return total;
    }
    vector<int> findnge(vector<int>& arr,int n){
        stack<int> st;
        vector<int> nge(n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]<=arr[i]){
                st.pop();
            }
            nge[i]=st.empty()?n:st.top();
            st.push(i);
        }
        return nge;
    }
    vector<int> findpgee(vector<int>& arr,int n){
        stack<int> st;
        vector<int> pgee(n);
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]<arr[i]){
                st.pop();
            }
            pgee[i]=st.empty()?-1:st.top();
            st.push(i);

        }
        return pgee;
    }
    long long subArrayMax(vector<int>& arr,int n){
        vector<int> nge=findnge(arr,n);
        vector<int> pgee=findpgee(arr,n);
        long long total=0;
        for(int i=0;i<n;i++){
            int left=i-pgee[i];
            int right=nge[i]-i;
            total=total+(left*right*1LL*arr[i]);
        }
        return total;
    }
    long long subArrayRanges(vector<int>& nums) {
        int n=nums.size();
        return subArrayMax(nums,n)-subArrayMin(nums,n);
    }
};