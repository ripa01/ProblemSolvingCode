#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   float a,b,sum;

   std::cin >>std::fixed >> std::setprecision(6)>> a >> b;
   sum=((100.00+a)*(b/100.00+1)-100.00);
   std::cout << std::fixed << std::setprecision(6) << sum;

    return 0;
}
