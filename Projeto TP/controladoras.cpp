#include "controladoras.hpp"
//Métodos Controladora IAA
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

// Métodos controladora IAC

bool CntrIAC::criar(){
    Nome nome;
    CPF cpf;
    Senha senha;
    string entrada;
    Conta conta;

    while(true){
       cout << "Criacao de conta."  << endl << endl;

       try{
           cout << "Digite o Nome : " << endl << endl;
           cin >> entrada;
           nome.setNome(entrada);
           conta.setNome(nome);
           cout << "Digite o CPF : " << endl<< endl;
           cin >> entrada;
           cpf.setCPF(entrada);
           conta.setCPF(cpf);
           cout << "Digite a Senha : " << endl << endl;
           cin >> entrada;
           senha.setValor(entrada);
           conta.setSenha(senha);
           break;
       }
       catch(const invalid_argument &exp){
           cout << endl << "Dado em formato incorreto." << endl;
       }
    }

    bool resultado = cntrISC->criar(conta);
    return resultado;
}
void CntrIAC::executar(CPF cpf){
    int opcao;
    cout << "Digite : \n1- Para ler\n2- Para editar\n3- Para excluir"<< endl;
    cin >> opcao;

    switch(opcao){
        case 1:{ // Defeituoso, a IAC tem o método executar(CPF), enquanto o método precisa de ler(Conta&), talvez alterar o método executar para receber uma conta no lugar do CPF
            Conta conta;

            if(cntrISC->ler(conta)){
                cout << "Conta Lida com sucesso" << endl<<endl;
                break;
            }else{
                cout << "Conta não encontrada!" << endl<<endl;
                break;
            }

        }
        case 2:{
            Nome novoNome;
            Senha novaSenha;
            Conta contaEditada;
            string entrada;
            while(true){
                    try{
                        cout << "Novo Nome : " << endl;
                        cin >> entrada;
                        novoNome.setNome(entrada);
                        contaEditada.setNome(novoNome);
                        }
                        catch(const invalid_argument &exp){
                            cout << "Nome invalido!"<< endl;}
                    try{
                        cout << "Nova Senha : " << endl;
                        cin >> entrada;
                        novaSenha.setValor(entrada);
                        contaEditada.setSenha(novaSenha);}
                        catch(const invalid_argument &exp){
                            cout << "Senha Invalida!" << endl;}
            contaEditada.setCPF(cpf);


            if(cntrISC->editar(contaEditada)){
                cout << "Conta editada com sucesso." << endl<<endl;
                break;
            }else{
                cout << "Não foi possivel editar a conta." << endl<<endl;
                break;
            }
            }break;

        }
        case 3:{

            if(cntrISC->excluir(cpf)){
                cout << "Conta excluida com sucesso!" << endl<<endl;
                break;
            }else{
                cout << "Falha ao excluir a conta." << endl<<endl;
                break;
            }
        }
        default:
            std::cerr << "Opção inválida!" << std::endl;
    }

}
