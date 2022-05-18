/***********************************
 *  Educational Codeforces Round 128 (Rated for Div. 2)
 *  B. Robots
 *  Writer: VenusHui on Clion
 *  Version: Tutorial Version
 *  Date: 2022-05-13
***********************************/
#include <iostream>
#include <cstdio>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <deque>
#include <vector>
#include <queue>
#include <string>
#include <cstring>
#include <map>
#include <unordered_map>
#include <stack>
#include <set>
#include <numeric>
#include <iomanip>
typedef long long ll;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> res(n);
        for (int i = 0; i < n; i++) {
            cin >> res[i];
        }
        int row = -1, col = -1;
        bool flag = true;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (res[i][j] == 'R') {
                    row = i;
                    flag = false;
                    break;
                }
            }
            if (!flag) {
                break;
            }
        }
        flag = true;
        for (int j = 0; j < m; j++) {
            for (int i = 0; i < n; i++) {
                if (res[i][j] == 'R') {
                    col = j;
                    flag = false;
                    break;
                }
            }
            if (!flag) {
                break;
            }
        }
        if (row == -1 && col == -1) {
            cout << "NO" << '\n';
            continue;
        }
        if (res[row][col] == 'R') {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }

    return 0;
}
