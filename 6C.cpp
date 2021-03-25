#include <iostream>

using namespace std;

int uoc(int x, int y)
{
    if (x>=y)
    {
        for (int i=y;i>=1;i--)
        {
            if (y%i==0 && x%i==0)
            {
                cout << i;
                break;
            }
        }
    }
    else
    {
        for (int i=x;i>=1;i--)
        {
            if (y%i==0 && x%i==0)
            {
                cout << i;
                break;
            }
        }
    }
}

int main()
{
    int a,b;
    cin >> a >> b;
    uoc( a, b);
    return 0;
}
