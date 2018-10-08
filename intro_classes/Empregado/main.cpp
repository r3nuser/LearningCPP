#include <iostream>
#include "Empregado.h"

using namespace std;

int main(void){
    Empregado programador(2,"Renan");
 
    Empregado manager(programador);
    manager.setNome("JP");

    cout << "Nome: " << programador.getNome() << endl;
    cout << "ID: " << programador.getId() << endl;
    cout << "Nome: " << manager.getNome() << endl;
    cout << "ID: " << manager.getId() << endl;
    return 0;
}
