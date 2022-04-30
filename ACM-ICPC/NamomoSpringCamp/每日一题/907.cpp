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

// 吃糖果 = Codeforces Round #784 (Div. 4) F

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    vector<int> w(n);
    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }
    vector<int> a(n), b(n);
    partial_sum(w.begin(), w.end(), a.begin());
    b[0] = w[n - 1];
    int pos = n - 2;
    for (int i = 1; i < n; i++) {
        b[i] = b[i - 1] + w[pos];
        pos--;
    }
    int ans = 0;
    int asize = 0, bsize = 0;
    while (asize + bsize + 2 <= n) {
        if (a[asize] < b[bsize]) {
            asize++;
        }
        else if (a[asize] > b[bsize]) {
            bsize++;
        }
        else {
            ans = max(ans, asize + bsize + 2);
            asize++;
            bsize++;
        }
    }
    cout << ans << '\n';
    
    return 0;
}
