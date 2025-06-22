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
