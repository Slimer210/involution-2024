#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;

ulli getGCD(vector<ulli> arr) {
    ulli min = *min_element(arr.begin(), arr.end());
    ulli max = *max_element(arr.begin(), arr.end());

    if (min == max) return min;

    for (auto it = arr.begin(); it != arr.end(); it++) {
        ulli ele = *it;

        if (ele > min) {
            *it = ele - min;
        }
    }

    return getGCD(arr);
}

ulli getGCDOfTwoNumbers(ulli a, ulli b) {
    if (b == 0) return a;

    return getGCDOfTwoNumbers(b, a % b);
}

ulli getLCM(vector<ulli> arr) {
    ulli ans = arr[0];

    for (auto &i : arr) {
        ans = i * ans / getGCDOfTwoNumbers(i, ans);
    }

    return ans;
}

int main() {
    vector<ulli> arr;
    int n;
    cin >> n;
    while (n--) {
        int i;
        cin >> i;
        arr.push_back(i);
    }

    ulli gcd = getGCD(arr);
    ulli lcm = getLCM(arr);

    cout << gcd << endl;
    cout << lcm << endl;
    
    return 0;
}