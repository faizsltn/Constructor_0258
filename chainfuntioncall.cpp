#include <iostream>
using namespace std;

class buku
{
    string judul;
    public:
    buku setjadul(string jadul)
    {
        this->judul = judul;
        return *this;  // chain function
    }
    string getjudul()
    {
        return this ->judul;
    }
};

int main()
{
    buku bukunya ;
    cout << bukunya.setjadul("matematika").getjudul(); //chain function calls
    return 0;
}