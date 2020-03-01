#include<bits/stdc++.h>
using namespace std;
#define r 3
#define c 6
void print_spiral(int a[r][c], int m, int n)
{
    int i,k=0,l=0;
    while(k<m && l<n)
    {
        for(i=l;i<n;i++)
        {
            cout<<a[k][i]<<" ";
        }
        k++;
        for(i=k;i<m;i++)
        {
            cout<<a[i][n-1]<<" ";
        }
        n--;
        if(k < m)
        {
            for(i=n-1;i>=l;i--)
            {
                cout<<a[m-1][i]<<" ";
            }
            m--;
        }
        if(l < n)
        {
            for(i=m-1;i>=k;i--)
            {
                cout<<a[i][l]<<" ";
            }
            l++;
        }
    }
}
int main()
{
    int a[r][c] = { { 1, 2, 3, 4, 5, 6 }, 
                    { 7, 8, 9, 10, 11, 12 }, 
                    { 13, 14, 15, 16, 17, 18 } };
    print_spiral(a, r ,c);
    return 0;
}
