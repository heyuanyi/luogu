#include <bits/stdc++.h>
using namespace std;
int is_prime(int i);
int main(){
    int n;
    cin>>n;
    int num[999];
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    for(int t=0;t<n;t++){
        if(is_prime(num[t])){
            cout<<num[t]<<" ";
        }
    }
    return 0;
}
int is_prime(int i){
    if(i==2){
        return true;
    }
    if(i<2){
        return false;
    }
    for(int j=2;j<i;j++){
        if(i%j==0){
            return false;
        }
    }
    return true;
}