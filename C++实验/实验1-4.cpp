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
	cout<<"�����볤���εĳ��Ϳ�:"<<endl;
	cin>>length>>wide;
}
void squre::output()
{
    cout<<"�����ε������:"<<length*wide<<endl;
	cout<<"�����ε��ܳ���:"<<2*length+2*wide<<endl;
}