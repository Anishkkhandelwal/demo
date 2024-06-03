#include <iostream>
#include<unordered_map>
#include<vector>
#include<limits.h>
using namespace std;
// #include <bits/stdc++.h>

int sol(int n){
    
    if(n==0) return 0;
    if(n==1) return INT_MIN;
    if(n%3==0) return n/3;
    if(n==2 || n==4) return n/2;
    return 1+sol(n-3);
}
 
int main(){
    int n;
    cin>>n;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x]++;
    }
    bool flag=0;
    int ans=0;
    for(auto i: mp){
        int isd=sol(i.second);
        if(isd<0){
            flag=1;
            break;
        }
        ans+=isd;
    }
    if(flag==1) cout<<-1<<endl;
    else cout<<ans<<endl;

}