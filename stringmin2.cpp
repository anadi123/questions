#include<bits/stdc++.h>
using namespace std;


int main()
{
	string str="aabcccabba";
	//cin>>str;	//using cin because no space expected
	// Marking lpos = 1st char of left substring = 1st charof str
	// Markng rpos = last char of right substring= last char of str
	int lpos=0, rpos=str.length()-1;
	while(str[lpos]==str[rpos])
	{
		// Creating left substring prefix
		while(str[lpos+1]==str[lpos])
		{
			lpos++;
		}
		
		// Creating right substring suffix
		while(str[rpos-1]==str[rpos])
		{
			rpos--;
		}
		// erase common characters
		// from right substring
		str.erase(str.begin()+rpos,str.end());
		// from left substring
		str.erase(str.begin(),str.begin()+lpos+1);
		cout<<str<<"\n";
		// Reinitalising for next check
		lpos=0; rpos= str.length()-1;
	}
	cout<<str.length()<<"\n";
	return 0;
}
