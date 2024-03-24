#include <iostream>

using namespace std;

int main() {
    string a,b;
    getline(cin,a);
    getline(cin,b);
    const char* str = a.c_str();
    const char* str1 = b.c_str();
    if(str!=str1) {
        cout << "not diagram";
        return 0;
    } else {
        for(int i=0;i<=str;i++){
            for(int j=0;i<=str1;j++){
                if(str1[j]==str[i]) ;
            }
        }
    }
    return 0;
}