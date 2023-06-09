#include <bits/stdc++.h>
using namespace std;

int main()
{   int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;


         vector<int> ans;
        for(int i=9;i>=1;i--){
            if(a==0)break;
            if(a<i){
                ans.push_back(a);
                break;
            }
            else{
                ans.push_back(i);
                a-=i;
            }
        }
        for(int i =ans.size()-1;i>=0;i--){
            cout<<ans[i];
        }cout<<endl;
    }

}
