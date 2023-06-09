#include<bits/stdc++.h>

using namespace std;

int main(){

int i,n;
cin>>n;

while(n--){

     string s1;
     cin>>s1;
     sort(s1.begin(),s1.end());
     string s2 = s1;
     reverse(s1.begin(),s1.end());
     cout<<s1+s2<<endl;



}

}
