#include <bits/stdc++.h>
using namespace std;
int main() {
    int day;
    cin >> day;
    int p = 1;
        for (int i = 1; i < day; i++) {
            p = (p+1) * 2;
        }
    cout<<p<<endl;
    return 0;
}
