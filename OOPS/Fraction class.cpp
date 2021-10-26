#include<iostream>
using namespace std;
class Fraction{
	private:
		int numerator;
		int denominator;
	public:
		Fraction(int numerator, int denominator)
		{
			this->numerator= numerator;
			this->denominator= denominator;
		}
		void print()
		{
			cout<<this->numerator<<"/"<<this->denominator<<endl;
		}
		void simplify()
		{
			int gcd=1;
			for(int i=1;i<=min(this->numerator,this->denominator);i++){
			if(this->numerator%i==0 && this->denominator%i==0)
				gcd=i;
			}
			this->numerator=this->numerator/gcd;
			this->denominator=this->denominator/gcd;
			
		}
		void add(Fraction const &f2)//to avoid unnecessary copying of data.
		{
			int lcm=denominator*f2.denominator;
			int x=lcm/denominator;
			int y=lcm/f2.denominator;
			int num=x*numerator+(y*f2.numerator);
			numerator=num;
			denominator=lcm;
			simplify();
		}
		void multiply(Fraction f2)
		{
			numerator=numerator*(f2.numerator);
			denominator=denominator*(f2.denominator);
			simplify();
		}
		void divide(Fraction f2)
		{
			numerator=numerator*(f2.denominator);
			denominator=denominator*(f2.numerator);
			simplify();
		}
};
int main()
{
	Fraction f1(10,20);
	Fraction f2(30,40);
	f1.add(f2);
	f1.print();
	f2.print();
}
