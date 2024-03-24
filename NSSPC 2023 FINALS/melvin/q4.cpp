#include <bits/stdc++.h>

using namespace std;

int main() {
    string a, b;
    getline(cin, a);
    getline(cin, b);

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    a.erase(0, a.find_first_not_of(' '));
    b.erase(0, b.find_first_not_of(' '));

    cout << ((a == b) ? "anagram" : "not anagram") << endl;

    return 0;
}