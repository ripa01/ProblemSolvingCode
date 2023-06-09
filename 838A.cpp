#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int a[3],b[3];
        for(int i=0;i<3;i++){
            cin>>a[i]>>b[i];


        }
        if(a[0] != a[1] && a[0] != a[2] && a[1] != a[2])
        cout <<"YES"<<endl;
        else if(b[0] != b[1] && b[0] != b[2] && b[1] != b[2])
        cout <<"YES"<<endl;
        else cout<<"NO"<<endl;



    }

}

