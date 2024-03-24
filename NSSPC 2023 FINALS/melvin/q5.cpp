#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    string ns = "";

    bool has_space = false;
    bool has_number = false;

    for (char &c : s) {
        if (c == ' ') has_space = true;
        if (c >= '0' && c <= '9') has_number = true;
        
        c = tolower(c);

        if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) {
            ns += c;
        }
    }

    string rs = ns;

    reverse(rs.begin(), rs.end());

    if (rs == ns) {
        cout << 1 << endl;
        cout << (has_number ? "number" : (has_space ? "sentence" : "word")) << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}