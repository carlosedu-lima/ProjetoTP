#include <iostream>
#include <string>
#include <stdexcept>
#include <cctype>

#include "dominios.hpp"
#include "entidades.hpp"
#include "testes.hpp"
#include "testes.cpp" // A falta desse include estava causando um erro de linkagem
using namespace std;

int main(){
    TUDinheiro testeDinheiro;
    switch(testeDinheiro.run()){
        case TUDinheiro::SUCESSO: cout << "Teste Dominio Dinheiro: SUCESSO" << endl;
        break;
        case TUDinheiro::FALHA : cout << "Teste Dominio Dinheiro: FALHA" << endl;
        break;
        }
    TUQuantidade testeQuantidade;
    switch(testeQuantidade.run()){
        case TUQuantidade::SUCESSO: cout << "Teste Dominio Quantidade: SUCESSO" << endl;
        break;
        case TUQuantidade::FALHA : cout << "Teste Dominio Quantidade: FALHA" << endl;
        break;
        }
    TUData testeData;
    switch(testeData.run()){
        case TUData::SUCESSO: cout << "Teste Dominio Data: SUCESSO" << endl;
        break;
        case TUData::FALHA : cout << "Teste Dominio Data: FALHA" << endl;
        break;
        }
    TUNome testeNome;
    switch(testeNome.run()){
        case TUNome::SUCESSO: cout << "Teste Dominio Nome: SUCESSO" << endl;
        break;
        case TUNome::FALHA : cout << "Teste Dominio Nome: FALHA" << endl;
        break;
        }
    TUCpf testeCpf;
    switch(testeCpf.run()){
        case TUCpf::SUCESSO: cout << "Teste Dominio CPF: SUCESSO" << endl;
        break;
        case TUCpf::FALHA : cout << "Teste Dominio CPF: FALHA" << endl;
        break;
        }
    TUOrdem testeOrdem;
    switch(testeOrdem.run()){
        case TUOrdem::SUCESSO: cout << "Teste Entidade Ordem: SUCESSO" << endl;
        break;
        case TUOrdem::FALHA: cout << "Teste Entidade Ordem: FALHA" << endl;
        break;
    }
    // TESTE CLASSE CODIGO - CARLOS EDUARDO 241004659
    TUCodigo testeCodigo;

    switch (testeCodigo.run()) {
        case TUCodigo::SUCESSO:cout<<"Teste Dominio Codigo: SUCESSO"<<endl;
            break;
        case TUCodigo::FALHA:cout<<"Teste Dominio Codigo: FALHA"<<endl;
            break;
        default:
            break;
    }
    // TESTE CLASSE CODIGO - CARLOS EDUARDO 241004659
    TUCodigoNegociacao testeCodigoNegociacao;

    switch (testeCodigoNegociacao.run()) {
        case TUCodigoNegociacao::SUCESSO:cout<<"Teste Dominio Codigo Negocicacao: SUCESSO"<<endl;
            break;
        case TUCodigoNegociacao::FALHA:cout<<"Teste Dominio Codigo Negocicacao: FALHA"<<endl;
            break;
        default:
            break;
    }
    
    TUPerfil testePerfil; // TESTE CLASSE PERFIL - CARLOS EDUARDO 241004659

    switch (testePerfil.run()) {
        case TUPerfil::SUCESSO:cout<<"Teste Dominio Perfil: SUCESSO"<<endl;
            break;
        case TUPerfil::FALHA:cout<<"Teste Dominio Perfil: FALHA"<<endl;
            break;
        default:
            break;
    }
   
    TUSenha testeSenha; // TESTE CLASSE PERFIL - CARLOS EDUARDO 241004659

    switch (testeSenha.run()) {
        case TUSenha::SUCESSO:cout<<"Testes Dominio Senha: SUCESSO"<<endl;
            break;
        case TUSenha::FALHA:cout<<"Teste Dominio Senha: FALHA"<<endl;
            break;
        default:
            break;
    }
    // TESTE CLASSE ENTIDADE CONTA - CARLOS EDUARDO 241004659
    
    TUConta testeConta;
    
    switch (testeConta.run()) {
        case TUConta::SUCESSO:cout<<"Teste Entidade Conta: SUCESSO"<<endl;
            break;
        case TUConta::FALHA:cout<<"Teste Entidade Conta: FALHA"<<endl;
            break;
        default:
            break;
    }
    // TESTE CLASSE ENTIDADE CARTEIRA - CARLOS EDUARDO 241004659
    TUCarteira testeCarteira;
    
    switch (testeCarteira.run()) {
        case TUCarteira::SUCESSO:cout<<"Teste Entidade Carteira: SUCESSO"<<endl;
            break;
        case TUCarteira::FALHA:cout<<"Teste Entidade Carteira: FALHA"<<endl;
            break;
        default:
            break;
    }

        return 0;
}
