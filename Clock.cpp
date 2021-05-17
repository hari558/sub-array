
#include<iostream>
#include<cstdio>
using namespace std;
int a[20];int n;
bool dfs(int x,int s)
{
	if(x==n)
	  return s%360==0?true:false;
	return dfs(x+1,s+a[x+1]) || dfs(x+1,s-a[x+1]);
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	   scanf("%d",&a[i]);
	printf(dfs(0,0)?"YES\n":"NO\n");
	return 0;
}
 
