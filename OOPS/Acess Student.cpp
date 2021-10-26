#include<iostream>
using namespace std;
#include "Student.cpp"
int main(){
	Student s1;
	Student s2;
	
	Student s3, s4, s5;
	
	Student *s6= new Student;
	s1.age=24;
	s1.rollNumber=198;
	
	(*s6).age=24;
	(*s6).rollNumber=788; // s6->=23; you can also write like that;
}
