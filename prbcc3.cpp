#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main(){

    int tc, t, s = 1,amt,val[101],w[10001];

    cin>> t;
    while(t-- ){
            int i,j;
       cin>>tc>>amt;

        for(i = 1; i <= tc; i++)
          cin>>val[i];

    memset(w, 0, sizeof(w));
    w[0]  = 1;
    for(i = 1; i <= tc; i++ ){
        for(j = 1; j <= amt; j++){
            if( val[i] <= j)
                w[j] = w[j] + w[j - val[i]];
            if(w[j] > 100000007)
                w[j] %= 100000007;
        }
    }

    cout<<"Case "<<s++<<": "<<w[amt]<<endl;

    }
    return 0;
}
