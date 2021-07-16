#include <bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin>>n;
    for(int i=0;i<n.size();i++){
        if(n[i]>='a' && n[i]<='z'){
            n[i]=n[i]-32;
        }
        cout<<n[i];
    }
    return 0;
}