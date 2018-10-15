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
	cout<<"请输入圆的半径:"<<endl;
	cin>>i;
	circle n(i);
	n.get_area();
	n.get_length();
    return 0;
}
void circle::get_area()
{
    cout<<"圆的面积是:"<<3.1415926*radium*radium<<endl;
}
void circle::get_length()
{
	cout<<"圆的周长是:"<<3.1415926*2*radium<<endl;
}
