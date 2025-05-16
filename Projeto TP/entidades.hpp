#ifndef ENTIDADES_HPP_INCLUDED
#define ENTIDADES_HPP_INCLUDED

#include "dominios.hpp"

using namespace std;

/// Entidade: Ordem / Luiz Carlos - 241004560
/// Cria uma estrutura para Ordens
/// Toda ordem necessariamente precisa ter Codigo, Codigo de Negociacao, Data, Preço e Quantidade.
class Ordem{
private:
    /// Inicialização de um objeto da classe Codigo
    Codigo codigo;
    /// Inicialização de um objeto da classe Codigo de Negociação
    CodigoNegociacao codigonegociacao;
    /// Inicialização de um objeto da classe Data
    Data data;
    /// Inicialização de um objeto da classe Dinheiro
    Dinheiro preco;
    /// Inicialização de um objeto da classe Quantidade
    Quantidade quantidade;
public:
    /// Método que armazena o codigo
    /// @param Um valor da classe Codigo
    void setCodigo(Codigo);
    /// Método que puxa o codigo armazenado
    /// @return codigo
    Codigo getCodigo();
    /// Método que armazena o codigo de negociação
    /// @param Um valor da classe CodigoNegociacao
    void setCodigoNegociacao(CodigoNegociacao);
    /// Método que puxa o codigo de negociação armazenado
    /// @return codigo de negociação
    CodigoNegociacao getCodigoNeociacao();
    /// Método que armazena a data
    /// @param um valor da classe Data
    void setData(Data);
    /// Método que puxa a data armazenada
    /// @return data
    Data getData();
    /// Método que armazena o preço
    /// @param Um valor da classe Dinheiro
    void setPreco(Dinheiro);
    /// Método que puxa o preço armazenado
    /// @return preço
    Dinheiro getPreco();
    /// Método que armazena a quantidade
    /// @param Um valor da classe Quantidade
    void setQuantidade(Quantidade);
    /// Método que puxa a quantidade armazenada
    /// @return quantidade
    Quantidade getQuantidade();
};
inline void Ordem::setCodigo(Codigo codigo){
    this->codigo = codigo;
}
inline Codigo Ordem::getCodigo(){
    return codigo;
}
inline void Ordem::setCodigoNegociacao(CodigoNegociacao codigonegociacao){
    this->codigonegociacao = codigonegociacao;
}
inline CodigoNegociacao Ordem::getCodigoNeociacao(){
    return codigonegociacao;
}
inline void Ordem::setData(Data data){
    this->data = data;
}
inline Data Ordem::getData(){
    return data;
}
inline void Ordem::setPreco(Dinheiro preco){
    this->preco = preco;
}
inline Dinheiro Ordem::getPreco(){
    return preco;
}
inline void Ordem::setQuantidade(Quantidade quantidade){
    this->quantidade = quantidade;
}
inline Quantidade Ordem::getQuantidade(){
    return quantidade;
}
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
