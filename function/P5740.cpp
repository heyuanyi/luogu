#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string name[999];
    cin>>n;
    int c[999];
    int m[999];
    int e[999];
    int t=0;
    for(int i=0;i<n;i++){
        cin>>name[t];
        cin>>c[t]>>m[t]>>e[t];
        t++;
    }
    t=0;
    int flag=0;
    int max=c[t]+m[t]+e[t];
    for(int i=1;i<n;i++){
        if(c[t]+m[t]+e[t]>max){
            max=c[t]+m[t]+e[t];
            flag=t;
        }
    }
    cout<<name[t]<<" "<<c[flag]<<" "<<m[flag]<<" "<<e[flag]<<endl;
}