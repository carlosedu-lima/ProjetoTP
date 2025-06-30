#ifndef ENTIDADES_HPP_INCLUDED
#define ENTIDADES_HPP_INCLUDED

#include "../includes/dominios.hpp"

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
///Classe e Metodos Entidade Conta - Carlos Eduardo 241004659
/// Entidade: Conta
/// Cria uma estrutura para Conta
/// Toda ordem necessariamente precisa ter Cpf, Nome, Senha.
class Conta{
private:
    /// Inicialização de um objeto da classe CPF
    CPF cpf;
    /// Inicialização de um objeto da classe Nome
    Nome nome;
    /// Inicialização de um objeto da classe Senha
    Senha senha;
public:
    /// Método que armazena o CPF
    /// @param Um valor da classe CPF
    void setCPF(CPF);
    /// Método que  retorna o CPF armazenado
    /// @return CPF
    CPF getCPF();
    /// Método que armazena o Nome
    /// @param Um valor da classe Nome
    void setNome(Nome);
    /// Método que  retorna o Nome armazenado
    /// @return Nome
    Nome getNome();
    /// Método que armazena a Senha
    /// @param Um valor da classe Senha
    void setSenha(Senha);
    /// Método que  retorna a Senha armazenada
    /// @return Senha
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
///Classe e Metodos Entidade Conta - Carlos Eduardo 241004659
/// Entidade: Carteira
/// Cria uma estrutura para Carteira
/// Toda ordem necessariamente precisa ter Codigo, Nome, Perfil.
class Carteira{
private:
    /// Inicialização de um objeto da classe Codigo
    Codigo codigo;
    /// Inicialização de um objeto da classe Nome
    Nome nome;
    /// Inicialização de um objeto da classe Perfil
    Perfil perfil;
public:
    /// Método que armazena o Codigo
    /// @param Um valor da classe Codigo
    void setCodigo(Codigo);
    /// Método que  retorna o Codigo armazenada
    /// @return Codgio
    Codigo getCodigo();
    /// Método que armazena o Nome
    /// @param Um valor da classe Nome
    void setNome(Nome);
    // Método que  retorna o Nome armazenada
    /// @return Nome
    Nome getNome();
    /// Método que armazena o Perfil
    /// @param Um valor da classe Perfil
    void setPerfil(Perfil);
    // Método que  retorna o Perfil armazenada
    /// @return Perfil
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
