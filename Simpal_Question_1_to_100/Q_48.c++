// Take 20 float inputs and print them

#include <iostream>
using namespace std;

int main() {
    float a[20];
    for(int i = 0; i < 20; i++) cin >> a[i];
    for(int i = 0; i < 20; i++) cout << a[i] << " ";
    return 0;
}
