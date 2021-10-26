#include <iostream>
using namespace std;
/*int main()
{
int arr[] = {4, 5, 6, 7}; 
int *p = (arr + 1);
cout<<arr<<endl;
cout << *(arr+1) + 9;
return 0;
}*/


/*int main ()
{
int numbers[5];
int * p;
p = numbers; 
*p = 10;
p = &numbers[2];
*p = 20;
p--; 
*p = 30;
p = numbers + 3;
*p = 40;
p = numbers;
*(p+4) = 50; 
for (int n=0; n<5; n++) 
{
cout << numbers[n] << ","; 
}
return 0;
}*/

/*int main()
{ 
char *ptr; 
char Str[] = "abcdefg";
ptr = Str;
ptr += 5;
cout << ptr; 
return 0;
}*/

/*int main()
{
char arr[20];
int i; 
for(i = 0; i < 10; i++) 
{
*(arr + i) = 65 + i; 
}
*(arr + i) = '\0';
cout << arr;  
return 0;
}*/

/*void swap (char *x, char *y) 
{
char *t = x;
x = y;
y = t;
}
int main()
{
char *x = "geeksquiz";
char *y = "geeksforgeeks";
char *t;
swap(x, y);
cout<<x << " "<<y;
t = x;
x = y;
y = t; 
cout<<" "<<x<< " "<<y;
return 0;
}*/

/*int main()
{
float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
float *ptr1 = &arr[0];
float *ptr2 = ptr1 + 3;
cout<<*ptr2<<" ";
cout<< ptr2 - ptr1;
return 0;
}*/

/*int main() 
{
char st[] = "ABCD"; 
for(int i = 0; st[i] != ‘\0’; i++) 
{
cout << st[i] << *(st)+i << *(i+st) << i[st]; 
}
return 0;
}*/

/*void Q(int z)
{
z += z;
cout<<z << " ";
}
void P(int *y) 
{
int x = *y + 2;
Q(x);
*y = x - 1; 
cout<<x << " ";
}
int main()
{
int x = 5;
P(&x);
cout<<x;
return 0;
}*/

/*int main()
{
int ***r, **q, *p, 
i=8;
p = &i;
(*p)++;
q = &p;
(**q)++;
r = &q;
cout<<*p << " " <<**q << " "<<***r;
return 0;
}*/

int f(int x, int *py, int **ppz) 
{
int y, z;
**ppz += 1;
z = **ppz;
*py += 2;
y = *py;
x += 3;
return x + y + z;
}
int main() 
{
int c, *b, **a;
c = 4;
b = &c;
a = &b;
cout << f(c, b, a);
return 0;
}
