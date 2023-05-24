#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    if (k > n) {
        cout << -1;
        return 0;
    }
    int a[n]; // VLA

    a[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    sort(a, a + n + 1);

    cout << a[n - k + 1] << " 0";
}