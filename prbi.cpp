#include<bits/stdc++.h>
using namespace std;

int main(){
 long long int a;
   while (cin >> a && a  < 0){
            if(a == 0)

                     cout<<"0\n";

          else{
                string ter="";
           while(a>0){

            int mod = a%3;

            ter = ref[mod] + ter;

            a /= 3;
    }


                cout<<ter<<endl;
          }

    return 0;
}

