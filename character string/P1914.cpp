#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string num;
    cin>>num;
    for(int i=0;i<num.length();i++){
        num[i]=num[i]+n;
        if(num[i]>'z'){
            num[i]=num[i]%122+96;
        }
        cout<<num[i];
    }
    return 0;
}