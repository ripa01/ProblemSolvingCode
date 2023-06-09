#include <stdio.h>

int main()
{
   int num,i;

    scanf("%d",&num);

    int fact[20];


    fact[0] = 1;

    for (i=1; i<20; i++)
        fact[i] = ((fact[i-1] % MOD) * (i % MOD)) % MOD;

    while (cin >> n)
        cout << (n < 20 ? fact[n] : 0) << endl;


    return 0;
}
