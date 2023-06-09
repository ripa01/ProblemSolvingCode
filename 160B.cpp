
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        int a[n+1];
        for(int i=0;i<n;i++){
            cin>>a[i];


        }
        int f = a[0];
        sort(a,a+n);
        for(int i=1;i<n;i++){
            if(a[i]>f){

                    if((a[i]-f)%2==0)
                    f += (a[i]-f)/2;
                    else f += (a[i]-f)/2 +1;

            }



        }

         cout<<f<<endl;

    }

}

