#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <deque>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;
#define INIT_CIN                 \
    ios::sync_with_stdio(false); \
    cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;
const int maxn = 100000 + 5;
int Ts, n, ti, t, ans, f[maxn];
inline int max(int a, int b) { return a > b ? a : b; }
int main()
{
    scanf("%d", &Ts);
    for (int T = 1; T <= Ts; T++)
    {
        scanf("%d%d", &n, &t);
        memset(f, 0x8f, sizeof(f));
        f[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &ti);
            for (int j = t - 1; j >= ti; j--)
            {
                f[j] = max(f[j], f[j - ti] + 1);
            }
        }
        for (int i = ans = t - 1; i >= 0; i--)
            if (f[i] > f[ans])
                ans = i;
        printf("Case %d: %d %d\n", T, f[ans] + 1, ans + 678);
    }
    return 0;
}

// typedef double db;
// typedef pair<ll, ll> pii;
// const int maxn = 1000 + 5;
// const int INF = 0x7f7f7f7f;
// const int SUP = -0x7f7f7f7f;