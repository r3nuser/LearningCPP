#include <string>
using std::string;

class Pessoa{
	private:
		int id;
		string nome;
		int idade;
	public:
		Pessoa(int i, string n, int ida);
		int getId();
		string getNome();
		int getIdade();
		void setId(int i);
		void setNome(string n);
		void setIdade(int i);
};
