#include <iostream>
#include <math.h>
using namespace std;

int main() {
	float a,radio, x, y;
	a=0.0;
	radio=0.0;
	x=0.0;
	y=0.0;
	cout <<"Escriba cuanto vale el radio"<<endl;
	cin >>radio;
	cout <<"Escriba cuanto vale el angulo"<<endl;
	cin >>a;
	a= a*3.1416/180;
	x= radio*cos(a);

	y= radio*sin(a);
	
	cout <<"Las cordenadas son ("<<x<<","<<y<<")."<<endl;

	return 0;
}

