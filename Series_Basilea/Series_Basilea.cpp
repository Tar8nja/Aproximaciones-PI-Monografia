/*
Programa de Serie de Basilea

https://www.gaussianos.com/el-problema-de-basilea/
*/

#include <iostream>
#include <conio.h>
#include <iomanip> //Setprecision
#include <math.h> //Mates
#include <time.h> //Temps

using namespace std;

int main(){
	cout<<setprecision(32);
	double suma_total, num_actual;
	int n;
	
	cout<<"Valor maxim a 'n' : "; cin>>n;
	double t=clock();
	for(int i=1; i<=n; i++){
		num_actual= 1/(pow(i,2));
		
		suma_total+= num_actual;
	}
	
	suma_total*=6;
	suma_total= sqrt(suma_total);
	cout<<"Suma total / Aproximación PI: "<<suma_total<<endl;
	
	t=(clock()-t)/CLOCKS_PER_SEC;
	cout<<t<<" segundos."<<endl<<endl;
	
	getch();
	return 0;
}
