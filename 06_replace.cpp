#include <iostream>
#include <string>
using namespace std;

int main() {
    string teks = "Saya makan nasi";
    teks.replace(10, 4, "roti");  // mulai dari indeks 10, hapus 4 huruf, ganti "roti"
    cout << teks << endl;         // Output: Saya makan roti
    return 0;
}
