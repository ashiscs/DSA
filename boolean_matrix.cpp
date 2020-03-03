#include<iostream>
using namespace std;
#define r 2
#define c 3

void update_matrix(int a[r][c])
{
    int row[r] = {0};
    int col[c] = {0};
    int i,j;
   /* for(i=0;i<r;i++)
    {
        row[i] = 0;
    }
    for(j=0;j<c;j++)
    {
        col[j] = 0;
    }
    */
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j] == 1)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(row[i] == 1 || col[j] == 1)
            {
                a[i][j] = 1;
            }
        }
    }
}

void print_matrix(int a[r][c])
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int a[r][c] = {{0,0,0},{0,0,1}}; 
    cout<<"Input Matrix is \n";
    print_matrix(a);
    
    update_matrix(a);
    cout<<"Modified matrix is \n";
    print_matrix(a);
    
}
