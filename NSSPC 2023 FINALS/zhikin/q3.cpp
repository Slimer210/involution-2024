#include <iostream>

using namespace std;

int main() {
    int h,m,n,c=0,d=1;
    cin >> h >> m >> n;
    while(c+m<h){
        c+=m;
        c-=n;
        d++;
    }
    cout << d;
    return 0;
}