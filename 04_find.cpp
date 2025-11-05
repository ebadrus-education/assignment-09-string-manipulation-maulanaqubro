#include <iostream>
#include <string>
using namespace std;

int main() {
    string teks = "Belajar C++ itu seru";
    size_t posisi = teks.find("C++");
    cout << posisi << endl;  // Output: 8
    return 0;
}
