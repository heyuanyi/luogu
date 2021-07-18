#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a<=5 && b>=5){
        cout<<5<<endl;
    }
    if(a<=7 && b>=7){
        cout<<7<<endl;
    }
    if(a<=17 && b>=17){
        cout<<11<<endl;
    }

    for(int d1;d1<=9;d1+=2){
        for(int d2=0;d2<=9;d2++){
            int num=100*d1+10*d2+d1;
            if(num<a){
                continue;
            }
            if(num>b){
                return 0;;
            }
            int flag=1;
            for(int j=3;j*j<=num;j++){
                if(num%j==0){
                    flag=0;
                    break;
                }
            }
            if(flag){
                cout<<num<<endl;
            }
        }
    }
    for(int d1=1;d1<=9;d1+=2){
        for(int d2=0;d2<=9;d2++2){
            for(int d3=0;d3<=9;d3++){
                int num=10000*d1+1000*d2+100*d3+10*d2+d1;
                if(num<a){
                    continue;
                }
                if(num>b){
                    return 0;
                }
                int flag=1;
                for(int j=3;j*j<=num;j++){
                    if(num%j==0){
                        flag=0;
                        break;
                    }
                }
                if(flag){
                    cout<<num<<endl;
                }
            }
            fo
        }
    }
}