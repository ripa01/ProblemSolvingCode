int main(){
int i, n,t,s = 0;
scanf("%d",&n);
for(i = 1; i <= n; i++){
  if(i%2 == 0)
   t = -i*i;
    else
     t = i*i;
      s = s + t;
}
printf("%d",s);
}
