#include "Empregado.h"

Empregado::Empregado(int i, char* n){
    id = i;
    nome = n;
}

Empregado::~Empregado(){

}

void Empregado::setId(int i){
    id = i;
}

void Empregado::setNome(char* n){
        
}

int Empregado::getId(){
    return id;
}

char* Empregado::getNome(){
    return nome;
}
