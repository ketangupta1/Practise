#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int z=0;z<t;z++)
	{
	    int n,r;
	    cin>>n>>r;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    int b[n];
	    for(int i=0;i<n-r;i++)
	        b[i]=arr[i+r];
	    for(int i=0;i<r;i++)
	       b[n-r+i]=arr[i];
	    for(int i=0;i<n;i++)
	       cout<<b[i]<<" ";
	    cout<<"\n";
	}
	return 0;
}
