#include <bits/stdc++.h> 
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    double total=0;
    sort(items.begin(),items.end(),[](const pair<int,int> &a,const pair<int,int> &b){
        return (double)a.second/a.first>(double)b.second/b.first;
    });
    for(int i=0;i<n;i++){
        if(items[i].first<=w){
            w-=items[i].first;
            total+=items[i].second;
        }
        else{
            total+=((double)items[i].second/items[i].first)*w;
            break;
        }
    }
    return total;
}
