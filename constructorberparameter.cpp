#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
    public :
    mahasiswa (int nim, string nama); // constructor dengan parameter
};

// definisi constructor dengan parameter
mahasiswa::mahasiswa(int nim, string nama)
{
    cout << "constructor dengan parameter terpanggil " << endl;
    cout << "nim  : " << nim << endl;
    cout << "nama : " << nama << endl;
}

int main()
{
    mahasiswa mhs (12345, "faiz");  // memanggil constructor dengan parameter
    return 0;
}
