#include <iostream>
using namespace std;
int main(){
    int p; cin >> p;
    int h; cin >> h;
    int ans = 0;
    for(int i=0; i<p; i++){
        int ph;
        cin >> ph;
        if(ph<=h){
            ans++;
        }
        else{
            ans+=2;
        }
    }
    cout << ans;
    return 0;
}