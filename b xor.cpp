#include<bits/stdc++.h>

using namespace std;

int main(){

int n;
cin>>n;

while(n--){

     int i;
     cin>>i;
     if(i%2 != 0){
        for(int j=0;j<i;j++){
            cout<<1<<' ';
        }
        cout<<endl;
     }
     else if(i==2){
        cout<<1<<' '<<3<<endl;
     }
     else {
        cout<<2<<' '<<4<<' '<<6;
        for(int j=3;j<i;j++){
            cout<<' '<<4;
        }
        cout<<endl;
     }

}

}

