#include<bits/stdc++.h>
using namespace std;
string a;
int palindrome(int l,int r,int n)
{
	if(l>=n/2)
		return 1;
	if(a[l]!=a[r])
	 	return 0;
	return palindrome(l+1,r-1,n); 
}
int main()
{
  	cin>>s;
 	 int l=0;
 	 int r=a.length()-1;
	  int x=palindrome(l,r,a.length());
	  if(x==1)
 	   cout<<" string is palindrome";
	  else
	    cout<<"string is not a palindrome";		
}
