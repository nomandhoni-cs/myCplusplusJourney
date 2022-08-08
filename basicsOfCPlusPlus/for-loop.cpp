#include <iostream>
using namespace std;
int main()
{
int a;
	cout<<"How much time do you want to run this for loop ";
	cin>>a;
// 'i=1' means i gave it the first value than 'i<=a' condition checked if condition fulfil than it makes 'i++'. Here 'i++' means increse the value of i one at a times. Than it comes to strating point of of loop and run again, until the condition dosen't match.
	for(int i=1; i<=a; i++)
	{
		cout<<"The loop is running for "<<i<< " times."<<endl;
		}	
	return 0;
}
