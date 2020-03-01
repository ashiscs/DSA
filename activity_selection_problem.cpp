#include<iostream>
using namespace std;

void max_activity(int s[], int f[], int n)
{
    int i,j;
    cout<<"Following activities which can be performed are\n";
    i = 0;
    cout<<i<<" ";
    for(j=1;j<n;j++)
    {
        if(s[j] >= f[i])
        {
            i = j;
            cout<<j<<" ";
        }
    }
}

int main()
{
    int s[] = {1, 3, 0, 5, 8, 5};
    int f[] = {2, 4, 6, 7, 9, 9};
    int n = sizeof(s) / sizeof(s[0]);
    max_activity(s,f,n);
    return 0;
}
