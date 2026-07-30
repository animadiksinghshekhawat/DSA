#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    map<int,int> mpp;
    int cnt=0;
    int xr=0;
    mpp[xr]++;
    for(int i=0;i<arr.size();i++){
        xr=xr^arr[i];
        int p=xr^x;
        cnt+=mpp[p];
        mpp[xr]++;

    }
    return cnt;
}
