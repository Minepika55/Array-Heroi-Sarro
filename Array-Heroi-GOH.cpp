#include <iostream>
#include <vector>
using namespace std;


/// <summary>
/// Void per guardar un objecte al sarro.
/// </summary>
/// <param name="sarro"></param> Guarda els items del sarro.
/// <param name="Maxitems"></param> Guarda el valor maxim del sarro.
void addObjecte(vector<string>& sarro, int Maxitems) {// Void per guardar un objecte al sarro.
	string Objecte;
	cout << "***Quin Item em guardare???***" << endl;
	cin >> Objecte;
	if (sarro.size() >= Maxitems)//Si el sarro te mes de 10 objectes no podra introduir res mes.
	{
		cout << "***No hi queven mes coses!!!***" << endl;
		return;
	}
	sarro.push_back(Objecte);

}

/// <summary>
/// Void per treure un objecte del sarro.
/// </summary>
/// <param name="sarro"></param>Guarda els items del sarro.
/// <param name="Maxitems"></param>Guarda el valor maxim del sarro.
void deleteObjecte(vector<string>& sarro, int Maxitems) {// Void per treure un objecte al sarro.
	string Objecte;
	cout << "***Quin Item eliminare???***" << endl;//El codi busca si existeix l'objecte i l'elimina.
	cin >> Objecte;
	for (int i = 0; i < sarro.size(); i++) {
		if (sarro[i] == Objecte) {
			sarro[i] = "";
			break;
		}
	}
}


/// <summary>
/// Void per buidar tot el sarro de cop.
/// </summary>
/// <param name="sarro"></param>Guarda els items del sarro.
/// <param name="Maxitems"></param>Guarda el valor maxim del sarro.
void borrarSarro(vector<string>& sarro, int Maxitems) {// Void per buidar el sarro.
	string Objecte;
	cout << "***Buido el sarro???***" << endl;
	cin >> Objecte;
	for (int i = 0; i < sarro.size(); i++) {// Buida tot el srro.
		sarro[i] = "";
	}
}



/// <summary>
/// Void per mostrar tots els items que te el sarro en el seu interior.
/// </summary>
/// <param name="sarro"></param>Guarda els items del sarro.
/// <param name="Maxitems"></param>Guarda el valor maxim del sarro.
void llistaSarro(vector<string>& sarro, int Maxitems) {
	// Void per mostrar tots els items que te el sarro en el seu interior.
	string Objecte;
	cout << "***Items dins del sarro***" << endl;
	for (int i = 0; i < sarro.size(); i++) {
		cout<<sarro[i] << endl;
	}
}

/// <summary>
/// Aquesta part del codi es per el menu de seleccio de l'usuari on es pot triar el que vol fer.
/// </summary>
/// <returns></returns>
int main()
{
	int items;
	vector<string> sarro;
	int Maxitems = 10;//Items maxims del sarro.
	int Opcio;// Menu d'opcions per el jugador.

	do {// Bucle de les opcions.
		cout << "***1. Guardar Item***"<< endl;
		cout << "***2. Treure Item***"<< endl;
		cout << "***3. Mostrar el sarro***"<< endl;
		cout << "***4. Buidar el Sarro***" << endl;
		cout << "***5. Sortir del joc***"<< endl;
		cin >> Opcio;

		switch (Opcio) {// Aqui es on s'executa la opcio seleccionada.
		case 1:
			addObjecte(sarro, Maxitems);
			break;
		case 2:
			deleteObjecte(sarro, Maxitems);
			break;
		case 3:
			llistaSarro(sarro, Maxitems);
			break;

		case 4:
			borrarSarro(sarro, Maxitems);
			break;
		}


	} while (Opcio != 5);// Si el jugador selecciona la opcio 5 es para el joc.

	return 0;

}
