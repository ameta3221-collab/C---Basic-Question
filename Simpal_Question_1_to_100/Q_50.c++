// Smallest among 5 integers

#include <iostream>
using namespace std;

int main() {
    int a[5];
    for(int i = 0; i < 5; i++) cin >> a[i];

    int minVal = a[0];
    for(int i = 1; i < 5; i++)
        if(a[i] < minVal) minVal = a[i];

    cout << minVal;
    return 0;
}
