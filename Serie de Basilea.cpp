/*
Programa de Serie de Basilea

https://www.gaussianos.com/el-problema-de-basilea/
*/

#include <iostream>
#include <conio.h>
#include <iomanip>
#include <math.h>
#include <time.h>

using namespace std;

int main(){
	cout<<setprecision(16);
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
	cout<<"Suma total: "<<suma_total<<endl;
	
	t=(clock()-t)/CLOCKS_PER_SEC;
	cout<<t<<" segons."<<endl;
	
	getch();
	return 0;
}
