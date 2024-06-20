#include<iostream>
using namespace std;
int main()
{
	int age;
	char choice;
	cout<<"enter your age";
	cin>>age;
	cout<<"are you indian type 'y' or 'n' ";
	cin>>choice;
	(age>=18 && choice=='y') ?  cout<<"you are eligable" : cout<<"you are not eligable";
	return 0;
}
