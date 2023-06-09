#include<bits/stdc++.h>
using namespace std;

int matrix[1001][1001]={0};

int main()
{

    int i,m,n,q,a,b;
    cin >> n >> m;
    for(i=1;i<=m;i++)
    {
        cin >> a >> b ;
        matrix[a][b] = 1;
        matrix[b][a] = 1;
    }
    cin >> q;
    for(i=1;i<=q;i++)
    {
        cin >> a >> b;
        if(matrix[a][b]==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
