#include<iostream>
using namespace std;
int main()
{
	int i=65;
	char c=i;//Copy one type of data into another type,this is called typecasting(implicit typecasting) 
	cout<<c<<endl;// A
	int *p=&i;
	//char *pc=p;//will give error
	char *pc=(char*)p;//explicit type casting
	cout<<*p<<endl;
	cout<<pc<<endl;//print A
	cout<<*pc<<endl;
	cout<<*(pc+1)<<endl;// will give null
	cout<<*(pc+2)<<endl;// will give null
	cout<<*(pc+3)<<endl;// will give null
}
