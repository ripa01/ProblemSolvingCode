#include<bits/stdc++.h>

using namespace std;

int main()
{
   int n,m,a,b;
   cin>>n;

    vector<int> v;

    for(int i =0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);


    }
    cin>>m>>a>>b;


    v.erase(v.begin()+(m-1));
    v.erase(v.begin()+(a-1),v.begin()+(b-1));
    cout<<v.size()<<endl;
    for(int i =0; i<v.size(); i++)
    {

        cout<<v[i]<<" ";
    }

    return 0;
}

