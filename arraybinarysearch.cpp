// array binary search
#include<iostream>
using namespace std;
int arrsearch(int arr[],int n,int key);
int main()
{
	int n;
	cout<<"enter size of array"<<endl;
	cin>>n;
	int arr[n];

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int key;
	cin>>key;

	cout<<arrsearch(arr,n,key)<<endl;
}
int arrsearch(int arr[],int n,int key)
{
	int s=0;
	int e=n;
	while(s<=e)
	{
		int mid=(s+e)/2;
		
		if(arr[mid]==key)
		{
			return mid;
		}
		else if(arr[mid]>key)
		{
			s=mid-1;
		}
		else
		{
			s=mid+1;
		}
	}
	return -1;
}
