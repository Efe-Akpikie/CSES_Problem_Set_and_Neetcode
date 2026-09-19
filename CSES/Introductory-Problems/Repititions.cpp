#include <iostream>
using namespace std;

void repititions() {
    string dna;
    cin >> dna;
    if (dna.size() == 1) {
        cout << 1;
        return;
    }
    char prev = dna[0];
    long cur_sum = 1;
    long max = 0;
    for (int i = 1; i < dna.size();i++){
        char cur = dna[i];

        if (cur == prev) cur_sum ++;
        else cur_sum = 1;

        if (cur_sum > max) max = cur_sum;

        prev = cur;
    }

    cout<< max;
}

int main() {
    repititions();
    return 0;
}