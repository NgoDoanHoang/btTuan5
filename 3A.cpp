#include <iostream>

using namespace std;

int thamtri(int m, int n)
{
    int temp=m;
    m=n;
    n=temp;
}

int thamchieu (int &m, int &n)
{
    int temp=m;
    m=n;
    n=temp;
}

int main()
{
    int a,b;
    cin >> a >> b;
    thamtri(a,b);
    cout << a << " " <<b << endl;
    thamchieu(a,b);
    cout << a << " " <<b;
    return 0;
}
// hoan vi khi tham tri chi thay doi tren ham rieng ko anh huong den main
// khi tham chieu se thay doi gia tri tai dia chi
