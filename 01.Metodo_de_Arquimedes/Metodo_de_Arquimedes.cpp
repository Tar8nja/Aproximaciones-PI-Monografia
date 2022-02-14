/*
Per calcular PI hem de fer: longitud/diametro
https://proyectodescartes.org/miscelanea/materiales_didacticos/Aproximacion_de_pi-JS/index.html
*/

#include <iostream>
#include <conio.h>
#include <math.h> //Mates
#include <iomanip> //setprecision
#include <time.h> //Controlar el temps
#define PI 3.14159265358979

double poligonCircum(double radiCerc, double numCost){
	
	double angIntern=180*(numCost-2)/numCost;
	double angTriang=angIntern/2;
	double angTriangRad=angTriang*M_PI/180; //Aixo es nomes per passar a radiants
	double PI_aprx = numCost * cos(angTriangRad);

	return PI_aprx;
}

double poligonInscrit(double radiCerc, double numCost){
	
	double angIntern=180*(numCost-2)/numCost;
	double angTriang=angIntern/2;
	double angTriangRad=angTriang*M_PI/180; //Aixo es nomes per passar a radiants
	double PI_aprx= numCost/(tan(angTriangRad));

	return PI_aprx;
	
}

int main(){

	std::cout<<std::setprecision(16);

    int nPi;
    std::cout<<"Digitos correctos: "; std::cin>>nPi;
    double ROUND_PI = trunc( pow(10,(nPi-1)) *PI) / pow(10, (nPi-1));
    std::cout<<"A aproximar: "<<ROUND_PI<<std::endl;;

	double piAproxCircum, subAproxCircum;
	double piAproxInsc = 0, subAproxInsc = 10;
	int c = 3, n = 3;

	std::cout<<std::setprecision(16);
	double t=clock();

	std::cout<<"Calculando..."<<std::endl;
	while( (piAproxCircum < ROUND_PI) || (piAproxInsc > ROUND_PI) ){
		subAproxCircum = poligonCircum(10, c);
		piAproxCircum=trunc( subAproxCircum *pow( 10, (nPi-1) ))/pow(10, (nPi-1));

		subAproxInsc = poligonInscrit(10, c);
		piAproxInsc = trunc( subAproxInsc *pow( 10, (nPi-1) ))/pow(10, (nPi-1));

		if(c%10000000==0){ std::cout<<"Aprox: "<<piAproxCircum<<" < PI < "<<piAproxInsc<<"\n  Lados: "<<c<<"\n\n"; }

		c++;
	}
	t=(clock()-t)/CLOCKS_PER_SEC;

	std::cout<<"Numero de lados: "<<c<<"\nAproximacion de PI: "<<subAproxCircum<<" < PI < "<<subAproxInsc<<std::endl;
	std::cout<<t<<" segundos."<<std::endl<<std::endl;

	getch();
	return 0;
}
