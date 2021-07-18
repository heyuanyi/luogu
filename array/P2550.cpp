#include  <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int f[8];
    cin >> n;
    int lottery[999];
    int win[8];
    int t = 0;
    int x = 0;
    int j = 0;
    int zero=0;
    int one=0;
    int two=0;
    int three=0;
    int four=0;
    int five=0;
    int six=0;
    int w[999];
    for (; t < 7; t++) {
        cin >> win[t];
    }
    for (; j < (n*7); j++) {
        cin >> lottery[j];
    }
    for (int v=0; v < 7; v++) {
        for (int b = 0; b < (7*n); b++) {
            if (win[v] == lottery[b]) {
                x++;
                b=0;
                v++;
            }
            if(x==0){
                v++;
            }
        }
        if(x==0){
            v++;
        }
        if(x==7){
            zero++;
        }
        if(x==6){
            one++;
        }
        if(x==5){
            two++;
        }
        if(x==4){
            three++;
        }
        if(x==3){
            four++;
        }
        if(x==2){
            five++;
        }
        if(x==1){
            six++;
        }
    }
    cout<<zero<<" "<<one<<" "<<two<<" "<<three<<" "<<four<<" "<<five<<" "<<six<<endl;
    return 0;
}