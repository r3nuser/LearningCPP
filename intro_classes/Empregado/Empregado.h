class Empregado{
    private:
        int id;
        char* nome;
    public:
        Empregado(Empregado &e);
        Empregado(int i, char* n);
        ~Empregado();
        void setId(int id);
        void setNome(char* nome);
        int getId();
        char* getNome();
};
