#include <iostream>

using namespace std;

int main()
{
    int a;
    int *b= new int;
    cout <<  b << endl;
    b=&a;
    cout << &a << " " << b << endl;
    int x;
    b=&x;
    cout << b << " " << &x;
}
// a. 2 bien khac nhau
// b. co the. con tro se tro den vi tri ngau nhien
// c. co
