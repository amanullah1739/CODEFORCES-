// https://codeforces.com/problemset/problem/467/A
#include <iostream>
using namespace std;
int main(){
    int count =0;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int p; cin >> p;
        int q; cin >> q;
        if(q-p>=2){
            count++;
        }
    }
    cout << count;
    return 0;
}
