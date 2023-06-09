#include<bits/stdc++.h>
using namespace std;

 int main()
{
    int t;
   cin>>t;
    while(t--)
    {



        int number[100];

        int i, j, a, n;

      cin>>n;


        for (i = 0; i < n; ++i)
	        cin>>number[i];



        for (i = 0; i < n; ++i)
        {
            for (j = i + 1; j < n; ++j)
            {
                if (number[i] < number[j])
                {
                    a = number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
            }
        }

           for (i = 0; i < n; ++i)
        {
            for (j = i + 1; j < n; ++j)
            {
                if (number[i] == number[j])
                {

                }
            }
        }

        for (i = 0; i < n; ++i)
        {
            cout<<number[i];
        }



    }
}
