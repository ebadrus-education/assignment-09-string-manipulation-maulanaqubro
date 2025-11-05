#include <iostream>
#include <string>
using namespace std;

int main() {
    string teks = "Pemrograman";
    teks.erase(3, 3);  // hapus 3 huruf mulai dari indeks 3
    cout << teks << endl;  // Output: Pemgraman
    return 0;
}
