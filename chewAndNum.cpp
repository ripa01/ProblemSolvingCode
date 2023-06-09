#include <bits/stdc++.h>
using namespace std;

int main()
{

     string s;
	cin>>s;

	for (int i = 0; i< s.size(); i++){
		if (s[i] >= '5' && s[i] <= '9')// 9 - 4 =5 --- 5 6 7 8 9 check korbe
		{

			if (i == 0 && s[i] == '9')//if 9 don't change
                continue;
			s[i] = '0' + '9' - s[i]; // 48+57-53 return 52
		}
	}
	cout<<s<<endl;
	return 0;
    }
