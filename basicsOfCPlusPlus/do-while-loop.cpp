#include <iostream>
using namespace std;
int main ()
{
int a, i=0;
string name;//Used string to declare name casuse name is text type.
	cout<<"Enter your crush name ";
	cin>>name;
	cout<<"How much amount do you love her ";
	cin>>a;
	//Here do statement first compile what's inside of do, than it go to the while section.
	do{
		cout<<"Only I and You know how much you love "<<"'"<<name<<"'"<<" Keep loving your best."<<endl<<endl;
		i=i+1;
		}while(i<a);
	return 0;
}
