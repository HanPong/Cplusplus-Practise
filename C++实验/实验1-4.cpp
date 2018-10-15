#include<iostream>
using namespace std;
class squre
{
private:
	double length;
	double wide;
public:
	squre()
	{
		length=0;
		wide=0;
	}
	void input();
	void output();
};
int main()
{
	squre n;
	n.input();
	n.output();
	return 0;

	
}
void squre::input()
{
	cout<<"请输入长方形的长和宽:"<<endl;
	cin>>length>>wide;
}
void squre::output()
{
    cout<<"长方形的面积是:"<<length*wide<<endl;
	cout<<"长方形的周长是:"<<2*length+2*wide<<endl;
}