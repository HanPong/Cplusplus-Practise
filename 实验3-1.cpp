#include<iostream>
using namespace std;
class Point
{
private:
	int x,y,z;
public:
	Point();
	Point(int i,int j,int k);
	Point operator ++();
	Point operator --();
	Point operator ++(int);
	Point operator --(int);
	void Print();
};
int main()
{
	int i,j,k;
	cout<<"��������x��y��z������:"<<endl;
	cin>>i>>j>>k;
	Point a(i,j,k);
	cout<<"�õ������Ϊ:";
	a.Print();
	cout<<"++a:";
    ++a;
	a.Print();
    cout<<"--a:";
	--a;
	a.Print();
	cout<<"a++:";
    a++;
	a.Print();
    cout<<"a--:";
	a--;
	a.Print();

	return 0;

}
Point::Point()
{
	x=0;
	y=0;
	z=0;
}
Point::Point(int i,int j,int k)
{
	x=i;
	y=j;
	z=k;
}
Point Point::operator ++()
{
	++x;
	++y;
	++z;
	return *this;
}
Point Point::operator --()
{
	--x;
	--y;
	--z;
	return *this;
}
Point Point::operator ++(int)
{
	Point temp=*this;
	x++;
	y++;
	z++;
	return temp;
}
Point Point::operator --(int)
{
	Point temp=*this;
	x--;
	y--;
	z--;
	return temp;

}
void Point::Print()
{
	cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
}
