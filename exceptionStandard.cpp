#include<iostream>
#include<exception>
#include<array>
using namespace std;

int main()
{
    cout <<"Awal Program" << endl; //penanda 1
    try{
        array <int, 3> data = {3,5,7};
        cout << data.at(5) << endl;
        //memanggil elemen array
    }catch(exception& e)
    {
        cout << e.what () << endl;
    }
    cout << "baris program yang terakhir" << endl;
    return 0;
}