/*
Se debe realizar un programa en C++ que determina si un punto se encuentra dentro del círculo de radio 3 y centro (0,0), respondiendo "Pertenece" si está dentro y "No pertenece" si está fuera.

El programa debe solicitar las coordenadas (x,y) del punto. Respetar este orden de ingreso de los datos.

Pista: Se debe trabajar con la distancia entre el centro y el punto. Hacer gráficos en papel de ser necesario.
*/

// Complete el codigo fuente
// No ponga texto en el cin
#include <iostream>
#include <cmath>
using namespace std;

int main () 
{	
	double r=3, x, y, pro, aux4;
	cin>>x>>y;
	//	Centro (0,0) PuntoA(3,4) Punto1(4.0,3.0) PuntoB(1.9,2.1)
	//aux1=(x-xC);
	//aux2=(y-yC);
	//dist=sqrt(pow(aux1,2)+pow(aux2,2));
	//	cout<<dist<<endl;
	//	x(2)+y(2)=r(2)  (x-h)(2)+(y+k)(2)=r(2)
	pro= pow(x,2)+pow(y,2);
		//cout<<pro<<endl;
	aux4=pow(r,2);
		//cout<<aux4<<endl;
	if (pro<=aux4)
	{
		cout<<"Pertenece";
	}
	else
	{
		cout<<"No pertenece";
	}
    return 0;
}