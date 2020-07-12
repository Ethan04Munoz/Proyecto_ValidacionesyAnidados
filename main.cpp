//Ethan Muñoz López 19300098

//iostream es para cout y cin
#include <iostream>

//stdlib.h era para cambiar el color de la consola
#include <stdlib.h>

//cstdlib es para poner atoi y atof, para transformar cadena a enteros o a flotantes
#include <cstdlib>

#include <stdio.h>

//math.h es para usar algunas funciones como pow() para elevar un numero a un exponente
#include <math.h>

//string y string.h son librerías que utilizo para validar y otras funciones, pero las validaciones las tuve que quitar
//porque en repl.it no me admitia usar la funcion para validar y para contar la cantidad de caracteres por cadena
#include <string>
#include <string.h>

//Nueva libreria que necesito para las validaciones
#include <cctype> // isdigit

using namespace std;

//Declaracion de funcion
bool esNumerico(string);

//Funcion principal
int main() {

	//Declaración de variables;

	string menu_init;
	//menu_init es usada para recibir los datos de entrada del menu como cadea para que sea posible validar si es un numero o no, y asi verificar que 
	//el  usuario ingrese un valor valido, si es así entonces menu_inicio tomara su valor

	int menu_inicio;
	//int menu inicio es usada para almacenar la opcion del menu de inicio sobre la accion que desea hacer el usuarrio, la cual 
	//dependiendo de su valor es el caso que se ejecuta

	string continuar;
	//Continuar es una variable string que almacena la respuesta del usuario de si quiere volver o no a usar 
	//el sistema

	float vent;
	//vent es el voltaje de entrada del circuito, el cual ess pedido al usuario

	int i;
	//i sera utilizada para algunos contadores, principalmente en el caso 3

	int resis[10];
	//resis almacena los valores de las resistencias en enteros mientras el programa los va pidiendo

	string resis0[10];
	//resis0 almacena el valor de las resistencias como cadena, para poder contar sus caracteres

	string rb0;
	//rb0 almacena el valor de rb como cadena

	string ra0;
	//ra0 almacena el valor de ra como cadena

	string raa0;
	//raa0 almacena el valor de raa como cadena

	int l_resis[10];
	//l_resis almacena la longitud de el valor las resistencias, como un numero entero, basandose en regis0

	int l_rb;
	//l_rb almacena la longitud de el valor de rb basandose en su string

	int l_ra;
	// l_ra almacena la longitud del alor de la resistencia equivalente ra, basandose en su string

	int l_raa;
	//l_raa almacena la longitud del valor de la resistencia equivalente raa, basandose en su string

	float resis_1[8];
	//resis_1 es el primer arreglo simplificado de las resistencias

	float resis_2[4];
	//resis_2 es el segundo arreglo simplificado que almacena las resistencias del circuito más simples

	//Arreglos variables

	int k;
	int contador;
	//cont y k serán contadores utilizados en ciclos for como la variable que va dentro de los parentesis
	//ejemplo: for(k=0;k<2;k++)

	int arreglo_organizar[11];
	//arreglo_organizar será el arreglo 
	int a_aux;
	//a_aux es un auxiliar que se usara para el intercambio de datos en el ordenamiento burbuja, en la zona de arreglos

	//Matriz variables

	int matriz[2][3];
	//en matriz se almacenaran los valores que pida el usuario en el caso 2
	int matriz_transpuesta[3][2];
	//matriz transpuesta es la matriz en la que se almacenaran los valores de la matriz, una vez que se usen ciclos para volverla transpuesta

	//auxiliares
	float aux, aux2, aux3;
	float ax, ax2, ax3, ax4, ax5, ax6, ax7, ax8;
	//Todos estos auxiliares serán usados principlamente en el caso 3 para obtener las resistencias equivalentes

	float rt;
	//rt es la variable que almacena el valor de la resistencia total, una vez calculado, basandose en el circuito resultante
	//numero 2. 
	float it;
	//it es una variable que almacena la intensidad total después de calcularla, es usada en el caso 3 para los resultados
	float vt;
	//vt es el voltaje total, usado en el caso 3 

	string arreglo_organi[11];
	//Esta variable es usada en el caso 1 arreglos para guardar  como cadena los numeros de la burbuja y 
	//poder validarlo, siendo parte del arreglo a organizar

	//porvisional para el bucle infinito

	int provicional_infinito;
	//sera el dato de leida de cada resistencia antes de confirmarse que es un valor valido, siendo un almacendaor provisional

	string provisional_infinitostr;
	//sera el provicional infinito en cadena para poder contar sus cifras y verificar que sea valido

	int provisionallargo;
	provisionallargo = 0;
	//Almacena el valor de cantidad de cifras del provicional, siendo el que determina si es una cifra valida o no

	////////////////////
	string matrizs[2][3];
	//matrizs es utilizada para guardar como cadena la matriz y poder validarla, siendo la matriz en string

	string vent_s;
	//vent_s es utilizada para almacenar el voltaje de entrada en cadena para poder validar que se trate de un numero, la _s es por ser string

	//Variables para validaciones
	string linea;
	//Linea se utiliza para ser el valor pedido al usuario y poder validarlo
	int numero;
	bool repite = true;

	int confirmacion;


	//Menú de inicio

	cout << "Proyecto integrador \n\n\n\n\n";
	do {
		//Menu de inicio
		cout << "Por favor, para comenzar, selecciona una opcion\nbasandose en el numero que la acompania\n\n\n\n";

		cout << "1 = Arreglos: Ordenar 10 numeros enteros, utilizando el metodo burbuja, \ndentro de un arreglo\n\n";
		cout << "2 = Matriz: Llena una matriz con datos proporcionados por el usuario, \n Y obten la matriz transpuesta a  la ingresada\n\n";
		cout << "3 = Circuito: Obtener Resistencia, Voltaje e Intensidad total, ademas de \nla impresion de el circuito y sus 2 simplificados, con valores proporcionados\npor el usuario\n\n";
		cout << "4 = Salir\n\n";

		confirmacion = 0;
		//Se pide la opcion en string para poder validarla
		do {
			getline(cin, linea);

			if (esNumerico(linea)) {
				repite = false;
				confirmacion = 1;
			}
			else {
				cout << "No ha ingresado un entero. Intente nuevamente" << endl;
			}
		} while (repite);
		repite = true;
		// numero = stoi(linea);      // int <- string en compiladores de C++11
		numero = atoi(linea.c_str());
		menu_inicio = numero;


		cout << "\n\n-----------------------------------------------------\n\n";
		//Acciones para cada opcion, usando un switch
		switch (menu_inicio) {

		case 1:;
			//Arreglos:  Burbuja

			cout << "Has ingresado la opcion 1: Arreglos\n";
			cout << "Ahora, utilizando ordenamiento burbuja, ordenaremos un arreglo de 10 enteros\n";
			cout << "Por favor, ingresa los numeros, uno a la vez\n";
			cout << "\n\n-----------------------------------------------------\n\n";

			//Llenado de arreglo
			for (contador = 0; contador <= 9; contador++) {
				do {
					printf("Tu numero ");
					cout << contador + 1;
					printf(" es : ");
					getline(cin, linea);
					if (esNumerico(linea)) {
						repite = false;
					}
					else {
						cout << "No ha ingresado un entero. Intente nuevamente" << endl;
					}
				} while (repite);
				//for dentro de do-while, bucle anidado
				repite = true;
				numero = atoi(linea.c_str());
				//Lee como cadena la cifra para poder validarla
				arreglo_organizar[contador] = numero;

			}


			//Burbuja


			cout << "\n\n-----------------------------------------------------\n\n";
			cout << "\nTu arreglo sin ordenar es: \n";
			for (contador = 0; contador <= 9; contador++) {
				cout << arreglo_organizar[contador];
				cout << "   ";
			}



			for (contador = 0; contador <= 9; contador++) {
				//Bucle anidado
				for (k = 0; k <= 8; k++) {
					if (arreglo_organizar[k + 1] < arreglo_organizar[k]) {
						//si el valor actual es mayor que el siguiente cambiaran posiciones, consiguiendo que se ordene
						a_aux = arreglo_organizar[k];
						//Para cambiar los valores se utiliza a_aux, que es un auxiliar necesario para que no se pierdan datos
						arreglo_organizar[k] = arreglo_organizar[k + 1];
						arreglo_organizar[k + 1] = a_aux;
					}
				}
			}

			cout << "\n\n-----------------------------------------------------\n\n";
			cout << "\nTu arreglo ordenado es: \n";
			for (contador = 0; contador <= 9; contador++) {
				cout << arreglo_organizar[contador];
				cout << "   ";
			}

			cout << "\n\n-----------------------------------------------------\n\n";

			break;
		case 2:;
			//Matriz: Transpuesta

			cout << "Bienvenido, seleccionaste la opcion 2. A continuacion llenaras la matriz.\nEsta es una matriz 2x3\n";
			cout << "Ingresa los numeros: \n";

			//Llenado de matriz
			for (contador = 0; contador <= 1; contador++) {
				cout << "\n\n-----------------------------------------------------\n\n";
				cout << "Nuevo renglon\n\n";
				for (k = 0; k <= 2; k++) {
					do {
						//Se guarda como cadena
						getline(cin, linea);

						if (esNumerico(linea)) {
							repite = false;
						}
						else {
							cout << "No ha ingresado un entero. Intente nuevamente" << endl;
						}

					} while (repite);
					repite = true;
					// numero = stoi(linea);      // int <- string en compiladores de C++11
					numero = atoi(linea.c_str());
					matriz[contador][k] = numero;
				}
			}

			//Matriz ingresada
			cout << "\n\n-----------------------------------------------------\n\n";
			cout << "Matriz ingresada: \n";
			for (contador = 0; contador <= 1; contador++) {
				for (k = 0; k <= 2; k++) {
					cout << matriz[contador][k] << "  ";
				}
				cout << "\n";
				cout << "\n";
			}

			//Tranpuestacion
			for (contador = 0; contador <= 2; contador++) {
				for (k = 0; k <= 1; k++) {
					matriz_transpuesta[contador][k] = matriz[k][contador];
				}
			}

			//Impresión de la Matriz transpuesta
			cout << "\n\n-----------------------------------------------------\n\n";
			cout << "Matriz transpuesta: \n";
			for (contador = 0; contador <= 2; contador++) {
				for (k = 0; k <= 1; k++) {
					cout << matriz_transpuesta[contador][k] << "  ";
				}
				cout << "\n";
				cout << "\n";
			}

			break;
		case 3:;

			//Circuito

			cout << "\nSeleccionaste la opcion 3. Circuito.\n\nAhora insertaras los valores de\n";
			cout << "Un circuito de 10 resistencias. Te mostraremos graficamente el circuito\n";
			cout << "Y los valores de su Resistencia total, Voltaje total e Intensidad Total.\n";

			/*1.- Capturar los valores de 10 resistencias y el valor de la
			fuente de voltaje, mediante un arreglo de 10 posiciones*/
			do {
				cout << "\n\nCuanto es el valor del la Fuente de voltaje en Volts: ";
				getline(cin, linea);

				if (esNumerico(linea)) {
					repite = false;
				}
				else {
					cout << "No ha ingresado un entero. Intente nuevamente" << endl;
				}
			} while (repite);
			repite = true;
			// numero = stoi(linea);      // int <- string en compiladores de C++11
			numero = atoi(linea.c_str());
			vent = numero;


			for (i = 0; i <= 9; i++) {

				while (true) {
					do {
						cout << "\nIngresa el valor de la resistencia " << i + 1 << " en Ohms:\n";
						cout << "Debe ser un valor de 2 digitos maximo. Entero.\n";
						getline(cin, linea);

						if (esNumerico(linea)) {
							repite = false;
						}
						else {
							cout << "No ha ingresado un entero. Intente nuevamente" << endl;
						}
					} while (repite);
					repite = true;

					provisional_infinitostr = linea;
					provisionallargo = provisional_infinitostr.length();

					if (provisionallargo < 3) {
						provicional_infinito = atoi(provisional_infinitostr.c_str());
						resis[i] = provicional_infinito;
						//transforme a string
						resis0[i] = to_string(resis[i]);
						break;
					}
					else {
						printf("Lo que ingresaste tiene mas de 2 digitos\n");
						continue;
					}

					/*
					cin >> provisional_infinitostr;
					provisionallargo = provisional_infinitostr.length();

					if (provisionallargo < 3) {
						provicional_infinito = atoi(provisional_infinitostr.c_str());
						resis[i] = provicional_infinito;
						//transforme a string
						resis0[i] = to_string(resis[i]);
						break;
					}
					else {
						printf("Lo que ingresaste tiene mas de 2 digitos\n");
						continue;
					}*/


				}


				//Generación de doble arreglo
				std::cout.setf(std::ios::fixed);
				std::cout.setf(std::ios::showpoint);
				std::cout.precision(2);
				//Primer arreglo

				if (i < 6) {
					resis_1[i] = resis[i];
				}

				//ra
				if (i == 6) {
					//La funcion pow() permite elevar un numero a cierto exponente
					aux = pow(resis[i], -1);
					aux2 = pow(resis[i - 1], -1);
					aux3 = aux + aux2;
					resis_1[5] = pow(aux3, -1);

					//Obtencion del largo ra
					ra0 = to_string(resis_1[5]);
					l_ra = ra0.length();
				}

				//r8
				if (i == 7) {
					resis_1[6] = resis[i];
				}

				//rb
				if (i == 9) {
					aux = pow(resis[i], -1);
					aux2 = pow(resis[i - 1], -1);
					aux3 = aux + aux2;
					resis_1[7] = pow(aux3, -1);

					//Obtencion del largo de rb
					rb0 = to_string(resis_1[7]);
					l_rb = rb0.length();
				}

				//Segundo arreglo

				resis_2[0] = resis[0];
				resis_2[1] = resis[1];

				ax = pow(resis[2], -1);
				//r3

				ax2 = pow(resis[3], -1);
				//r4

				ax3 = pow(resis[4], -1);
				//r5

				ax4 = pow(resis_1[5], -1);
				//ra

				ax5 = pow(resis[7], -1);
				//r8

				ax6 = ax + ax2 + ax3 + ax4 + ax5;
				//Suma de las resistencias para poder elevarlas a -1

				resis_2[2] = pow(ax6, -1);
				//raa final, elevada a la -1

				resis_2[3] = resis_1[7];
				//rb

				//obtencion del largo de raa
				raa0 = to_string(resis_2[3]);
				l_raa = raa0.length();

				//Fin de los 2 arreglos

			}

			//Obtención del largo
			for (i = 0; i < 10; i++) {
				l_resis[i] = resis0[i].length();
			}

			//2.- Calcular Rt, It, Vt con ley de Ohm de un circuito mixto 

			rt = resis_2[0] + resis_2[1] + resis_2[2] + resis_2[3];

			//Intensidad total

			it = vent / rt;

			//Voltaje total

			vt = vent;

			/*3.- Mostrar en pantalla graficamente el circuito inicial y
				los dos resultantes, con los valores de cada elemento, seguido
				de los resultados:*/

				//Circuito completo

			cout << "\n\n\n";
			cout << "Circuito inicial: \n\n\n\n";

			if (l_resis[1] == 2) {
				cout << "|--------R2 = " << resis[1] << " ohms--|";
			}
			if (l_resis[1] == 1) {
				cout << "|---------R2 = " << resis[1] << " ohms--|";
			}
			if (l_resis[1] == 3) {
				cout << "|-------R2 = " << resis[1] << " ohms--|";
			}
			if (l_resis[1] == 4) {
				cout << "|------R2 = " << resis[1] << " ohms--|";
			}

			if (l_resis[3] == 2) {
				cout << "--R4 = " << resis[3] << "ohms----------|\n";
			}
			if (l_resis[3] == 1) {
				cout << "--R4 = " << resis[3] << "ohms-----------|\n";
			}
			if (l_resis[3] == 3) {
				cout << "--R4 = " << resis[3] << "ohms---------|\n";
			}
			if (l_resis[3] == 4) {
				cout << "--R4 = " << resis[3] << "ohms--------|\n";
			}

			cout << "|                      |                       |\n";
			cout << "|                      |                       |\n";
			cout << "|                      |                       |\n";

			if (l_resis[0] == 2) {
				cout << "|R1 = " << resis[0] << " ohms          |                       |\n";
			}
			if (l_resis[0] == 1) {
				cout << "|R1 = " << resis[0] << " ohms           |                       |\n";
			}
			if (l_resis[0] == 3) {
				cout << "|R1 = " << resis[0] << " ohms         |                       |\n";
			}
			if (l_resis[0] == 4) {
				cout << "|R1 = " << resis[0] << " ohms        |                       |\n";
			}

			cout << "|                      |                       |\n";
			cout << "|                      |                       |\n";
			cout << "|                      |                       |\n";

			if (vent < 10) {
				cout << "|" << vent << "V                  ";
			}
			if (vent < 100 && vent > 9) {
				cout << "|" << vent << "V                ";
			}
			if (vent < 1000 && vent > 99) {
				cout << "|" << vent << "V               ";
			}
			if (vent < 10000 && vent > 999) {
				cout << "|" << vent << "V              ";
			}

			if (l_resis[2] == 2) {
				cout << "|R3 = " << resis[2] << " ohms           ";
			}
			if (l_resis[2] == 1) {
				cout << "|R3 = " << resis[2] << " ohms            ";

			}
			if (l_resis[2] == 3) {
				cout << "|R3 = " << resis[2] << " ohms          ";
			}
			if (l_resis[2] == 4) {
				cout << "|R3 = " << resis[2] << " ohms         ";
			}

			cout << "|R5 = " << resis[4] << " ohms\n";
			cout << "|                      |                       |\n";
			cout << "|                      |                       |\n";
			cout << "|                      |                       |\n";
			cout << "|                      |             ---------------------------\n";

			if (l_resis[7] == 2) {
				cout << "|                      |R8 = " << resis[7] << "ohms  ";
			}
			if (l_resis[7] == 1) {
				cout << "|                      |R8 = " << resis[7] << "ohms   ";
			}
			if (l_resis[7] == 3) {
				cout << "|                      |R8 = " << resis[7] << "ohms ";
			}
			if (l_resis[7] == 4) {
				cout << "|                      |R8 = " << resis[7] << "ohms";
			}

			if (l_resis[5] == 2) {
				cout << "| R6 = " << resis[5] << "    ";
			}
			if (l_resis[5] == 1) {
				cout << "| R6 = " << resis[5] << "     ";
			}
			if (l_resis[5] == 3) {
				cout << "| R6 = " << resis[5] << "   ";
			}
			if (l_resis[5] == 4) {
				cout << "| R6 = " << resis[5] << "  ";
			}

			/**/

			if (l_resis[6] == 2) {
				cout << "R7 = " << resis[6] << "ohms | \n";
			}
			if (l_resis[6] == 1) {
				cout << "R7 = " << resis[6] << "ohms  | \n";
			}
			if (l_resis[6] == 3) {
				cout << "R7 = " << resis[6] << "ohms| \n";
			}
			if (l_resis[6] == 4) {
				cout << "R7= " << resis[6] << "ohms| \n";
			}

			cout << "|                      |             ---------------------------\n";
			cout << "|                      |                       |\n";
			cout << "|                      |                       |\n";
			cout << "|                      |                       |\n";
			cout << "|  ------------------  |                       |\n";

			if (l_resis[8] == 2) {
				cout << "|  | R9 = " << resis[8] << "ohms    |  |                       |\n";
			}
			if (l_resis[8] == 1) {
				cout << "|  | R9 = " << resis[8] << "ohms     |  |                       |\n";
			}
			if (l_resis[8] == 3) {
				cout << "|  | R9 = " << resis[8] << "ohms   |  |                       |\n";
			}
			if (l_resis[8] == 4) {
				cout << "|  | R9 = " << resis[8] << "ohms  |  |                       |\n";
			}

			cout << "|  |                |  |                       |\n";
			cout << "|--|                |--|-----------------------|\n";

			if (l_resis[9] == 2) {
				cout << "   |  R10 = " << resis[9] << "ohms  |\n";
			}
			if (l_resis[9] == 1) {
				cout << "   |  R10 = " << resis[9] << "ohms   |\n";
			}
			if (l_resis[9] == 3) {
				cout << "   |  R10 = " << resis[9] << "ohms |\n";
			}
			if (l_resis[9] == 4) {
				cout << "   |  R10 = " << resis[9] << "ohms|\n";
			}

			cout << "   ------------------\n";

			/*Separacion de circuitos*/

			//Circuito resultante 1

			cout << "\n\n\n";
			cout << "Circuito resultante 1: \n\n\n\n";

			if (l_resis[1] == 2) {
				cout << "|----R2 = " << resis[1] << " ohms--";
			}
			if (l_resis[1] == 1) {
				cout << "|----R2 = " << resis[1] << " ohms---";
			}
			if (l_resis[1] == 3) {
				cout << "|----R2 = " << resis[1] << " ohms-";
			}
			if (l_resis[1] == 4) {
				cout << "|----R2 = " << resis[1] << " ohms";
			}

			if (l_resis[3] == 2) {
				cout << "| -R4 = " << resis[3] << "ohms--| \n";
			}
			if (l_resis[3] == 1) {
				cout << "| -R4 = " << resis[3] << "ohms---| \n";
			}
			if (l_resis[3] == 3) {
				cout << "|-R4 = " << resis[3] << "ohms--| \n";
			}
			if (l_resis[3] == 4) {
				cout << "|-R4 = " << resis[3] << "ohms-| \n";
			}

			cout << "|	               |               |\n";
			cout << "|	               |               |\n";

			if (l_resis[0] == 2) {
				cout << "|R1 = " << resis[0] << " ohms      |               |\n";
			}
			if (l_resis[0] == 1) {
				cout << "|R1 = " << resis[0] << " ohms       |               |\n";
			}
			if (l_resis[0] == 3) {
				cout << "|R1 = " << resis[0] << " ohms     |               |\n";
			}
			if (l_resis[0] == 4) {
				cout << "|R1 = " << resis[0] << " ohms    |               |\n";
			}

			cout << "|	               |               |\n";
			cout << "|	               |               |\n";

			if (vent < 10) {
				cout << "|" << vent << "V             ";
			}
			if (vent < 100 && vent > 9) {
				cout << "|" << vent << "V            ";
			}
			if (vent < 1000 && vent > 99) {
				cout << "|" << vent << "V            ";
			}
			if (vent < 10000 && vent > 999) {
				cout << "|" << vent << "V          ";
			}

			if (l_resis[2] == 2) {
				cout << "| R3 = " << resis[2] << " ohms  ";
			}
			if (l_resis[2] == 1) {
				cout << "| R3 = " << resis[2] << " ohms   ";
			}
			if (l_resis[2] == 3) {
				cout << "| R3 = " << resis[2] << " ohms ";
			}
			if (l_resis[2] == 4) {
				cout << "|R3 = " << resis[2] << " ohms ";
			}

			if (l_resis[4] == 2) {
				cout << "| R5 = " << resis[4] << " ohms\n";
			}
			if (l_resis[4] == 1) {
				cout << "| R5 = " << resis[4] << " ohms \n";
			}
			if (l_resis[4] == 3) {
				cout << "| R5 = " << resis[4] << " ohms\n";
			}
			if (l_resis[4] == 4) {
				cout << "| R5 = " << resis[4] << " ohms\n";
			}

			cout << "|                  |               |\n";
			cout << "|	               |               |\n";

			if (l_resis[7] == 2) {
				cout << "|                  |R8 = " << resis[7] << " ohms   ";
			}
			if (l_resis[7] == 1) {
				cout << "|                  |R8 = " << resis[7] << " ohms    ";
			}
			if (l_resis[7] == 3) {
				cout << "|                  |R8 = " << resis[7] << " ohms  ";
			}
			if (l_resis[7] == 4) {
				cout << "|                  |R8 = " << resis[7] << " ohms ";
			}

			cout << "| Ra = " << resis_1[5] << " ohms\n";

			cout << "|	               |               |\n";
			cout << "|	               |               |\n";

			if (l_rb == 7) {
				cout << "|---Rb = " << resis_2[3] << " ohms--|---------------|\n";
			}
			if (l_rb == 8) {
				cout << "|--Rb = " << resis_2[3] << " -ohms--|---------------|\n";
			}
			//3
			if (l_rb == 9) {
				cout << "|-Rb = " << resis_2[3] << " ohms--|---------------|\n";
			}
			if (l_rb == 10) {
				cout << "|-Rb = " << resis_2[3] << " ohms-|---------------|\n";
			}

			//Circuito resultante 2

			cout << "\n\n\n";
			cout << "Circuito resultante 2: \n\n\n\n";

			if (l_resis[1] == 2) {
				cout << "|--R2 = " << resis[1] << " ohms ---|\n";
			}
			if (l_resis[1] == 1) {
				cout << "|---R2 = " << resis[1] << " ohms ---|\n";
			}
			if (l_resis[1] == 3) {
				cout << "|--R2 = " << resis[1] << " ohms --|\n";
			}
			if (l_resis[1] == 4) {
				cout << "|-R2 = " << resis[1] << " ohms -|\n";
			}


			cout << "|	               |\n";
			cout << "|	               |\n";
			if (l_resis[0] == 2) {
				cout << "R1 = " << resis[0] << " ohms       |\n";
			}
			if (l_resis[0] == 1) {
				cout << "R1 = " << resis[0] << " ohms        |\n";
			}
			if (l_resis[0] == 3) {
				cout << "R1 = " << resis[0] << " ohms      |\n";
			}
			if (l_resis[0] == 4) {
				cout << "R1 = " << resis[0] << " ohms     |\n";
			}

			cout << "|	               |\n";
			//Lineas para alargar el circuito y que no este tan amontonado
			cout << "|	               |\n";

			//Dependiendo de si es una cifra de 1 o 2 digitos se acorta o alarga los espacios en la zona de voltaje
			if (vent < 10) {
				cout << "" << vent << "V             ";
			}
			if (vent < 100 && vent > 9) {
				cout << "" << vent << "V            ";
			}
			if (vent < 1000 && vent > 99) {
				cout << "|" << vent << "V              ";
			}
			if (vent < 10000 && vent > 999) {
				cout << "|" << vent << "V             ";
			}

			cout << "Raa = " << resis_2[2] << "ohms\n";
			cout << "|	               |\n";
			cout << "|	               |\n";
			cout << "|	               |\n";
			cout << "|	               |\n";
			//Se utilizan if para ver cuanto deben medir las lineas, basandose en la cantidad de cifras
			/*if (l_rb == 2) {
				cout << "|---Rb = " << resis_2[3] << " ohms---|\n";
			}
			if (l_rb == 1) {
				cout << "|----Rb = " << resis_2[3] << " ohms---|\n";
			}
			if (l_rb == 3) {
				cout << "|---Rb = " << resis_2[3] << " ohms--|\n";
			}
			if (l_rb == 4) {
				cout << "|---Rb = " << resis_2[3] << " ohms-|\n";
			}
			if (l_rb == 5) {
				cout << "|--Rb = " << resis_2[3] << " ohms-|\n";
			}
			if (l_rb == 6) {
				cout << "|-Rb = " << resis_2[3] << " ohms-|\n";
			}*/
			if (l_rb == 7) {
				cout << "|---Rb = " << resis_2[3] << " ohms--|\n";
			}
			if (l_rb == 8) {
				cout << "|--Rb = " << resis_2[3] << " -ohms--|\n";
			}
			//3
			if (l_rb == 9) {
				cout << "|-Rb = " << resis_2[3] << " ohms--|\n";
			}
			if (l_rb == 10) {
				cout << "|-Rb = " << resis_2[3] << " ohms-|\n";
			}
			/*
			if (l_rb == 11) {
				cout << "|--Rb = " << resis_2[3] << " ohms|\n";
			}*/
			

			//Resultados


			cout << "\n\n-----------------------------------------------------\n";

			cout << "\nResultados:\n";
			cout << "Resistencia total = " << rt << " Ohms\n";

			//Se establece en 4 numeros despues del punto la precicion de intensidad
			std::cout.setf(std::ios::fixed);
			std::cout.setf(std::ios::showpoint);
			std::cout.precision(4);
			cout << "Intensidad total = " << it << " Amperes\n";

			//Vuelve a 2 la precicion de intensidad porque el voltaje siempre sera entero, y no tiene caso muestre .0000
			std::cout.setf(std::ios::fixed);
			std::cout.setf(std::ios::showpoint);
			std::cout.precision(2);
			cout << "Voltaje total = " << vt << " Volts\n";

			cout << "\n-----------------------------------------------------\n";

			break;
		case 4:;
			//Salir

			cout << "La opcion elegida es salir. Adios\n\n\n";
			break;
		default:
			//Opcion invalida
			cout << menu_inicio << " es una opcion invalida. Vuelve a Intentarlo\n";

		}
		//Volver a usar el programa
		cout << "Deseas volver a utilizar el programa? \n(Usa SI, si o Si para confirmar)\n(Usa cualquier otro caracter para no continuar)\n";
		cin >> continuar;

		cout << "\n-----------------------------------------------------\n\n\n\n\n";
	} while (continuar == "Si" || continuar == "si" || continuar == "SI");

	printf("Saliendo...\nSaliendo...\nSaliendo...\nSaliendo...\nSaliendo...\nSaliendo...\n");
	cout << "Gracias, vuelve pronto\n";
	return 0;
}


bool esNumerico(string linea) {
	//La funcion se utiliza para validar que se trate de un entero cuando se invoca
	bool b = true;
	int longitud = linea.size();

	if (longitud == 0) { // Cuando el usuario pulsa ENTER
		b = false;
	}
	else if (longitud == 1 && !isdigit(linea[0])) {
		b = false;
	}
	else {
		int i;
		if (linea[0] == '+' || linea[0] == '-')
			i = 1;
		else
			i = 0;

		while (i < longitud) {
			if (!isdigit(linea[i])) {
				b = false;
				break;
			}
			i++;
		}
	}

	return b;
}




/*













































*/