//author : Jaya Gupta
/*
Given an array of no negative integers, design a linear algorithm and implement it using a program to find whether key element is present in array or 
not. Also, find total no. of comparisons for each input case.
*/
#include<bits/stdc++.h>
using namespace std;
void binary_search(vector<int> &arr, int n, int key)
{
	int l=0, r=n-1, comp=0;
	while(l<=r)
	{
		int mid=1+(r-1)/2;
		if(key==arr[mid])
		{
			break;
		}
		else if(key<arr[mid])
		r=mid-1;
		else
		l=mid+1;
		comp++;
	}
	if(l>r)
	{
		cout<<"not present"<<comp<<endl;
	}
	else
	{
		cout<<"present"<<comp+1<<endl;
	}
}
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
	int n;
	cin>>n;
	vector<int> arr(n);
    for(int &i:arr)
    cin>>i;
    int key;
    cin>>key;
    binary_search(arr,n,key);
    }
    return 0;
}
