// author: Jaya Gupta
// linear_search
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> arr(n);
		for(int &i:arr)
		cin>>i;
		for(i=0;i<n;i++)
		{
			if(arr[i]==key)
			break;
		}
		if(i==n)
		cout<<"not present"<<n<<endl;
		else
		cout<<"present"<<i+1<<endl;
	}
	return 0;
}
