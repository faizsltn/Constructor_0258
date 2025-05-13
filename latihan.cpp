// 1. Buatlah sebuah class bernama bangunDatar yang memiliki karakteristik sebagai berikut :
// - memiliki panjang, lebar.
// - memiliki method hitungLuas dan hitungKeliling.
// 2. Buatlah class persegiPanjang
// 3. Buatlah friend fuction untuk method hitungLuas dan hitungKeliling
// gunakan pointer untuk menggunakan method yang ada pada class

#include <iostream>
using namespace std;

class bangunDatar
{
    public :
    int hitungLuas(int l, int p);
    int hitungKeliling(int l, int p);
};

class persegiPanjang
{
    public :
    int panjang, lebar;

    friend int bangunDatar :: hitungLuas(int l, int p);
    friend int bangunDatar ::hitungKeliling(int l, int p);
};

int bangunDatar :: hitungLuas(int l, int p)
{
    return l * p;
}

int bangunDatar :: hitungKeliling(int l, int p)
{
    return (2 * p) + (2 * 1);
}

int main()
{
    bangunDatar bD;
    persegiPanjang pP;
    persegiPanjang &refpP = pP;
    refpP.panjang = 10;
    refpP.lebar = 100;
    cout << bD.hitungLuas(refpP.lebar, refpP.panjang);
}
