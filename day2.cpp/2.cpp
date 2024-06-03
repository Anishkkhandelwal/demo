#include <iostream>
#include<vector>
using namespace std;
#include <bits/stdc++.h>
 
int main(){
    int x;
    cin>>x;
    vector<int> a(x);
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    int minSize=1;
05      for(int i=1;i<x;i++){
        if(a[i]!=a[i-1]){
        minSize++;  
    }
    }
    cout<<minSize<<endl;
    return 0;
}

