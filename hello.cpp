#include<bits/stdc++.h>
using namespace std;



int sum(int a, int b) {
    int c=a+b;
    return c;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);


    int a = 1;
    double d = 3.1415926;
    string s = "Asparagus";
    // cout << e << endl;

    // cout << sum(1,2) << endl;

    // int cute=0;
    // scanf("%d", &cute);

    deque<int> arr {1, 2, 3};
    // cout << arr.empty() << endl;
    // cout << arr.begin() << endl;

    arr[1]=3;
    arr.push_back(4);
    arr.pop_back();
    arr.pop_front();
    arr.push_front(0);

    for (auto r = arr.begin(); r != arr.end(); r++) {
        cout << *r << endl;
    }

}