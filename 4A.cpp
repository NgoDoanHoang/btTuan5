#include <iostream>
#include <string>

using namespace std;

void mang(int a[])
{
    for (int i=0;i<5;i++)
    {
        for (int j=i+1;j<0;j++)
        {
            if (a[i]<a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

}

void stringless( string x)
{
    x[3]='\n';
    cout << &x << endl;
}

int main()
{
    int m[]={ 155, 27, -36, 42, -53 };
    mang (m);
    for (int i=0;i<5;i++)
    {
        cout << m[i] << " ";
    }
    cout <<endl;

    string n={"fffff fff ff f"};
    stringless(n);
    cout << n;
    cout << endl << &n;
}
// mang truyen theo gia tri
// chuoi truyen theo gia tri
