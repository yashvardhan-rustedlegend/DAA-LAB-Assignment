#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;
int String(string s){
	if(s.length()<=0)
	return true;
	if(s[0]=='a'){
		if(s[1]=='a')
		return String(s.substr(1));
		else if(s[1]=='b')
		return String(s.substr(1));
		if(s[1]=='\0')
		return true;
		else
		return false;
	}
	else if(s[0]=='b'){
		if(s[1]=='b' && s[2]=='a')
		return String(s.substr(2));
		else if(s[1]=='b' && s[2]=='\0')
		return true;
		else
		return false;
	}
}
int main(){
	string s="abababababbb";
	cout<<String(s);
}
