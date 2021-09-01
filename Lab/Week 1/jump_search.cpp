//author :Jaya Gupta
//Jump search
#include<bits/stdc++.h>
using namespace std;

int jumpSearch(int *a, int n, int key)
{
	int i=0, j=2;
	int comp=0;
	while(comp++ && a[j]<=key &&j<n)
	{
		if (a[j]==key)
		{
			cout<<"present";
			return j;
		}
		i=j;
		j*=2;
		if(j>=n)
		{
			j=n-1;
		}
	}
	for(int k=i;k<=j;k++,comp++)
	{
		if(a[k]==key)
		{
			cout<<"present";
			return j;
		}
	}
	cout<<"not present";
	return comp;
}
int main()
{
	int t;
	cin>>t;
	
	while (t--)
	{
		int n;
		cin>>n;
		
		int *a=new int[n];
		for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	int key;
	cin>>key;
	
	cout<<jumpSearch(a,n,key)<<endl;
   }
   return 0;
}
