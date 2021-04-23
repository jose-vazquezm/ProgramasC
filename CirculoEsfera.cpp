#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define pi 3.1416
	using namespace std;
class circulo
{
	public:
	float area();
	void peri();

	protected:

	float r;
};

float circulo::area()
{
	float area;
	cout<<"\n\tMetodo Area.\n";
	area=pi*pow(r,2);
	cout<<"\tEl area del circulo es: "<<area<<endl;
	return area;
}

void circulo::peri()
{

	float perimetro;
	cout<<"\n\tMetodo Perimetro.\n";
	perimetro= 2*pi*r;
	cout<<"\tEl perimetro del circulo es: "<<perimetro<<endl;

}

class esfera : protected circulo
{
	public:
		void volumen (float);
		void mostrar ();
		esfera ();
		esfera (float);
	protected:
		float v;

} ;

esfera::esfera()
{
	float x;
	cout<<"\n======== CONSTRUCTOR POR DEFECTO ==========\n";
	cout<<"\nDame el radio del circulo 1.\n";
	cin>>x;
	r=x;
}

esfera::esfera(float a)
{

	cout<<"\n======== CONSTRUCTOR PARAMETRIZADO ==========\n";
	r=a;
	cout<<"\n\tEl valor del radio es: "<<r<<endl;
}

void esfera::volumen(float ac)
{
	float vol;
	cout<<"\n\tMetodo Volumen.\n"; //4/3 pi r r r
	vol= (4*ac*r)/3;
	cout<<"\tEl volumen de la esfera es: "<<vol<<endl;
}

void esfera::mostrar ()
{
	float x;
	x=area();
	peri();
	volumen(x);
}

int main()
{
	float x;
	esfera esfera1;
	esfera1.mostrar();
	esfera esfera2 (2);
	esfera2.mostrar();
}
