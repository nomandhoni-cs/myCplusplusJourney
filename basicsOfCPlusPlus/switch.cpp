#include <iostream>
using namespace std;
int main(){
	int age;
	cout<<"Enter your age ";
	cin>>age;
	//Here the switch Statement used for check the integer value if case mathced with the integer it will show the case output.
	switch (age){
	case 18:
	cout<<"You're an Adult";
	break;
	case 12:
	cout<<"You're a Child";
	break;
	//if any of statement dosen't match than it will comein^ Default statement
	default:
	cout<<"You are neither 18 and nor 12 years old";
	break;
		}
	return 0;
	}
