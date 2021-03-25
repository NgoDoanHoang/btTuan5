#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

int main()
{
    srand(time(0));
    int n;
    cin >> n;
    cout << rand()%n;

    return 0;
}
