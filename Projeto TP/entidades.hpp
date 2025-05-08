#ifndef ENTIDADES_HPP_INCLUDED
#define ENTIDADES_HPP_INCLUDED

#include "dominios.hpp"

using namespace std;

// Entidade: Ordem / Luiz Carlos - 241004560
class Ordem{
private:
    Codigo codigo;
    CodigoNegociacao codigonegociacao;
    Data data;
    Dinheiro preço;
    Quantidade quantidade;
public:
    // Metodos
};
//Classe e Metodos Entidade Conta - Carlos Eduardo 241004659
class Conta{
private:
    CPF cpf;
    Nome nome;
    Senha senha;
public:
    void setCPF(CPF);
    CPF getCPF();
    void setNome(Nome);
    Nome getNome();
    void setSenha(Senha);
    Senha getSenha();
};
inline void Conta::setCPF(CPF cpf){
    this->cpf=cpf;
}
inline CPF Conta::getCPF(){
    return cpf;
}
inline void Conta::setNome(Nome nome){
    this->nome=nome;
}
inline Nome Conta::getNome(){
    return nome;
}
inline void Conta::setSenha(Senha senha){
    this->senha=senha;
}
inline Senha Conta::getSenha(){
    return senha;
}
//Classe e Metodos Entidade Carteira - Carlos Eduardo 241004659
class Carteira{
private:
    Codigo codigo;
    Nome nome;
    Perfil perfil;
public:
    void setCodigo(Codigo);
    Codigo getCodigo();
    void setNome(Nome);
    Nome getNome();
    void setPerfil(Perfil);
    Perfil getPerfil();
};
inline void Carteira::setCodigo(Codigo codigo){
    this->codigo=codigo;
}
inline Codigo Carteira::getCodigo(){
    return codigo;
}
inline void Carteira::setNome(Nome nome){
    this->nome=nome;
}
inline Nome Carteira::getNome(){
    return nome;
}
inline void Carteira::setPerfil(Perfil perfil){
    this->perfil=perfil;
}
inline Perfil Carteira::getPerfil(){
    return perfil;
}
#endif // ENTIDADES_HPP_INCLUDED
