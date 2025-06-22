#include "controladoras.hpp"

bool CntrIAA::autenticar(CPF& cpf){
    Senha senha;
    string entrada;

    while(true){
        cout << endl << "Autenticacao de usuario" << endl << endl;

        try{

           cout << "Digite o CPF : "<< endl;
           cin >> entrada;
           cpf.setCPF(entrada);
           cout << "Digite a senha : " << endl;
           cin >> entrada;
           senha.setValor(entrada);
           break;}
           catch(const invalid_argument &exp){
               cout << endl<< "Dado em formato incorreto." << endl;
           }
    }

    bool resultado = cntrISA->autenticar(cpf, senha);
    return resultado;
}

