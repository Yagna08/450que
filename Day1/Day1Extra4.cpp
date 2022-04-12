#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve(int n,int a[]){
    vector <int> p;
    vector <int> ne;
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        ne.push_back(a[i]);
        else
        p.push_back(a[i]);
    }
    vector<int> ans;
    for(int i=0;i<ne.size();i++) 
    {
        ans.push_back(ne[i]);
    }
    for(int i=0;i<p.size();i++) 
    {
        ans.push_back(p[i]);
    }
    for(auto i:ans) cout<<i<<" ";
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];
    solve(n,a);
return 0;
}
