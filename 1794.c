#include <stdio.h>

int main() {

  int n,m,a[10000],b[100000],c[100000],s1=0,s2=0,s3=0,v1,v2,v3;


  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
       scanf("%d", &m);

for (int i = 0; i < m; ++i) {


    scanf("%d %d %d", &a[i],&b[i],&c[i]);
    s1 += a[i];
    s2 += b[i];
    s3 += c[i];
  }
  }
  for (int i = 1; i < m; ++i) {
    if (a[0] < a[i]) {
      a[0] = a[i];
    }
     if (b[0] < b[i]) {
      b[0] = b[i];
    }
     if (c[0] < c[i]) {
      c[0] = c[i];
    }

  }

 v1 = s1*b[0]*c[0];
 v2 = a[0]*s2*c[0];
 v3 = a[0]*b[0]*s3;
 if(v1<v2 && v1<v3){
    printf("%d\n",v1);
 }
else if(v2<v1 && v2<v3){
    printf("%d\n",v2);
 }
 else printf("%d\n",v3);

  return 0;
}

