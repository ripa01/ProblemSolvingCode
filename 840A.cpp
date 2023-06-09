#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int x,y;
        cin>>x>>y;
        vector<int> v(x);
        for(int i=0;i<x;i++){
            cin>>v[i];
        }
vector<int> v1(x);
        for(int i=0;i<x;i++){
            cin>>v1[i];
        }

        int a =0;
        for(int i=0;i<x;i++){
            if(v[i]>=y){
                a += v1[i];
            }
        }
        cout<<a<<endl;

    }

}


