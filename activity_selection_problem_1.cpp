#include<bits/stdc++.h>
using namespace std;
struct activity
{
    int start,finish;
};
bool acomp(activity s1, activity s2)
{
    return (s1.finish < s2.finish);
}
void max_activity(activity a[], int n)
{
    int i,j;
    sort(a, a+n, acomp);
    i = 0;
    cout<<"("<<a[i].start<<", "<<a[i].finish<<"), ";
    for(j=1;j<n;j++)
    {
        if(a[j].start >= a[i].finish)
        {
            i = j;
            cout<<"("<<a[j].start<<", "<<a[j].finish<<"), ";
        }
    }
}
int main()
{
    activity a[] = {{5, 9}, {1, 2}, {3, 4}, {0, 6}, 
                                       {5, 7}, {8, 9}}; 
    int n = sizeof(a) / sizeof(a[0]);
    max_activity(a,n);
    return 0;
}
