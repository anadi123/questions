#include<bits/stdc++.h>
using namespace std;


int main()
{
	int i;
	string str="aabcccabba",left="", right="",w="";
	//Take input
	//vector<string> left,right;
	//Store first half in temporary word
	for (i=0;i<str.length()/2;i++)
		left=left+str[i];
	//left[i]='\0';
	//cout<<left<<"\n";
	for (i=str.length()/2;i<str.length();i++)
		right=right+str[i];
	//right[i]='\0';
	//cout<<right<<"\n";
	w=right+left;
	//cout<<w<<"\n";
	int lpos=right.length()-1, rpos= right.length();
	if(w[lpos]==w[rpos])
	{
		while(w[lpos-1]==w[lpos])
		{
			lpos--;
		}
		while(w[rpos+1]==w[rpos])
		{
			rpos++;
		}
		w.erase(w.begin()+lpos,w.begin()+rpos+1);
		//cout<<w<<"\n";
		rpos=lpos;
		lpos--;
		while(w[lpos]==w[rpos])
		{
			while(w[lpos-1]==w[lpos])
			{
				lpos--;
		}
			while(w[rpos+1]==w[rpos])
			{
				rpos++;
			}
			w.erase(w.begin()+lpos,w.begin()+rpos+1);
			rpos=lpos;
			lpos--;
		}
		//cout<<w;
		int n=w.length();
		cout<<n<<"\n";
	}
	else
	{
		cout<<str.length()<<"\n";
	}
	return 0;
}
