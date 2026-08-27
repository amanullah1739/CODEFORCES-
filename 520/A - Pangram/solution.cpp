#include <iostream>
#include <unordered_set>
using namespace std;
int main(){
    unordered_set<char> charecter;
    int x;
    cin >>x;
    string s = "";
    for(int i=0; i<x; i++){
        char ch;
        cin >> ch;
        if(ch >= 'A' && ch <= 'Z'){
            ch = ch + 32;
            charecter.insert(ch);
        }
        else{
            charecter.insert(ch);
        }
    }
    if(charecter.size()<26){
        cout << "NO";
    }
    else {
        cout << "YES";
    }
    
    return 0;
    
}