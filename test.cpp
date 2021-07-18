#include <bits/stdc++.h>
using namespace std;
bool isZhiShu(int n);
bool isHuiWen(int n);


int main(){
    int a,b;
    cin>>a>>b;
    for (int i = a; i <=b;i++) {
        int len= to_string(i).length();
        if(len%2==0){
            i= pow(10,len);
            continue;
        }
        if(isZhiShu(i) && isHuiWen(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}

bool isZhiShu(int n){
    if(n<2){
        return false;
    }
    for (int i = 2; i <= sqrt(n) ; ++i) {
        if(n%i==0){
            return false;
        }
    }
    return true;
}
bool isHuiWen(int n){
    string str= to_string(n);

    for (int i = 0; i < str.length()/2; ++i) {
        if(str[i]!=str[str.length()-1-i]){
            return false;
        }
    }
    return true;
}