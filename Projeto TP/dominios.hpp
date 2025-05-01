//
//  dominios.hpp
//  Projeto TP
//
//  Created by Carlos Eduardo Figueredo Lima on 26/04/25.
//

#ifndef dominios_hpp
#define dominios_hpp

#include <stdio.h>
using namespace std;
//Classe Codigo
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
//Classe Codigo de Negociacao
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
//Classe Perfil
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
//Classe Senha
class Senha{
    
};
#endif /* dominios_hpp */
