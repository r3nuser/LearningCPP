#include "Empregado.h"

Empregado::~Empregado(){
    delete id;
    delete nome;
}

void Empregado::setId(int id){
    this.id = id;
}

void Empregado::setNome(char* nome){
    delete nome;
    this.nome = nome;
}

int Empregado::getId(){
    return id;
}

char* Empregado::getNome(){
    return nome;
}
