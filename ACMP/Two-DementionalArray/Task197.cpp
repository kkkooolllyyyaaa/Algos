#include <stdio.h>
#include <iostream>
using namespace std;
#define n 101
unsigned a[n][n];
void matr_snake(int N)
{
    int i, x, y, k=1;
    for (i=0; i<N; i++) // первая половина
	{
        if (i%2==0) // по четным диагоналям
        {
            x=0;
            y=i;
            while (y>=0)
            {
                a[x][y]=k;
                x++; y--; k++;
            }
        }
        else // по нечетным
        {
            x=i; y=0;
            while (x>=0)
            {
                a[x][y]=k;
                k++; x--; y++;
            }
        }
    }
    if (N%2!=0){
    for (i=1; i<N; i++) // вторая половина
    {
        if (i%2==0)
        {
            x=i; y=N-1;
            while (x<=N-1)
            {
                a[x][y]=k;
                k++; x++; y--;
            }
        }
        else
        {
            x=N-1; y=i;
            while (y<=N-1)
            {
                a[x][y]=k;
                k++; x--; y++;
            }
        }
    }
    }
    else
    {
    for (i=1; i<N; i++) // вторая половина
    {
        if (i%2==0)
        {
            x=N-1; y=i;
            while (y<=N-1)
            {
                a[x][y]=k;
                k++; x--; y++;
            }
        }
        else
        {
            x=i; y=N-1;
            while (x<=N-1)
            {
                a[x][y]=k;
                k++; x++; y--;
            }
        }
    }
    }
}
 
 
int main()
{
    int N, i, x, y, k=1, p=0;
    freopen(input.txt,r,stdin);
    freopen(output.txt,w,stdout);
	cin>>N;
	matr_snake(N);
    for (x=0; x<N; x++){
        for (y=0; y<N; y++)
            cout<<a[x][y]<<' ';
		cout<<endl;
    }
}
