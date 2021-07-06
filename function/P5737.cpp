#include <bits/stdc++.h>
using namespace std;
int leap_year(int i);
int main(){
    int m;
    int m1;
    cin>>m>>m1;
    int j=0;
    int l[999];
    for(int i=m;i<=m1;i++){
        if(leap_year(i)){
            j++;
        }
    }
    cout<<j<<endl;
    for(int i=m;i<=m1;i++){
        if(leap_year(i)){
            cout<<i<<" ";
        }
    }
}
int leap_year(int i){
    if(i%4==0 && i%100!=0 || i%100==0 && i%400==0){
        return true;
    }else{
        return false;
    }
}