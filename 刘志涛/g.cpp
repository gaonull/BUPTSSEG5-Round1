#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[1000],p[1000];
	int t,b;
	int sum=0;
	cin>>t;
     for(int i=1;i<=t;i++)
     {
     	cin>>a[i];
	 }
	 for(int i=1;i<=t;i++)
	 {
	 	for(int j=2;j<=t;j++)
	 	{
	 		if(a[i]>a[j])
	 		{
	 			int tmp=0;
	 			tmp=a[i];
	 			a[i]=a[j];
	 			a[j]=tmp;
			 }
		 }
	 }
	 
	 for(int j=1;j<=t;j+=2)
	 {
	 	p[j]=a[j+1]-a[j];
	 	sum+=p[j];
	 }
	 cout<<sum<<endl;
	 
	 
 } 
