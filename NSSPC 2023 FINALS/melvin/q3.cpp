#include <bits/stdc++.h>

using namespace std;

int main() {
    int h, m, n;
    cin >> h >> m >> n;

    int c = 0;
    int d = 1;

    while (c + m < h) {
        c = c + m - n;
        d++;
    }

    cout << d << endl;
    return 0;
}