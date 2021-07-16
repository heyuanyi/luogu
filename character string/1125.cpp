#include <bits/stdc++.h>
using  namespace std;
int is_prime(int n);
int main(){
    char n[999];
    cin>>n;
    int l=strlen(n);
    int num[999];
    int t=0;
    int man,minn;
    for(int i=0;i<l;i++){
        for(int j=0;j<l;j++) {
//            cout<<n[i'<<" "<<n[j]<<endl;
            if(n[i]==n[j] && i!=j){
                t++;
            }
        }
        num[i]=t;
        t=0;
    }
    man=num[0]; minn=num[0];
    for(int i=0;i<l;i++){
        if(num[i]<minn){
            minn=num[i];
        }
        if(num[i]>man){
            man=num[i];
        }
    }
    if(is_prime(man-minn)){
        cout<<"Lucky Word"<<endl;
        cout<<man-minn<<endl;
    }else{
        cout<<"No Answer"<<endl;
        cout<<0<<endl;
    }
}
int is_prime(int n){
    if(n<2){
        return false;
    }
    if(n==2){
        return true;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}