#include<iostream>
using namespace std;
class circle
{
private:
	double radium;
public:
	circle(double r)
	{
		radium=r;
	};
	void get_area();
	void get_length();

};
int main()
{   
	double i;
	cout<<"������Բ�İ뾶:"<<endl;
	cin>>i;
	circle n(i);
	n.get_area();
	n.get_length();
    return 0;
}
void circle::get_area()
{
    cout<<"Բ�������:"<<3.1415926*radium*radium<<endl;
}
void circle::get_length()
{
	cout<<"Բ���ܳ���:"<<3.1415926*2*radium<<endl;
}
