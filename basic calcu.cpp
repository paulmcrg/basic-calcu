#include<iostream>
using namespace std;

int main(){
	// calcu basic
	
	char cal;
	int num1,num2,total;
	
	cout<<"choose a operation to perform + - * /"<<endl;
	cin>>cal;
	
	cout<<"enter first number"<<endl;
	cin>>num1;
	
	cout<<"enter second number "<<endl;
	cin>>num2;

		
	switch(cal){
		
		case '+': total = num1 + num2;
		break;
		
		case '-': total = num1 - num2;
		break;
		
		case '*': total = num1 * num2;
		break;
		
		case '/':total = num1 / num2;
		break;
		
		default:
			cout<<"error operation"<<endl;
			
	}
		cout<<"total :"<<total;
}
