#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int a,b,c;
        cin >> a >> b >>c;
        if((a > b || c>b) &&(a<b || c<b) )cout <<"Case "<<i<<":"<< b << endl;
        else if((b > a || c>a) &&(b<a || c<a) )cout <<"Case "<<i<<":"<< a << endl;
        else cout <<"Case "<<i<<":"<< c<< endl;
    }
    return 0;
}

