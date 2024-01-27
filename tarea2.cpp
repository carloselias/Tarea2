#include <iostream>
bool a;
int n1,n2;
char ege,rp='S';
void ej1();
void ej2();
void ej3();
void ej4();
void ej5();
int main()
{
	while(rp=='S'||rp=='s')
	{
		std::cout<<"Opciones"<<std::endl<<"a) verificar si un numero es par"<<std::endl<<"b) determinar si un año es bisiesto o no"<<std::endl<<"c) determinar si dos numeros son iguales"<<std::endl<<"d) verificar si el usuario es mayor de edad"<<std::endl<<"e) evaluar si un estudiante aprobo un examen"<<std::endl<<"ingrese su opcion > ";
		std::cin>>ege;
		switch(ege)
    	{
    		case 'a':
    			ej1();
    		break;
    		case 'b':
    			ej2();
    		break;
    		case 'c':
	    		ej3();
    		break;	
    		case 'd':
    			ej4();
    		break;
    		case 'e':
    			ej5();
    		break;
		}
		std::cout<<std::endl<<"desea repetir programa? [S/N] >";
		std::cin>>rp;
	}
}
void ej1()
{
   	std::cout<<"ingrese el numero > ";
	std::cin>>n1;
	if(n1%2==0)
        std::cout<<"> es par";
    else
       std::cout<<"> es impar";
}
void ej2()
{
	std::cout<<"ingrese el año > ";
	std::cin>>n1;
	if(n1%400==0)
    std::cout<<"> si es bisiesto";
	else
	std::cout<<"> no es bisiesto";
}
void ej3()
{
	std::cout<<"ingrese el primer numero > ";
	std::cin>>n1;
	std::cout<<"ingrese el segundo numero > ";
	std::cin>>n2;
	if (n1==n2 && n2==n1)
    std::cout<<"> si son iguales";
	if (n1!=n2 && n2!=n1)
	std::cout<<"> no son iguales";
}
void ej4()
{
	std::cout<<"ingrese su edad > ";
	std::cin>>n1;
	a=n1>=18;
	if (a=true && n1>=18)
    std::cout<<"> si es mayor de edad";
	if (a=false && n1<18)
	std::cout<<"> no es mayor de edad";
}
void ej5()
{
	std::cout<<"ingrese la nota obtenida > ";
	std::cin>>n1;
	a=n1>=60;
	if (a==true && n1>=60)
    std::cout<<"> aprobo el examen";
	if (a==false && n1<60)
	std::cout<<"> reprobo el examen";
}