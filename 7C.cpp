#include <iostream>

using namespace std;

void in(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = (-n+1); j <= n-1; j++)
        {
            if ( abs(j) < i )
                cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    in(n);
    return 0;
}
