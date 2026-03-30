#include <iostream>

using namespace std;

int main(int argc, char ** argv) {
    string nama;

    cout << "Masukkan nama anda: ";
    getline(cin, nama);

    cout << "Hello " << nama << endl;

    return 0;
}