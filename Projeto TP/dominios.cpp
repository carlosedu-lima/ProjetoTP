//
//  dominios.cpp
//  Projeto TP
//
//  Created by Carlos Eduardo Figueredo Lima on 26/04/25.
//
#include <iostream>
#include <string>
#include <cctype>
#include "dominios.hpp"

using namespace std;
//Metodos Classe Codigo
bool Codigo::validar(int valor){
    if(valor>LIMITEMAX||valor<LIMITEMIN)
        return false;
    return true;
}
bool Codigo::setValor(int valor){
    if(!validar(valor))
        return false;
    this->valor = valor;
    return true;
}
//Metodos Classe CodigoNegociacao
bool CodigoNegociacao::validar(string valor){
    int cont = 0;
    if(size(valor)<=LIMITE){
        while (cont<size(valor)) {
            if(isalpha(valor[cont])||valor[cont]==' '||isdigit(valor[cont])){
                cont++;
            }else{
                cout<<"**CODIGO INVALIDO***";
                return false;
            }
        }
    }
    return true;
}
bool CodigoNegociacao::setValor(string valor){
    if(!validar(valor)){
        return false;
    }
    this->valor=valor;
    return true;
}
//Metodos Classe Perfil

bool Perfil::validar(string valor){
    if(valor=="Conservador"||valor=="Moderado"||valor=="Agressivo"){
        return true;
    }
    return false;
}
bool Perfil::setValor(string valor){
    if(!validar(valor)){
        return false;
    }
    this->valor=valor;
    return true;
}
