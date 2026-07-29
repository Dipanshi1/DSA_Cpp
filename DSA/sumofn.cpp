#include<iostream>
using namespace std;
int main() {
    int sum = 0, n, digit;
    cin >> n;
    while (n != 0) {
        digit = n % 10;
        sum += digit;
        n = n/10;

    }
    cout << sum << endl;
}