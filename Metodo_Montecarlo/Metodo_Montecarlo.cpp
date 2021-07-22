/*
pi=(4*n)/(c)

*/


#include <iostream>
#include <conio.h>
#include <math.h> //Mates
#include <iomanip> //setprecision
#include <time.h> //Controlar el temps
#include <random> //Randomizador


using namespace std;


double calculo(int n){
    srand((unsigned)time(NULL));
    double x,y,distancia,c;
    int x0,y0;
    c=0;
    for (int i=0; i<n; i++){
        x=(double)rand()/(double)RAND_MAX;
        y=(double)rand()/(double)RAND_MAX;

        /*x0=rand();
        if(x0%2==0){
            x=-x;
        }
        y0=rand();
        if(y0%2==0){
            y=-y;
        }*/
        //cout<<"X: "<<x<<"  Y: "<<y<<endl;
        distancia= sqrt(pow(x,2)+pow(y,2));
        if(distancia<=1){
            //Dentro del círculo
            c++;
        }
    }
    cout<<"Dardos en el circulo: "<<c<<endl;
    double pi=(4*c)/n;
    return pi;
}

int main(){
    cout<<setprecision(32);
    int n;
    cout<<"Numero de dardos: "; cin>>n;
    double t=clock();
    double aprox=calculo(n);
    t=(clock()-t)/CLOCKS_PER_SEC;
    cout<<"Aproximacion de PI: "<<aprox<<endl;
    cout<<t<<" segundos."<<endl<<endl;

    getch();
    return 0;
}