#include<bits/stdc++.h>
using namespace std;

long long n, k, a[100005];

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    sort(a + 1, a + 1 + n);

    long long sum = 0, res = 0;

    for (int i = n; i >= 1; i--) {
        if (sum >= k) break;
        sum += a[i];
        res++;
    }

    cout << res;
}
