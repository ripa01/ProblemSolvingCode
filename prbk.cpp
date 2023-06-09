#include<bits/stdc++.h>
using namespace std;

int main(){


    int t;
    cin >> t ;
    while(t--){
       long long int a,b ;
    cin >> a >> b ;

    if(a==b){
        cout<<0<<endl;
    }
    else if(a>b){
        if(((a%2)==1) == ((b%2)==1) ) cout <<0<< endl ;
        else cout << 1 << endl ;
    }
    else{
        cout << abs(a-b) << endl ;
    }
    }

    return 0 ;
}
