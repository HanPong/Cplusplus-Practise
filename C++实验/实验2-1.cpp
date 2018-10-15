#include<iostream>
#include<string.h>
using namespace std;
class Book
{
private:
	int num;
	char name[10];
	char author[20];
	char publishment[20];
    double price;
public:
	Book();
	void get_price() const;
	friend void find(Book b);
};

int main()
{
	cout<<"请输入图书数目:"<<endl;
	int n;
	cin>>n;
	cout<<"请输入图书信息"<<endl;
	cout<<"数字 姓名 作者 出版社 价钱"<<endl;
	Book *b=new Book[n];//动态数组创建
	int i;
	cout<<"您想要书的序号:"<<endl;
	cin>>i;
    find(b[i]);
	b[i].get_price();
	delete []b;
	return 0;

}
Book::Book()
{
	//num=a;
	cin>>num>>name>>author>>publishment>>price;
}
void find(Book b)
{
	cout<<b.name<<endl;
	
}
void Book::get_price() const
{
	cout<<"该书的价格:"<<price<<endl;


} 

