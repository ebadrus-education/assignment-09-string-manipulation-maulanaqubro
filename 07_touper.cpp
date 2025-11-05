#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string teks = "C++ Hebat";

    for (char &c : teks) c = toupper(c);
    cout << teks << endl;  // Output: C++ HEBAT

    for (char &c : teks) c = tolower(c);
    cout << teks << endl;  // Output: c++ hebat
    return 0;
}
