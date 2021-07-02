#include  <bits/stdc++.h>
using namespace std;
int main(){
    int n = 0;
    int i=n;
    int ice[101];
    int j=0;
    cin>>n;
    if(n==1){
        cout<<1<<endl;
        return 0;
    }
    for(;;j++){
        if(i%2!=0){
            i=i*3+1;
        }else{
            i=i/2;
        }
        ice[j]=i;
        if(i==1){
            break;
        }
    }
    for(int i=j;i>=0;i--){
        cout<<ice[i]<<" ";
    }
    cout<<n;
    return 0;
}