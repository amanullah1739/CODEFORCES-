#include <iostream>
#include <cctype>
using namespace std;
int main(){
    string s,t;
    cin >> s >> t;
    for(int i=0; i<s.length(); i++){
        char c1 = tolower(static_cast<unsigned char> (s[i]));
        char c2 = tolower(static_cast<unsigned char> (t[i]));
        
        if(c1<c2){
            cout << -1;
            return 0;
        }
        if(c1>c2){
            cout << 1;
            return 0;
        }
    }
    cout << 0;
    return 0;
}
