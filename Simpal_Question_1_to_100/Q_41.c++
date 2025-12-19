// "Hello, myself ___. I am from ___. I have completed BTech from ___."

#include <iostream>
using namespace std;

int main() {
    string name, city, college;
    cin >> name >> city >> college;
    cout << "Hello, myself " << name 
         << ". I am from " << city 
         << ". I have completed BTech from " << college << ".";
    return 0;
}
