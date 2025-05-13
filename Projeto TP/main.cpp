#include <iostream>
#include <string>
#include <cctype>
#include "dominios.hpp"
#include "entidades.hpp"
#include "testes.hpp"
#include "testes.cpp"
using namespace std;
//int main(int argc, const char * argv[]) {
    // IMPLEMENTACAO
   /* Codigo c;
    c.setValor(5);
    cout<<c.getValor()<<endl;
    cout<<c.setValor(10103)<<endl;*/
//    string nome= "1Carlos";
//    int num = 1;
//    char a ='s';
//    if(isdigit(nome[0])){
//        cout<<"E um decimal de 0 - 9"<<endl;
//    }else{
//        cout<<"Nao e"<<endl;
////    }
////
//    string senha = "carlos !";
//    int cont = 0;
//    cout<<size(senha)<<endl;
//    while (cont<=size(senha)){
//        if(isspace(nome[cont])){
//            cout<<"tem especo"<<endl;
//        }else{
//            cout<<"na0 tem espaco"<<endl;
//        }
//        cont=cont+1;
//    }
//    CodigoNegociacao c;
//    c.setValor("Kdu12");
//    cout<<c.getValor()<<endl;
//    Perfil p;
//    p.setValor("Conservador");
//    cout<<p.getValor()<<endl;
//    Senha s;
//    s.setValor(";");
//    cout<<"A senha é "<<s.getValor()<<endl;
/*    Conta conta;
    CPF c;
    Nome n;
    Senha s;

    c.setCPF("07676639182");
    n.setNome("Carlos Eduardo");
    s.setValor("Kdu25#");

    conta.setCPF(c);
    conta.setNome(n);
    conta.setSenha(s);

    cout<<conta.getCPF().getCPF()<<endl;
    cout<<conta.getNome().getNome()<<endl;
    cout<<conta.getSenha().getValor()<<endl;

    Carteira carteira;

    Codigo codigo;
    Perfil p;

    codigo.setValor(123);
    p.setValor("Conservador");

    carteira.setNome(n);
    carteira.setCodigo(codigo);
    carteira.setPerfil(p);

    cout<<carteira.getCodigo().getValor()<<endl;
    cout<<carteira.getNome().getNome()<<endl;
    cout<<carteira.getPerfil().getValor()<<endl;


    return 0;


}*/

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
        return 0;
}
