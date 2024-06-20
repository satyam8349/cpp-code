#include <iostream>
using namespace std;
int main(){
	double cost,discount;
	cout<<"enter cost price";
	cin>>cost;
	
	if(cost<2000){
		discount=cost*(5/100.0);
		cout<<"discount:" <<discount<<endl;
		cout<<"amount paid:" <<cost-discount;
		
	}
	else if(cost>2000){
		discount=cost*(25/100.0);
		cout<<"discount:" <<discount<<endl;
		cout<<"amount paid:"<<cost-discount;
		
	}
	else if(cost>500){
		discount=cost*(35/100.0);
		cout<<"discount:" <<discount<<endl;
		cout<<"amount paid:"<<cost-discount;
		
}
else if(cost>10000){
		discount=cost*(50/100.0);
		cout<<"discount:"<<discount<<endl;
		cout<<"amount paid:"<<cost-discount;
		
	}
}
		
