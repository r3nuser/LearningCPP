#include <iostream>
#include "Empregado.h"

using namespace std;

int main(void){
    Empregado programador(2,"Renan");
    cout << "Nome: " << programador.getNome() << endl;
    cout << "ID: " << programador.getId() << endl;



    return 0;
}
