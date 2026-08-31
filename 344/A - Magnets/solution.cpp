#include <iostream>
using namespace std;
int main(){
    int n; 
    cin >> n;
    int mg; 
    cin >> mg;
    int count = 1;
    for(int i=0; i<n-1; i++){
        int smg;
        cin >> smg;
        if(smg != mg){
            count ++;
            mg = smg;
        }
    }
    cout << count;
    return 0;
}