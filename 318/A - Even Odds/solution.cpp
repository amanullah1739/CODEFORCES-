#include <iostream>
using namespace std;
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long limit, target;
    if (!(cin >> limit >> target)) return 0;
 
    // Calculate how many odd numbers exist up to limit
    long long odd_count = (limit + 1) / 2;
 
    if (target <= odd_count) {
        // Target falls in the odd numbers section
        cout << (2 * target - 1) << "
";
    } else {
        // Target falls in the even numbers section
        long long even_index = target - odd_count;
        cout << (2 * even_index) << "
";
    }
 
    return 0;
}