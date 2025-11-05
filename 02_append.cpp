#include <iostream>
#include <string>
using namespace std;

int main() {
    string teks1 = "Halo ";
    string teks2 = "Dunia";
    teks1.append(teks2);
    cout << teks1 << endl;          // Output: Halo Dunia

    string gabung = teks1 + " Hebat";
    cout << gabung << endl;         // Output: Halo Dunia Hebat
    return 0;
}
