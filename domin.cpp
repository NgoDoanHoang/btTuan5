

//bi loi

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

#define M 5
#define N 5
#define MINE -1
int B[M][N];
int Lat[M][N];


void kt()
{
    int i,j;

    for (i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            B[i][j]=0;

                cout << " # ";
            Lat[i][j] = 0;
        }
        cout <<endl;
    }
    B[1][2]=MINE;
    B[3][1]=MINE;
}

void count_mine()
{
    for(int i =0; i<M;i++)
    for(int j =0; j<N;j++)
    if(B[i][j] != MINE)
    {
        ////
    }
}
void map_mine()
{
    int i,j;

    for (i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {

            if(B[i][j]==MINE) cout <<"x ";
            else if(B[i][j]==0) cout <<". ";
            else cout << B[i][j];
        }
        cout << endl;
    }
}
void in_map(int a, int b)
{
    int i,j;

    Lat[a][b] = 1;
    for (i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            if(Lat[i][j] == 1)
            {
                if(B[i][j] == 0)
                    cout << ". ";
                else
                    cout << B[i][j];
            }
            else
                cout << "# ";
        }
        cout << endl;
    }
}
int main()
{
    int r,c;
    kt();
    count_mine();
    while(1)
    {
        cout << "\nNhap o can mo: ";
        cin >> r >> c;
        if(B[r][c]==MINE)
        {
            map_mine();break;
        }
        in_map(r,c);
    }
    return 0;
}
