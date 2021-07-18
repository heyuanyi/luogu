#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int b;
    double min;
    int big;
    int small;
    double a[999];
    int num[999][999];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>num[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            big=num[i][j];
            small=num[i][j];
            if(num[i][j]<small){
                small=num[i][j];
            }
            if(num[i][j]>big){
                big=num[i][j];
            }
            b=b+num[i][j];
        }
        a[i]=(b-small-big)/(m-2);
    }
    for(int i=0;i<n;i++){
        double min=a[i];
        if(a[i]<min){
            min=a[i];
        }
    }
    cout<<fixed<<setprecision(2)<<min<<endl;
    return 0;
}