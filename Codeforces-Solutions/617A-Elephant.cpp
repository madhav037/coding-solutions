#include<iostream>

using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    while (n > 0)
    {
        if (n - 5 >= 0) {
            n -= 5;
        }else if (n - 4 >= 0) {
            n -= 4;
        }else if (n - 3 >= 0) {
            n -= 3;
        }else if (n - 2 >= 0) {
            n -= 2;
        }else if (n - 1 >= 0) {
            n -= 1;
        }
        count++;
    }
    cout << count;
}