#include <iostream>
#include <string>
using namespace std;

int main() {
    string teks = "Pemrograman";
    string potong = teks.substr(3, 5); // mulai dari indeks 3, ambil 5 huruf
    cout << potong << endl;             // Output: rogra
    return 0;
}
