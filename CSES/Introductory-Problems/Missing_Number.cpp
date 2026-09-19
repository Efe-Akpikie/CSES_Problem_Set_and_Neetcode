#include <iostream>
#include <vector>
using namespace std;

void missing_number() {
    long long n;
    long long sum = 0;
    cin >> n;
    for (int i = 0; i < n-1; ++i){
        int num;
        cin >> num;
        sum += num;
    }

    cout<< n*(n+1) / 2 - sum;

    
}



int main() {
    missing_number();
    return 0;
}
