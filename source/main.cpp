#include <iostream>
#include "Btree.h"
using namespace std;

int main() {
    cout << "########## B - TREE ###############" << endl;

    int ordenBTree;
    cout << "Ingrese el Oden del arbol B: "; cin >> ordenBTree;
    BTree test1(5);

    //logica de bucle infinito
    bool menu = true;
    while (menu){

        int respuesta;

        cout << "---------------------------------------------------" << endl;
        cout << "Opciones:" << endl;
        cout << "Insertar .......................... 1" << endl;
        cout << "Eliminar .......................... 2" << endl;
        cout << "Modificar.......................... 3" << endl;
        cout << "Salir ............................. 0" << endl;
        cout << "---------------------------------------------------" << endl;
        cout << "RESPUESTA: "; cin >> respuesta;
        cout << "---------------------------------------------------" << endl;

        if(respuesta == 1){
            cout << "Vamo a insertar" << endl;
            test1.f1();
        }
        else if (respuesta == 2){
            cout << "vamoa a eliminar" << endl;
        }
        else if(respuesta == 3){
            cout << "vamoa a modificar " << endl;
        }
        else if(respuesta == 0){
            cout << "Saliendo del programa" << endl;
            menu = false;
        }
        else{
            cout << "Tas huevon" << endl;
        }
    }

    return 0;
}
