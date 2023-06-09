#include<bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

		string s;
		cin >> s;

		if(s.find("AB") !=-1 && s.find("BA",s.find("AB")+2) != -1 || s.find("BA") !=-1 && s.find("AB",s.find("BA")+2) != -1)//here 2 means  OCCURENCE of BA FROM +2 POSITION

            {
            cout<<"YES"<<endl;
		} else cout<<"NO"<<endl;

	}

//s.find("BA")+2 = position bujhayse jekhane AB khujbe kintu BA jei position a paisilo oi 2 ta position baad diye tai plus 2 likhse
