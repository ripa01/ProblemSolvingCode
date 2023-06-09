#include <stdio.h>


int main() {
    long long int n,m,c=0;
    scanf("%llu",&n);
    for(int j=0;j<n;j++){
        scanf("%llu",&m);
   for(int i=2;i<m;i++){
        if(m%i == 0)
           if(i%2 != 0){
    printf("YES\n");
  }
  else printf("NO\n");
    }
    }
    return 0;
}
