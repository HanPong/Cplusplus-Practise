#include<iostream>
using namespace std;
class Test
{
private:
	int num1;
	int num2;
public:
	int init(int m,int n);
	void print();
};
void main()
{   Test a;
	a.init(68,55);
	a.print();
}
int Test::init(int m,int n)
{
	num1=m;
	num2=n;
	m=m-n;
	return m;
}
void Test::print()
{
	cout<<num1<<"-"<<num2<<"="<<init(num1,num2)<<endl;	
}