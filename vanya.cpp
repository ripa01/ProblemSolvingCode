#include <iostream>
using namespace std;

int main()
{
    int sum=0,h,n,p;
    cin>> n>> h;

 for (int j = 0; j < n; j++){

         cin>> p;

        if(p<=h){

           sum = sum+1;
        }

        else{

            sum= sum+2;
        }



 }

  cout<<sum<<endl;
	return 0;
}
