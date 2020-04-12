#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    float a;
	    int b;
	    cin>>a>>b;
	    cout<<setprecision(b)<<a<<endl;
	}
	return 0;
}
