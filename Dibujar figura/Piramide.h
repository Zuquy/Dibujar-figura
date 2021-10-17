#include <iostream>

using namespace std;
class Piramide
{
private:
	int filas;
	bool asterisco = true;
public:
	Piramide(int);
	void DibujarFilas();
};
Piramide::Piramide(int _filas) {
	filas = _filas;
}
void Piramide::DibujarFilas() {
	int cCaracteres = 1; //Cantidad incial de caracteres por linea
	int f = 1; //contador de cual fila se esta escribiendo, 1 para laprimera fila, 2 para la segunda...
	int space = filas-2; //Cantidad de espacios necesarios en cada fila
	
	while (f <= filas) {
		int contador = 0; //Contador de usos multiples
		while (contador <= space) {
			cout << " ";
			contador++;
		}
		f++;
		contador = 0;
		while (contador < cCaracteres)
		{
			if (asterisco)
			{
				cout << "*";
				asterisco = !asterisco;
			}
			else
			{
				cout << "o";
				asterisco = !asterisco;
			}
			contador++;
		}
		cout << "\n";
		asterisco = true;
		space--;
		cCaracteres = cCaracteres + 2;
	}
	
}


