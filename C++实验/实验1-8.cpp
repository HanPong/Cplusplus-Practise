#include<iostream>
#include<math.h>
using namespace std;
//class Distance
class Point
{
private:
	int x;
	int y;
public:
    Point(int a,int b);
	friend class Distance;

};
class Distance
{
public:
	void get_dis(Point a,Point b);
};
int main()
{
	int m,n;
	cout<<"Please enter the first point:"<<endl;
	cin>>m>>n;
	Point a1(m,n);
	cout<<"please enter the first point:"<<endl;
	cin>>m>>n;
	Point a2(m,n);
    Distance a3;
	a3.get_dis(a1,a2);
	return 0;
};
Point::Point(int a,int b)
{
	x=a;
	y=b;
}
void Distance::get_dis(Point a,Point b)
{
	int dis;
	dis=sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
	cout<<"The distance between this two point is:"<<dis<<endl;
}

