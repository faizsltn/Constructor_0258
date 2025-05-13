#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
    private :
    int nim;
    string nama;

    public :
    mahasiswa();
    mahasiswa(int);
    mahasiswa(string);
    mahasiswa(int inim, string inama);
    void cetak();
};

mahasiswa :: mahasiswa(){}

mahasiswa :: mahasiswa(int inim)
{
    nim = inim;
}

mahasiswa :: mahasiswa(string inama)
{
    nama = inama;
}

mahasiswa :: mahasiswa(int inim, string inama)
{
    nim = inim;
    nama = inama;
}

void mahasiswa :: cetak()
{
    cout << endl << "nim = " << nim << endl;
    cout << "nama = " << nama << endl;
}