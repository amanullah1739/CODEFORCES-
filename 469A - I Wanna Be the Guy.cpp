#include <iostream>
#include <unordered_set>

using namespace std;
int main(){
    unordered_set<int> set;
    int n;
    cin >> n;
    int x;
    cin >> x;
    for(int i=0; i<x; i++){
        int p;
        cin >> p;
        set.insert(p);
    }
    int y;
    cin >> y;
    for(int i=0; i<y; i++){
        int m;
        cin >> m;
        set.insert(m);
    }
    
    if(set.size()==n){
        cout << "I become the guy.";
    }
    else{
        cout << "Oh, my keyboard!";
    }
    return 0;




}
