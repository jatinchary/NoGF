#include <bits/stdc++.h>
using namespace std;
int fact(int n) {
    if (n == 0){
        return 0;
    }
    return n * fact(n - 1);
}
int main() {
    int n;
    cin >> n;
    int ans = fact(n);
    cout << ans;
    return 0;
}