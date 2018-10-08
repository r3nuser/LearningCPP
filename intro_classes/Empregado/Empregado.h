class Empregado{
    public:
        int id;
        char *nome;
    private:
        Empregado(int i, char* n) : id(i), nome(n){}
        ~Empregado();
        
};