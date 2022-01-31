#include <iostream>
using namespace std;
int main()
{
	int a=0, k, b=0, fullMarks, m;
	cout<<"How much student is in your class ";
	cin>>k;
	cout<<"Full marks of your Exam ";
	cin>>fullMarks;
	int marks[k];
	string name[k];
	
for(int i=0; i<k; i++)
	{
		cout<<"Enter student Name ";
		cin>>name[b];
		cout<<"Enter his/her marks ";
		cin>>marks[a];		
		b=b+1;
		a=a+1;
	}
a=0;
b=0;
	//Used this loop to output all the values of that array & added 2 array one for store name and one for store marks.
for(int j=0; j<k; j++)
	{
		marks[a] = m;
		cout<<name[b]<<" got "<<marks[a]<<" marks = "<<((m)/100)*fullMarks<< "%"<<endl;
		a++;
		b++;
		}
	return 0;
}
	
