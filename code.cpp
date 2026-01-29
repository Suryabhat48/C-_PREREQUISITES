#include<iostream>
#include<conio.h>
using namespace std;
int sumNum(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main(){
    // int n;
    // cout<<"Enter a number "<<endl;
    // cin>>n;
    // if(n>=0){
    //     cout<<"The number is positive"<<endl;
    // }
    
    // 	int age;
// 	cout<<"Enter your age"<<endl;
// 	cin>>age;
// 	if(age>=18){
// 	    cout<<"Congrats you are eligible for voting"<<endl;
// 	}
// 	else{
// 	    cout<<"Sorry you can't vote"<<endl;
	    
// 	}
// 	int n;
// 	cout<<"Enter a number"<<endl;
// 	if(n%2==0){
// 	    cout<<"Even number"<<endl;
// 	}
// 	else{
// 	    cout<<"Odd number"<<endl;
// 	}\
// Prgram to calculate sum of numbers from 1 to n 
// int n,sum=0;
// cout<<"Enter the number "<<endl;
// cin>>n;
// // for(int i=1;i<=n;i++){
// //     sum=sum+i;
// // }
// // cout<<"The sum of n numbers is "<<sum<<endl;
// int i=1;
// while(i<=n){
//     sum+=i;
//     i++;
// }
// cout<<"The sum of the numbers one to n is"<<sum<<endl;
// // 	Program to calculate sum of even  numbers
// for(int i=1;i<=n;i++){
//     if(i%2==0){
//         sum+=i;
//     }
// }
// cout<<"Sum of even numbers from one to n is "<<sum<<endl;
// int oddSum=0;
// int i=1;
// while(i<=n){
//     if(i%2!=0){
//         oddSum+=i;
//     }
//     i++;
// }
// cout<<"ODD SUM IS "<<oddSum<<endl;
// Program to check whether the number is prime or not using the unique factors approach/
// int isPrime=true;
// for(int i=2;i*i<=n;i++){
//     if(n%i==0){
//         isPrime=false;
//         break;
//     }
// }
// if(isPrime){
//     cout<<"The number that you have entered is prime number"<<endl;
    
// }
// else{
//     cout<<"The number that you have entered is composite number"<<endl;
// }
// Program to calculate the sum of all numbers which are divisible by 3
// int divSum=0;
// for(int i=1;i<=n;i++){
//     if(i%3==0){
//         divSum+=i;
//     }
// }
// cout<<"Sum of the numbers which are divisible by n is "<<divSum<<endl;
// Program to calculate the factorial of the numbers
int fact=1;
int n;
cout<<"Enter the digit which you want to see the sum of"<<endl;
cin>>n;
for(int i=1;i<=n;i++){
    fact*=i;
}
cout<<"Factorial of the given number is "<<fact<<endl;
int sumDigit=sumNum(n);
cout<<"The sum of the digits is "<<sumDigit<<endl;
    return 0;
    
}