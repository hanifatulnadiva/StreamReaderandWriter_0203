#include<iostream>
using namespace std;

int main()
{
    try{
        cout <<"Selamat beljar di prodi ti umy" << endl;
        throw 0.5; // melemparkan sebuah int  maka
        cout << "Pernyataan tidak akan dieksekusi" << endl;
    }catch(int a)
    {
        //blok ini akan dieksekusi
        cout << "Pengecualian akan dieksekusi" << endl;
    } catch(...)
    {
        //jika selain int maka blok ini akan dieksekusi
        cout << "default pengecualuan dieksekusi" << endl;
    }
    return 0;
}
