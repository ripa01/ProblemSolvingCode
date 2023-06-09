#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t=1;
    cin>>t;
    while(t--)
    {

        int n;
        string s;
        cin>>n>>s;
        vector<pair<char,int>> v;
        for(int i=0;i<n*2;i++){
           v.push_back({s[i],i});

        }
        vector<int> v1;
        sort(v.begin(),v.end());
        string a="";
        string b="";
        for(int i=0;i<n*2;i++){
          if(i<n){
            a += v[i].first;
            v1.push_back(v[i].second);

        } else {
            b += v[i].first;

        }
        }

       if(a==b){
        cout<<-1<<endl;

       }
       else{
       sort(v1.begin(),v1.end());

       for(int i=0;i<v1.size();i++){
        cout<<i<<" ";
       } cout<<endl;
       }

    }



}

