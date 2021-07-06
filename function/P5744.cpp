#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string name[999];
    cin>>n;
    int age[999];
    double no[999];
    for(int i=0;i<n;i++){
        cin>>name[i];
        cin>>age[i];
        cin>>no[i];
    }
    for(int j=0;j<n;j++){
        age[j]++;
        no[j]=no[j]*1.2;
        if(no[j]>600){
            no[j]=600;
        }
        cout<<name[j]<<" "<<age[j]<<" "<<no[j]<<endl;
    }
    return 0;
}