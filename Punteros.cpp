#include <iostream>
using namespace std;

main (){
	
	 int edad=25,*p_edad;
	 p_edad = &edad;
	 
	cout<<"Variable Edad: "<<edad<<endl;
	cout<<"Puntero Edad: "<<*p_edad<<endl;
	
	cout<<"------Cambiar Valores------"<<endl; 
	edad = 40;
	
	cout<<"Variable Edad: "<<edad<<endl;
	cout<<"Puntero Edad: "<<*p_edad<<endl;
	
	cout<<"-----Otra Variable de p_edad------"<<endl; 
	int edad2=100;
	p_edad = &edad2;
	edad=400;
	
	cout<<"Variable Edad: "<<edad<<endl;
	cout<<"Puntero Edad: "<<*p_edad<<endl;
	cout<<"Variable Edad: "<<edad2<<endl;
system("pause");	
}
