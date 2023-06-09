#include <bits/stdc++.h>
using namespace std;


int a, p,c1=0;
int main() {
    cin >> a;
   for(int i=0;i<a;i++){
    cin>>p;
    if (p ==1) {
        c1++;
    }
   }
if(c1 >= 1){
    printf("HARD\n");
}else printf("EASY\n");
}

