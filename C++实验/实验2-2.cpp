#include<iostream>
using namespace std;

class Student
{
private:
	char name[10];
	int num;
	double mark;
	static int total;
public:
	Student();
	double get_mark();
	friend void Sort();
	friend int get_total();
	friend void Print(Student);

};
int Student::total=0;
int main()

{   

	cout<<"请输入班级人数:"<<endl;
	int i;
	cin>>i;
	cout<<"请输入学生的姓名，学号和成绩:"<<endl;
	Student *s=new Student [i-1];
	int m=get_total();
	//cout<<m;
	Student temp;
	for(i=0;i<m;i++)
	{
		if(s[i].get_mark()<s[i+1].get_mark())
		{
			temp=s[i+1];
			s[i+1]=s[i];
			s[i]=temp;
		}
	   
	}
	cout<<"Name "<<"Number "<<"Mark "<<endl;
	
	for(i=0;i<m;i++)
	{   
		Print(s[i]);
	}
	cout<<"该班级共有"<<get_total()<<"人"<<endl;
	delete []s;
	return 0;


}
Student::Student()
{
	cin>>name>>num>>mark;
	total++;
}

int get_total()
{
	int m;
	m=Student.total;
	return m;
}
double Student::get_mark()
{
	double m;
	m=mark;
	return m;
}
void Print(Student a)
{
    
	cout<<a.name<<"  "<<a.num<<"     "<<a.mark<<endl;
}