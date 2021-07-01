/*
Per calcular PI hem de fer: longitud/diàmetre
*/

#include <iostream>
#include <conio.h>
#include <math.h> //Mates
#include <iomanip> //setprecision
#include <time.h> //Controlar el temps

using namespace std;


double poligonCircum(double radiCerc, double numCost){
	double perimetre, diametre;
	double apotema=radiCerc;
	int operador= (int)round(numCost)%2;
	if(numCost<3){
		cout<<"No es posible"<<endl;
		perimetre= 0;
		diametre= 1;
	}
	else if(operador==0){
		//El diàmetre es del centre d'un costat a l'altre
		diametre = apotema*2;
		
		double angIntern=180*(numCost-2)/numCost;
		double angTriang=angIntern/2;
		double angTriangRad=angTriang*M_PI/180; //Això és només per passar a radiants
		double radi= apotema/sin(angTriangRad);
		double costat=cos(angTriangRad)*radi;
		perimetre=2*costat*numCost;
	}
	else if(operador!=0){
		//El diàmetre es el radi + la apotema
		double angIntern=180*(numCost-2)/numCost;
		double angTriang=angIntern/2;
		double angTriangRad=angTriang*M_PI/180; //Això és només per passar a radiants
		double radi= apotema/sin(angTriangRad);
		diametre = radi+apotema;
		double costat=cos(angTriangRad)*radi;
		perimetre=2*costat*numCost;
	}
	double PI_aprx= perimetre/diametre;
	
	return PI_aprx;
}

double poligonInscrit(double radiCerc, double numCost){
	double perimetre, diametre;
	double radi=radiCerc;
	int operador= (int)round(numCost)%2;
	if(numCost<3){
		cout<<"No es posible"<<endl;
		perimetre= 0;
		diametre= 1;
	}
	else if(operador==0){
		//El diàmetre es del centre d'un costat a l'altre
		diametre = radi*2;
		
		double angIntern=180*(numCost-2)/numCost;
		double angTriang=angIntern/2;
		double angTriangRad=angTriang*M_PI/180; //Això és només per passar a radiants
		double apotema= radi*sin(angTriangRad);
		double costat=cos(angTriangRad)*radi;
		perimetre=2*costat*numCost;
	}
	else if(operador!=0){
		//El diàmetre es el radi + la apotema
		double angIntern=180*(numCost-2)/numCost;
		double angTriang=angIntern/2;
		double angTriangRad=angTriang*M_PI/180; //Això és només per passar a radiants
		double apotema= radiCerc*sin(angTriangRad);
		diametre = radi+apotema;
		double costat=cos(angTriangRad)*radi;
		perimetre=2*costat*numCost;
	}
	double PI_aprx= perimetre/diametre;
	
	return PI_aprx;
	
}


int main(){
	cout<<setprecision(16);
	int n;

	
	cout<<"Valor maxim de costats: "; cin>>n;
	double t=clock();
	for(int i=0; i<=n; i++){
		double aproxInferior= poligonInscrit(10,i);
		double aproxSuperior= poligonCircum(10,i);
		cout<<i<<".  "<<aproxInferior<<" < PI < "<<aproxSuperior<<endl;
		//De moment ho poso en un bucle per a que es vegi
	}
	
	t=(clock()-t)/CLOCKS_PER_SEC;
	cout<<t<<" segons"<<endl;
	
	getch();
	return 0;
}
