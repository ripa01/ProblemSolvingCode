#include <bits/stdc++.h>
using namespace std;

int main(void)
{   string a,temp;
   cin >> a ;
    for (int i = 0; i < a.size(); i++) {

            //cout<<a[i];
        if(a[i] > a[i+2]){
            a[i] = temp[i];
            a[i]= a[i+2];
            a[i+2]= temp[i];

        }

        cout<<a[i];
    }
    return 0;
}

