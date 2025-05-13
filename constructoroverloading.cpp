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

int main()
{
    mahasiswa mhs1(102030);          // hanya nim
    mahasiswa mhs2("faiz");          // hanya nama
    mahasiswa mhs3(010203, "santi"); // nim dan nama

    cout << "mahasiswa 1:"; mhs1.cetak();
    cout << "mahasiswa 2:"; mhs2.cetak();
    cout << "mahasiswa 3:"; mhs3.cetak();

    return 0;
}