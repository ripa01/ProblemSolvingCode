/*include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){

    int n;
    cin>>n;
    string s;
    cin>>s;

    for(int i=0 ; i < n ; i++){

        if(s[i] == s[i+1]){

            cout<<n<<endl;
         }
         else cout << (n*(n+1)) /2 <<endl;

    }


}
} */

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
  int n;
  cin >> n;
  string s;
  cin >> s;
  bool found = false;
  string ans;
  for (int i = 0; i < n - 1; i++) {
    if (s[i] != s[i + 1]) {
      found = true;
      ans += s[i];
      ans += s[i + 1];
      break;
    }
  }
  if (found) {

    cout << (n*(n+1)) /2 <<endl;
  } else {
    cout << n <<endl;
  }

    }
  return 0;

}


