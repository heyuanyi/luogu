#include <iostream>
using namespace std;
int main(){
    int a[999],b[999],c[999];
    int n;
    cin>>n;
    int all[999];
    double p[999];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i]>>c[i];
        all[i]=b[i]+c[i];
        p[i]=b[i]*0.7+c[i]*0.3;
    }
    for(int j=0;j<n;j++){
        if(all[j]>140 && p[j]>=80){
            cout<<"Excellent"<<endl;
        }else{
            cout<<"Not excellent"<<endl;
        }
    }
    return 0;
}