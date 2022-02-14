/*
Programa de Serie de Basilea
https://www.gaussianos.com/el-problema-de-basilea/
*/
#include <iostream>
#include <conio.h>
#include <iomanip> //Setprecision
#include <math.h> //Mates
#include <time.h> //Temps
#define PI 3.141592653589

int main(){
	std::cout<<std::setprecision(16);
	long double sum_total=0, num_actual=0, sum_actual=0;
	int n, i;
    i=0;

	std::cout<<"Digitos correctos : "; std::cin>>n;
    double ROUND_PI= trunc( pow(10,(n-1)) *PI -0.5) / pow(10,(n-1));
    std::cout<<"A aproximar: "<<ROUND_PI<<std::endl;

	double t=clock();
    
    while(sum_total < ROUND_PI){
		i++;
        num_actual= 1/(pow(i,2));
		sum_actual += num_actual;
        sum_total = sqrt(sum_actual*6);
		if(i%10000000==0){ std::cout<<"Suma actual: "<<sum_total<<"\n  Iteraciones: "<<i<<std::endl; }
    }

	std::cout<<"Iteraciones hechas: "<<i<<"\nAproximacion a PI: "<<ROUND_PI<<"\nNumero obtenido: "<<sum_total<<std::endl;
	t=(clock()-t)/CLOCKS_PER_SEC;
	std::cout<<t<<" segundos."<<std::endl<<std::endl;
	getch();
	return 0;
}