#include <iostream>

using namespace std;

int rSumON(int n) {
    if (n < 1) {
        return 0;
    } else {
        return n + rSumON(n-1);
    }
}

int tRSumON(int n, int acc) {
    if (n < 1) {
        return acc;
    } else {
        return tRSumON(n-1, acc + n);
    }
}

int itSumON(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n;
        n--;
    }
    return sum;
}


int main() {
    cout << "Recursive sum over n" << endl;
    cout << rSumON(4) << endl;
    cout << rSumON(6) << endl;
    cout << rSumON(10) << endl;
    cout << "Tail-Recursive sum over n" << endl;
    cout << tRSumON(4, 0) << endl;
    cout << tRSumON(6, 0) << endl;
    cout << tRSumON(10, 0) << endl;
    cout << "Iterative sum over n" << endl;
    cout << itSumON(4) << endl;
    cout << itSumON(6) << endl;
    cout << itSumON(10) << endl;
    return 0;
}