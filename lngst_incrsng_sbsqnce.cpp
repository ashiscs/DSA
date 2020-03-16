#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        set<int> s;
        while(n--)
        {
            int a;
            cin>>a;
            s.insert(a);
        }
        cout<<s.size()<<endl;
    }
}
``````````````````````````````````````````````````````````````````````````````````````````````````
/* INPUT
2
3
3 2 1
6
3 1 4 1 5 9

OUTPUT
3
5
*/
