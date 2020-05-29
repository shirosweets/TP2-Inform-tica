/*
Se debe realizar un programa en C++ que determina si dos círculos cualesquiera cumplen una de las siguientes condiciones:

    Son concéntricos
    No se tocan
    El mayor contiene al menor
    Tienen solapamiento

Evaluar estas condiciones en el orden mencionado y especificar solo la primera condición que se cumpla.

El programa debe solicitar radio y coordenadas (x,y) del centro del primer círculo y luego del segundo. Respetar este orden de ingreso de los datos.

Pista: Se debe trabajar con la distancia entre los centros y los radios. Hacer gráficos en papel de ser necesario.
*/

// Complete el codigo fuente
// No ponga texto en el cin
#include <iostream>
#include <cmath>
using namespace std;

int main () 
{	// 
	float r1, r2, x1, y1, x2, y2, d;
	
	cin>>r1;
	cin>>x1;
	cin>>y1;

	cin>>r2;
	cin>>x2;
	cin>>y2;
	
	d=sqrt((pow(x2-x1,2))+(pow(y2-y1,2)));
	
	if (x1==x2 && y1==y2 && r1!=r2)
	{
		cout<<"Son concentricos";
	}
	else if (d>r1+r2)
	{
		cout<<"No se tocan";
	}
	else if (d+r1<r2 || d+r2<r1)
	{
		cout<<"El mayor contiene al menor";
	}
	else if (d<r1+r2)
	{
		cout<<"Tienen solapamiento";
	}
    return 0;
}