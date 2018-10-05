#include <iostream>
#include "Pessoa.h"

using namespace std;

int main(){
	Pessoa p(5, "Renan", 19);

	cout << p.getId() << endl;
	cout << p.getNome() << endl;
	cout << p.getIdade() << endl;

	p.setId(20);
	p.setNome("Jadir");
	p.setIdade(87);

	cout << p.getId() << endl;
        cout << p.getNome() << endl;
        cout << p.getIdade() << endl;

	return 0;
}
