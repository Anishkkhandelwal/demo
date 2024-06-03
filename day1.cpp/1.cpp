#include <iostream>
using namespace std;
// #include <bits/stdc++.h>
 
int main(){
    string s;
    cin>>s;
    int i=0, j=s.length()-1;
    int ans=0;
    while(i<j){
        if(s[i]=='L' && s[j]=='G'){
            swap(s[i],s[j]);
            i++;
            j--;
            ans++;
        }
        if(s[i]=='G') i++;
        if(s[j]=='L') j--;
    }
    cout<<ans<<endl;
    
}