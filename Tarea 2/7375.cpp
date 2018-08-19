#include <iostream>
using namespace std;

int main() {
	cout << "Nombre: " << endl;
	char Nombre[20];
	cin >> Nombre;
	
	cout << "Apellido: " << endl;
	char Apellido[20];
	cin >> Apellido;

	cout << "Edad: " << endl;
	int edad;
	cin >> edad;

	cout << "Teléfono: " << endl;
	char Telefono[20];	
	cin >> Telefono;


	cout << "Nombre: " << Apellido <<" "<< Nombre <<"." << endl;
	cout << "Edad: " << edad <<" anios." <<endl;
	cout << "Teléfono: [+52] " <<Telefono<<endl;
	
	system("pause");
	return 0;
}
