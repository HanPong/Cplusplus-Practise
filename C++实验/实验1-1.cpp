#include<iostream>
using namespace std;
inline int sort(int a,int b,int c);

int main()
{
	int a,b,c;
	cout<<"Please enter three numbers:"<<endl;
	cin>>a>>b>>c;
	cout<<sort(a,b,c);
	cout<<endl;
}
inline int sort(int a,int b,int c)
{
	if(a>b&&a>c)
		return a;
	if(b>a&&b>c)
		return b;
	if(c>a&&c>b)
		return c;
}
