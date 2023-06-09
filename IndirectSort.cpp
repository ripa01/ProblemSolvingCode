
#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int A=0;
        for(int i=0;i<size(s);i++){

        if(s[i]=='Y' ){
            A++;

           if(s[1]=='e'){
            A++;

        if(s[2]=='s'){
            A++;
        }

        }

        if(A==3){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}


