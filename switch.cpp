#include<iostream>
using namespace std;
int main(){
	int weekN;
	cout<<"enter week number:";
	cin>>weekN;
	
	switch(weekN){
		
		case 1: cout<<"monday";
		break;
		
			case 2: cout<<"tuesday";
		break;
		
			case 3: cout<<"wednesday";
		break;
		
			case 4: cout<<"thur";
		break;
		
			case 5: cout<<"fri";
		break;
		
			case 6: cout<<"sat";
		break;
		default: cout<<"invalid choice";
	}
	
}
