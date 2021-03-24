#include <iostream>

using namespace std;

int main()
{
    int a[100];
    char b[100];
    for ( int i=0; i<3; i++ )
    {
        cout << (void*)&a[i] << endl;
    }
    for ( int i=0; i<3; i++ )
    {
        cout << (void*)&b[i] << endl;
    }

    return 0;
}
// cac ket qua cach nhau dung bang kich co bien duoc khai bao
