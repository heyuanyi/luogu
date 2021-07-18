#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int num[999];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
    }
    for(int j=0;j<n;j++){
        for(int i=0;i<n;i++){
            int a=num[j]-num[i];
            for(int t=0;t<n;t++){
                if(num[t]==a){
                    a=0;
                }
            }
        }
    }
}