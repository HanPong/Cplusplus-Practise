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
	cout<<"������ͼ����Ŀ:"<<endl;
	int n;
	cin>>n;
	cout<<"������ͼ����Ϣ"<<endl;
	cout<<"���� ���� ���� ������ ��Ǯ"<<endl;
	Book *b=new Book[n];//��̬���鴴��
	int i;
	cout<<"����Ҫ������:"<<endl;
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
	cout<<"����ļ۸�:"<<price<<endl;


} 

