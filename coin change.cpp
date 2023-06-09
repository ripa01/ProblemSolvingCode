#include<stdc/bits++.h>
using namespace std;

int minCoins(int coin[], int m, int v)
{
    int table[m+1][v+1], i,j;
    for (i=0; i<=m; i++)

    for (j=0; j<=v; j++){
        if(i==0 & j== 0){
            table[i][j]=1;
        }
    else  if (coin[i] >j)
            {
                  table[i][j]=table[i-1][j];

            }
            else
                int noc=table[i][j - coin[i-1]];
                table[i][j] = min(table[i-1][j], 1+noc);
            cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }
    return table[m][v];
}


int main()
{
    int c[]= {1,2,5};
    int amt = 8;
    int l = sizeof(c)/sizeof(c[0]);
    minCoins(c,l,amt)





}
