#include <stdio.h>


main(){ // continue
    int i;
double number,sum=0.0;
for(i=1;i<=10;++i)
{
printf("Enter n%d:",i);
scanf("%lf",&number);
if(number<0.0)
{
continue;}
sum+=number;
}
printf("Sum = %.2lf",sum);
}

//summation 1...

int main(){
int i, n,t,s = 0;
scanf("%d",&n);
for(i = 1; i <= n; i++){
if(i%2 == 0)
t = i*i;
else
t = -i*i;
s = s + t;
}
printf("%d",s);


// summation 1+2...

int main(){
int i, n,t,s = 0;
scanf("%d",&n);
for(i = 1; i <= n; i++){
t = i;
s = s + t;
}
printf("%d",s);
}



//summation 1/2....


int main(){
int i, n;
float x,t,r,s = 0;
scanf("%f%d",&x, &n);
x = 22.0*x/(7*180);
s = t = x;
for(i = 1; i < n; i++){
r = -x*x/(2*i*(2*i+1));
t = r*t;
s = s + t;
}
printf("%f",s);
}


//factorial

int main(){
int i, n,t,p = 1;
scanf("%d",&n);
for(i = 1; i <= n; i++){
t = i;
p = p * t;
}
printf("%d",p);
}

//all factor of n

int main(){
int i,n;
scanf("%d",&n);
for(i = 1; i <= n; i++){
if(n%i == 0)
printf("%d ",i);
}
}

// prime number

int main(){
int i,n,c=0;
scanf("%d",&n);
for(i = 1; i <= n; i++){
if(n%i == 0)
c++;
}
if(c == 2)
printf("Prime Number");
else printf("Not a Prime Number");
}


//perfect number

int main(){
int i,n,s=0;
scanf("%d",&n);
for(i = 1; i < n; i++){
if(n%i == 0)
s = s + i;
}
if(s == n)
printf("Perfect Number");
else printf("Not a Perfect Number");
}


//GCD

int main(){
int i,a,min,b,gcd=1;
scanf("%d%d",&a,&b);
if(a == 0 || b == 0) gcd = a+b;
else{
min = (a < b)? a : b;
for(i = 1; i <= min; i++){
if(a%i == 0 && b%i == 0)
gcd = i;
}
}
printf("GCD: %d",gcd);
}

// fibonacci series

int main(){
int p1,p2,next,n;
scanf("%d",&n);
p1 = 1;
p2 = 1;
for(i = 3; i <= n; i++){
next = p1 + p2;
p1 = p2;
p2 = next;
}
if(n <= 2) printf("%d", p1);
else printf("%d", next);
}


