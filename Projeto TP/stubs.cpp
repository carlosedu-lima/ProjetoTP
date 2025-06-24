#include "stubs.hpp"
#include <string>
const string StubISA::TRIGGER_FALHA = "000.000.000-00" ;
const string StubISA::TRIGGER_ERRO_SISTEMA = "111.111.111-11" ;

bool StubISA::autenticar(CPF& cpf,Senha& senha){

    cout << endl << "StubISA::autenticar" << endl;
    cout << "CPF = " << cpf.getCPF() << endl;
    cout << "Senha = " << senha.getValor() << endl;

    if(cpf.getCPF() == TRIGGER_FALHA)
        return false;
    if(cpf.getCPF() == TRIGGER_ERRO_SISTEMA)
        throw runtime_error("Erro de sistema");
    /*switch(cpf.getCPF()){
        case TRIGGER_FALHA:
        return false;
        case TRIGGER_ERRO_SISTEMA:
        throw runtime_error("Erro de sistema");*/

    return true;
}

const string StubISC::TRIGGER_FALHA_CPF = "000.000.000-00";
const string StubISC::TRIGGER_ERRO_SISTEMA_CPF = "111.111.111-11";
const string StubISC::TRIGGER_FALHA_NOME = "Nome Sobrenome0";
const string StubISC::TRIGGER_ERRO_SISTEMA_NOME = "Nome Sobrenome1";
const string StubISC::TRIGGER_FALHA_SENHA = "aUu20#";
const string StubISC::TRIGGER_ERRO_SISTEMA_SENHA = "aUu21#";
bool StubISC::criar(Conta conta){

    cout << endl << "StubISC::criar" << endl;
    cout << "CPF = " << conta.getCPF().getCPF() << endl;
    cout << "Nome = " << conta.getNome().getNome() << endl;
    cout << "Senha = " << conta.getSenha().getValor() << endl;

    if(conta.getCPF().getCPF() == TRIGGER_FALHA_CPF)
        return false;
    if(conta.getCPF().getCPF() == TRIGGER_ERRO_SISTEMA_CPF)
        throw runtime_error("Erro de sistema");

    return true;
    }

bool StubISC::ler(Conta& conta){

    cout << endl << "StubISC::ler" << endl;
    cout << "CPF = " << conta.getCPF().getCPF() << endl;
    cout << "Nome = " << conta.getNome().getNome() << endl;
    cout << "Senha = " << conta.getSenha().getValor() << endl;

    if(conta.getCPF().getCPF() == TRIGGER_FALHA_CPF)
        return false;
    if(conta.getCPF().getCPF() == TRIGGER_ERRO_SISTEMA_CPF)
        throw runtime_error("Erro de sistema");

    return true;
}

bool StubISC::editar(Conta conta){

    cout << endl << "StubISC::editar" << endl;
    cout << "CPF = " << conta.getCPF().getCPF() << endl;
    cout << "Nome = " << conta.getNome().getNome() << endl;
    cout << "Senha = " << conta.getSenha().getValor() << endl;

    if(conta.getNome().getNome() == TRIGGER_FALHA_NOME)
        return false;
    if(conta.getNome().getNome() == TRIGGER_ERRO_SISTEMA_NOME)
        throw runtime_error("Erro de sistema");
    if(conta.getSenha().getValor() == TRIGGER_FALHA_SENHA)
        return false;
    if(conta.getSenha().getValor() == TRIGGER_ERRO_SISTEMA_SENHA)
        throw runtime_error("Erro de sistema");

    return true;
}

bool StubISC::excluir(CPF cpf){

    cout << endl << "StubISC::excluir" << endl;
    cout << "CPF = " << cpf.getCPF() << endl;

    if(cpf.getCPF() == TRIGGER_FALHA_CPF)
        return false;
    if(cpf.getCPF() == TRIGGER_ERRO_SISTEMA_CPF)
        throw runtime_error("Erro de sistema");

    return true;
}
