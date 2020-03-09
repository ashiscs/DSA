#include<iostream>
using namespace std;

void calc(int a[10][10],int n,int m)
{
    int i,j;
    int row[n] = {0};
    int col[n] = {0};
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j] == 1)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(row[i] == 1 || col[j] == 1)
            {
                a[i][j] = 1;
            }
        }
    }
    
}

void print_matrix(int a[10][10],int n,int m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n,m,a[10][10];
    cout<<"Enter the values of row and column\n";
    cin>>n>>m;
    int i,j;
    cout<<"Enter the matrix elements\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Original Matrix\n";
    print_matrix(a,n,m);
    
    calc(a,n,m);
    cout<<"Modified matrix is\n";
    print_matrix(a,n,m);
}
