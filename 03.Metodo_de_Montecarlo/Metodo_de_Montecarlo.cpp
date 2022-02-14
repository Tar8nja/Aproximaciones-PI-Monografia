#include <iostream>
#include <conio.h>
#include <math.h> //Mates
#include <iomanip> //setprecision
#include <time.h> //Controlar el temps
#include <random> //Randomizador
#define PI 3.141592653589

int main(){
    std::cout<<std::setprecision(16);

    int nPi;
    std::cout<<"Digitos correctos: "; std::cin>>nPi;
    double ROUND_PI = trunc( pow(10,(nPi-1)) *PI) / pow(10, (nPi-1));
    std::cout<<"A aproximar: "<<ROUND_PI;

    srand((unsigned)time(NULL));
    double x,y,distancia,c = 0,n = 0;
    double piAprox;

    double t = clock();

    while( piAprox != ROUND_PI ){
        n++;
        x=(double)rand()/(double)RAND_MAX;
        y=(double)rand()/(double)RAND_MAX;
        distancia= sqrt(pow(x,2)+pow(y,2));
        if(distancia<=1){
            c++;
        }
        piAprox=trunc( (4*c/n) *pow( 10, (nPi-1) ))/pow(10, (nPi-1));
        
        if( (int)n %10000000 == 0){ std::cout<<"Total: "<<n<<"\n Dentro: "<<c<<"\n  Aproximacion: "<<piAprox<<std::endl; }
    }

    t=(clock()-t)/CLOCKS_PER_SEC;

    std::cout<<"\nDardos totales: "<<n<<"\nDardos dentro: "<<c<<"\nAproximacion a PI: "<<piAprox<<std::endl;
    std::cout<<t<<" segundos."<<std::endl<<std::endl;
	getch();
	return 0;
}