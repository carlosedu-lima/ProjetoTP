#ifndef dominios_hpp
#define dominios_hpp

#include <stdio.h>
#include <string>
#include <set>
using namespace std;
//Classe Dominio Codigo - Carlos Eduardo 241004659
class Codigo{
private:
    static const int LIMITEMAX = 99999;
    static const int LIMITEMIN = 0;
    int valor;
    bool validar(int);
public:
    bool setValor(int);
    int getValor();
};

inline int Codigo::getValor(){
    return valor;
}
//Classe Dominio Codigo de Negociacao - Carlos Eduardo 241004659
class CodigoNegociacao{
private:
    static const int LIMITE = 12;
    string valor;
    bool validar(string);
public:
    bool setValor(string);
    string getValor();
};

inline string CodigoNegociacao::getValor(){
    return valor;
}
//Classe Dominio Perfil - Carlos Eduardo 241004659
class Perfil{
private:
    string valor;
    bool validar(string);
public:
    bool setValor(string);
    string getValor();
};
inline string Perfil::getValor(){
    return valor;
}
//Classe Dominio Senha - Carlos Eduardo 241004659
class Senha{
private:
    static int const LIMITE = 6;
    string valor;
    bool validar(string);
public:
    bool setValor(string);
    string getValor();
};
inline string Senha::getValor(){
    return valor;
}


//Domínio: Quantidade / Luiz Carlos - 241004560
class Quantidade {
private:
    static constexpr float LIMITE_MAX = 1000000;
    static constexpr float LIMITE_MIN = 0.01;
    float valor;
    bool validar(float);
public:
    bool setValor(float);
    float getValor();

};

inline float Quantidade::getValor(){
    return valor;

};

// Domínio: Dinheiro / Luiz Carlos - 241004560
class Dinheiro {
private:
    static const int LIMITE_MAX = 1000000;
    static const int LIMITE_MIN = 1;
    int valor;
    bool validar(int);
public:
    bool setValor(int);
    int getValor();

};

inline int Dinheiro::getValor(){
    return valor;

};

// Domínio: Data / Luiz Carlos - 241004560
class Data {
private:

    static const int LIMITE_MAX_ANO = 2025;
    static const int LIMITE_MIN_ANO = 1;
    static const int LIMITE_MAX_MES = 12;
    static const int LIMITE_MIN_MES = 1;
    static const int LIMITE_MAX_DIA = 31;
    static const int LIMITE_MIN_DIA = 1;
    int ano, mes, dia;
    string data;
    bool validarData(int, int, int);

public:
    bool setData(int, int, int);
    string getData();
};

inline string Data::getData(){
    return data;}

// Dominio: Nome / Luiz Carlos - 241004560
class Nome {
private:
    string nome;
    static const int LIMITE_CHAR_MAX = 20;
    static const int LIMITE_CHAR_MIN = 1;
    bool validarNome(string);
public:
    bool setNome(string);
    string getNome();
};

inline string Nome::getNome(){
    return nome;
}

//Dominio: CPF / Luiz Carlos - 241004560

class CPF {
private:
    static const int TAMANHO = 11;
    string cpf;
    bool validarCPF(string);
    static set<string> cpfsCadastrados;
public:
    bool setCPF(string);
    string getCPF();

};

inline string CPF::getCPF(){
    return cpf;
}
#endif /* dominios_hpp */
