#include <iostream>
using namespace std;

int main() {
    int a,ans;
    int b[10]; 
    cin>>a;
    for(int i=1;i<=a;i++){
        cin >> b[i];
    }
    for(int i=1;i<=a;i++){
        for(int j=1;i<=1010;j++){
            if(b[a]/j==1.0){
                ans = j;
                break;
            }
        }
    }
    cout << ans;
    return 0;
}