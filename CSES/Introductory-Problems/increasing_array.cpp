#include <iostream>
#include <string>
using namespace std;
 
void increasing_array() {
    long long n;
    long long max;
    long long result = 0;
    cin >> n >> max;
    for (int i = 1; i < n; i++) {
        long long cur;
        cin >> cur;
        
        if (cur < max) {
            result+= max - cur;
        } else {
            max = cur;
        }
    }
    cout << result;
}
 
int main()
{
 
    increasing_array();
    return 0;

}