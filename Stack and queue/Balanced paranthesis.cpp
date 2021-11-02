#include<iostream>
#include<stack>
using namespace std;
/*int main(){
	int count=0;
	int n,k,j=0;
	stack<char> s;
	
	cout<<"input no. of Paranthesis used";
	cin>>k;
	
	char s1[2*k];
	k*=2;
	cout<<"Input the braces in pair";
	for(int i=0;i<k;i++)
	{
	cin>>s1[i];
	}
	cout<<"Enter size of the string:";
	cin>>n;
	char str[n];
	for(int i=0;i<n;i++)
	{
		cin>>str[i];
		if(str[i]==s1[j]){
			s.push(str[i]);
			j+=2;
			cout<<s.top();
		}
	}
	for(int i=0;i<n;i++)
	{
		if(s.top()==str[i] && s.top()==s1[k]){
			s.pop();
			j+=2;
		}
	}
	if(s.empty())
	{
		cout<<"Stack is empty";
	}
	
}*/
bool isBalanced(string expr) {
   stack<char> s;
   char ch;
   for (int i=0; i<expr.length(); i++) {    //for each character in the expression, check conditions
      if (expr[i]=='('||expr[i]=='['||expr[i]=='{') {    //when it is opening bracket, push into     stack
         s.push(expr[i]);
         continue;
      }
      if (s.empty())    //stack cannot be empty as it is not opening bracket, there must be closing     bracket
         return false;
         switch (expr[i]) 
		 {
            case ')':    //for closing parenthesis, pop it and check for braces and square brackets
               ch = s.top();
               s.pop();
               if (ch=='{' || ch=='[')
                  return false;
                  break;
            case '}': //for closing braces, pop it and check for parenthesis and square brackets
               ch = s.top();
               s.pop();
               if (ch=='(' || ch=='[')
                  return false;
                  break;
            case ']': //for closing square bracket, pop it and check for braces and parenthesis
               ch = s.top();
               s.pop();
               if (ch =='(' || ch == '{')
                  return false;
                  break;
         }
      }
      return (s.empty()); //when stack is empty, return true
}
int main() {
   string expr = "[{}(){()}]";
   if (isBalanced(expr))
      cout << "Balanced";
   else
      cout << "Not Balanced";
  }

