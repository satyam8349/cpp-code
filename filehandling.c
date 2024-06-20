/*file handling
----------------

to store data (output) permanently in seacondary meamory.

3  imp class

ifstream --> input opreation(read)
ofstream-->  output operation (write)*/



#include<iostream>
#include<fstream>
using namespace std;

int main(){

    ofstream obj1;
    obj1.open("xyz.txt");
    cout<<"file creater";
    obj1.close();
}




