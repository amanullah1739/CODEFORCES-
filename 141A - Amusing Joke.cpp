// https://codeforces.com/problemset/problem/141/A
#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    unordered_map<char,int> hash;
    string g;
    string h;
    string m;
    cin >> g >> h >> m;
    if(g.size()+h.size() != m.size()){
        cout << "NO";
        return 0;
    }
    for(char ch : g){
        hash[ch]++;
        
    }
    for(char ch : h){
        hash[ch]++;
        
    }
    for(int i=0; i<m.size(); i++){
        if(hash.find(m[i]) == hash.end()){
            cout << "NO";
            return 0;
        }
        if(hash.find(m[i]) != hash.end() && hash[m[i]]==0){
            cout << "NO";
            return 0;
        }
        hash[m[i]]--;
    }
    cout << "YES";
    return 0;
    
}
