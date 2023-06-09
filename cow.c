#include <stdio.h>


int main() {
    int p;
    double pi = 2*acos(0);
    scanf("%d", &p);
    while(p--) {
        double d, l, a, b, c;
        scanf("%lf %lf", &d, &l);
        d /= 2, l /= 2;
        c = d, a = l;

        b = sqrt(a*a-c*c);

        printf("%.3lf\n", pi*a*b);
    }
    return 0;
}
