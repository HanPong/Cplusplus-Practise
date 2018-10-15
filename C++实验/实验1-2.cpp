#include<iostream>
using namespace std;
class point
{
public:
	char overload(char a);
	char overload(int a);

};
int main()
{   
	char x;
	int r;
	point n;
	cout<<"Please enter a digit or a character:"<<endl;
	cin>>x;
	r=int(x);//r is ascII
	if(47<r&&r<57)
	{
		cout<<"You entered a digit:"<<n.overload(r)<<endl;
	}
	if((64<r&&r<91)||(96<r&&r<123))
	{
		cout<<"The character which you entered has been change into:"<<n.overload(x)<<endl;
	}
	return 0;
}
char point::overload(char a)
{

	return a+1;
}
char point::overload(int a)
{
	
	return char(a);
}
