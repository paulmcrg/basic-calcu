#include<iostream>
using namespace std;

int main(){
	// calcu basic
	
	char cal;
	double num1,num2, num3,total;
	
	cout<<"choose a operation to perform + - * /"<<endl;
	cin>>cal;
	
	cout<<"enter first number"<<endl;
	cin>>num1;
	
	cout<<"enter second number "<<endl;
	cin>>num2;

	cout<<"enter third number"<<endl;
	cin>>num3;
	switch(cal){
		
		case '+': total = num1 + num2 + num3;
		break;
		
		case '-': total = num1 - num2 - num3;
		break;
		
		case '*': total = num1 * num2 * num3;
		break;
		
		case '/':total = num1 / num2 / num3;
		break;
		
		default:
			cout<<"error operation"<<endl;
			
	}
		cout<<"total :"<<total;
}
