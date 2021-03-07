#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	
int numAlumnos;
int numNotas;
int contAprobados=0;
int contReprobados=0;
	
	
cout<<"ingrese el numero de estudiantes: ";
cin>>numAlumnos;
int arr[numAlumnos];
cout<<"Ingrese la cantidad de notas por estudiantes: \n ";

cin>>numNotas;
int arr2[numNotas];
cout<<"catura de calificaciones: "<<endl;
cout<<"-------------------------------\n";

int k=0;

for(int i=0;i<numAlumnos;i++)
{
	
	cout<<"calificaciones del Alumno: "<<i+1<<endl;
	for(int j=0;j<numNotas;j++)
	{
		
	cout<<"calificacion"<<j+1<<endl;
	cin>>arr2[j];
	arr[j+k]=arr2[j];
	
	if(arr2[j>=6])
	{
		contAprobados++;
	}
	else
	{
		contReprobados++;	
	}
	
	
	}	
k=k+numNotas;	
	
}
	
system("cls");
cout<<"mostrar calificaciones de alumno: "<<endl;
for(int i=0;i<k;i++)
{
cout<<arr[i]<<endl;

	}	
 
}
