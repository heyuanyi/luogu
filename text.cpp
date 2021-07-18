#include <iostream>
#include <cstdio>
using namespace std;
int n, m;
char mp[110][110];
int ans[110][110];
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        scanf("%s", mp[i] + 1);
        for (int j = 1; j <= m; j++) {
            if (mp[i][j] == '*') {
                for (int k = 0; k < 8; k++) {
                    ans[i + dx[k]][j + dy[k]]++;
                }
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (mp[i][j] == '*') {
                cout << '*';
            } else {
                cout << ans[i][j];
            }
        } cout << endl;
    } cout << endl;
    return 0;
}
