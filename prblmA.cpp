#include <iostream>

using namespace std;

int main(){
   int sum=0,j=1;
   int n;
   cin>>n;
    for (int i=1; i<=n; i++){
          while(j--) sum += i*j;
    }
      j++;

   cout<<sum;


    }

