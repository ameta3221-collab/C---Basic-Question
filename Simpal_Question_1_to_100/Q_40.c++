// Take 15 float inputs and print them

#include <iostream>
using namespace std;

int main() {
    float a[15];
    for(int i = 0; i < 15; i++) cin >> a[i];
    for(int i = 0; i < 15; i++) cout << a[i] << " ";
    return 0;
}
