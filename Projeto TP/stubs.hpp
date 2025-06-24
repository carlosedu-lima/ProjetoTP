#ifndef STUBS_HPP_INCLUDED
#define STUBS_HPP_INCLUDED
#include "interfaces.hpp"

class StubISA:public ISA{
private:
    const static string TRIGGER_FALHA;
    const static string TRIGGER_ERRO_SISTEMA;
public:
    bool autenticar(CPF&,Senha&)override;
};

class StubISC:public ISC{
private:
    const static string TRIGGER_FALHA_CPF;
    const static string TRIGGER_ERRO_SISTEMA_CPF;
    const static string TRIGGER_FALHA_NOME;
    const static string TRIGGER_ERRO_SISTEMA_NOME;
    const static string TRIGGER_FALHA_SENHA;
    const static string TRIGGER_ERRO_SISTEMA_SENHA;
public:
    bool criar(Conta)override;
    bool ler(Conta&)override;
    bool editar(Conta)override;
    bool excluir(CPF)override;
};
#endif // STUBS_HPP_INCLUDED
