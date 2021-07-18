#include <bits/stdc++.h>
using namespace  std;
int prime(int n);
int main(){
    int n;
    cin>>n;
    for(int i=4;i<=n;i+=2){
        for(int j=2;j<n;j++){
            if(prime(j)){
                if(prime(i-j)){
                    cout<<i<<"="<<j<<"+"<<i-j<<endl;
                    break;
                }
            }
        }
    }
}
int prime(int n){
    if(n<2){
        return false;
    }
    if(n==2){
        return true;
    }
    for(int j=2;j<n;j++){
        if(n%j==0){
            return false;
        }
    }
    return true;
}