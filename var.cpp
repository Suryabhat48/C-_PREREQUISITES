#include<iostream>
using namespace std;
int main(){
    // cout<<"Hello this is my first cpp program and I am Surya!"<<endl;
    int age=25;
    cout<<sizeof(age)<<endl;
    char grade='A';
    float pi=3.14f;
    age=grade; // implicit typecasting
    cout<<age<<endl; 
 // Until and unless we write the f suffix, the compiler treats decimal values as double by default.eturn 0;
    bool isAdult=true;
    double largeDecimal=3.141592653589793;
    age=grade; // implicit typecasting
    	int age;
	cout<<"Enter your age buddy"<<endl;
	cin>>age;
	cout<<" MY AGE IS :"<<age<<endl;
        
    return 0;
}