/*1. WAP to implement exception handling mechanism for different types of scenarios:
  - a number cannot be divide by zero*/
#include<iostream>
using namespace std;
 	main (){
 		int a;
 		int b;
 		char error[]="cannot divid by zerro";
	 cout<<"enter value A:";
	 cin>>a;
	 cout<<"enter value B:";
	 cin>>b;
	
	 
	 try{
	 	if(b==0){
	 		throw error;
		 }
		 else 
		 {
		 	int c=a/b;
		 	cout<<c<<endl;
		 }
	 }
	 catch(char arr[]){
	 	cout<<arr;
	 }
}
