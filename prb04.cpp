#include<bits/stdc++.h>
using namespace std;


int main()
{
 int t;
    cin>>t;
    while(t--)
    {
       int n,x,c,a[100],sum=0;
        cin>>n>>x>>c;

      for(int i=0;i<n;i++){
           cin>>a[i];
       }
     int add=0;
     for(int i=0;i<n;i++){

         if((x -a[i])> c){
             sum += x;
            add += c;

         }
         else sum += a[i];
       }

    cout<< sum - add <<endl;


        }


    return 0;

}
