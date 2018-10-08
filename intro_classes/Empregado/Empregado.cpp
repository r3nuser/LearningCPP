#include "Empregado.h"
#include <string.h>

Empregado::Empregado(Empregado &e){
	id = e.id;
	nome = new char[strlen(nome) + 1];
	strcpy(nome, e.nome);
}

Empregado::Empregado(int i, char* n){
    id = i;
    nome = n;
}

Empregado::~Empregado(){
	delete nome;
}

void Empregado::setId(int i){
    id = i;
}

void Empregado::setNome(char* n){
	nome = n;
}

int Empregado::getId(){
    return id;
}

char* Empregado::getNome(){
    return nome;
}
