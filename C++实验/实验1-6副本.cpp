#include<iostream>
using namespace std;
class circle
{
private:
	double radium;
public:
	circle()
	{
		radium=0;
	}
	void input();
	void output();
};
int main()
{
	circle n;
	n.input();
	n.output();
	return 0;

	
}
void circle::input()
{
	cout<<"请输入圆的半径:"<<endl;
	cin>>radium;
}
void circle::output()
{
    cout<<"圆的面积是:"<<3.1415926*radium*radium<<endl;
	cout<<"圆的周长是:"<<3.1415926*2*radium<<endl;
}