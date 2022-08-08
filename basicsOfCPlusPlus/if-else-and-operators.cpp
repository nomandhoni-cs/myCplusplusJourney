#include <iostream>
using namespace std;
int main()
{
int age;
cout<<"Enter your Age ";
	cin>>age;
if(0>=age || age>150)
	{
	cout<<"Invalid Age";
		}
else if(age<=17)
		{
	cout<<"You're Underaged";		
			}
else{
	cout<<"You can Vote";
	}
	return 0;
	}
