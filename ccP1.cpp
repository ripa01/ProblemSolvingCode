#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int a;
        cin>>a;
        int ar[a+1],r=0;
        for(int i=0;i<a;i++){
            cin>>ar[i];

        }
        sort(ar,ar+a);
        for(int i=0;i<a;i++){
                if(ar[i]>(i+1)){
                    r = -1;
                    break;
                }

             r += abs(ar[i] - (i + 1));
        }
        cout <<r<<endl;



    }

}

