/*
Faig un model matemàtic de les colisions perfectament elàstiques
entre dues masses sobre un pla sense fregament. 

https://www.youtube.com/watch?v=jsYwFizhncE
https://www.youtube.com/watch?v=HEfHFsfGXjs
https://youtu.be/ils7GZqp_iE
http://hyperphysics.phy-astr.gsu.edu/hbasees/elacol2.html
*/

#include <iostream>
#include <conio.h>
#include <math.h> //Mates
#include <iomanip> //setprecision
#include <time.h> //Controlar el temps

using namespace std;

double calculo(double v_det, double v_mov, double m_det, double m_mov){
    double contador=0;
    do
    {
        if(v_mov<0){
            v_mov=abs(v_mov);
            contador++;
        }
        double v_det1=(((m_det-m_mov)/(m_det+m_mov))*v_det)+(((2*m_mov)/(m_det+m_mov))*v_mov);
        double v_mov1=(((2*m_det)/(m_det+m_mov))*v_det)-(((m_det-m_mov)/(m_det+m_mov))*v_mov);
        v_det=v_det1;
        v_mov=v_mov1;

        contador++;
    } while (abs(v_mov)>v_det);
    return contador;
}
int main(){
    cout<<setprecision(32);
    double n;
    cout<<"Escribe el numero de dígitos de PI a calcular: "; cin>>n;
    n=pow(100,n-1);
    double t=clock();
    double calc= calculo(-1,0,n,1);
    t=(clock()-t)/CLOCKS_PER_SEC;
    cout<<"Aproximacion de PI: "<<calc<<endl;
	cout<<t<<" segons."<<endl<<endl;

    getch();
    return 0;
 }
