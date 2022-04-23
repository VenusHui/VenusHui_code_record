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

// Educational Codeforces Round 127 (Rated for Div. 2) B. Consecutive Points Segment

// Contest Version

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> res(n);
        for (int i = 0; i < n; i++) {
            cin >> res[i];
        }
        bool ans = true;
        int pre = res[0] + 1;
        for (int i = 1; i < n; i++) {
            if (res[i] - pre == 0) {
                pre = res[i] + 1;
            }
            else if (res[i] - pre == 1) {
                pre = res[i];
            }
            else if (res[i] - pre == 2) {
                pre = res[i] - 1;
            }
            else {
                ans = false;
                break;
            }
        }
        if (ans) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }
    
    return 0;
}
