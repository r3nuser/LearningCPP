#include "Pessoa.h"
#include <stdlib.h>

int Pessoa::getId(){
	return id;
}

string Pessoa::getNome(){
	return nome;
}

int Pessoa::getIdade(){
	return idade;
}

void Pessoa::setId(int i){
	id = i;
}

void Pessoa::setNome(string n){
	nome = n;
}

void Pessoa::setIdade(int i){
	idade = i;
}

Pessoa::Pessoa(int i, string n, int ida){
	id = i;
	nome = n;
	idade = ida;
}
