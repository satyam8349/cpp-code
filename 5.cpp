#include<iostream>
using namespace std;
int main(){
	double salary,bonus;
	int year;
	cout<<"enter our salary";
	cin>>salary;
	cout<<"enter year of salary";
	cin>>year;
	if(year>5){
		cout<<"your are elagble for bonus\n";
		bonus=salary*(5.0/100);
		cout<<"you got bonus of rupees"<<bonus<<endl;
		cout<<"you got salary of rupees"<<salary+bonus;
	}
		
	else{
		cout<<"you aer not eligable for bonus\n";
		cout<<"you got salary of rupees:"<<salary;
	}
	return 0;
}
