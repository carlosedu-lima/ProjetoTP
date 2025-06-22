#ifndef INTERFACES_HPP_INCLUDED
#define INTERFACES_HPP_INCLUDED


///Interface de serviço de autenticação / Luiz Carlos Campos de Alencar - 241004560
class ISA {
private:
public:
    /// @param Um objeto do tipo CPF e um objeto do tipo Senha, que representam os valores a serem autenticado.
    /// @brief Compara os objetos CPF e Senha com os valores armazenados.
    /// @return True se o valor for validado, False caso o contrario.
    virtual bool autenticar(CPF&,Senha&) = 0;
};

///Interface de apresentação de autenticação / Luiz Carlos Campos de Alencar - 241004560
class IAA {
private:
public:
    /// @param Uma referencia a um objeto do tipo CPF, que representa o valore a ser autenticado.
    /// @brief Solicita a autenticação do objeto à camada de serviço.
    /// @return True se o valor for autenticado, False caso o contrario.
    virtual bool autenticar(CPF&) = 0;
};

///Interface de serviço de conta / Luiz Carlos Campos de Alencar - 241004560
class ISC {
private:
public:
    /// @param Um objeto do tipo Conta que representa a conta a ser criada.
    /// @brief Cria uma conta usando os dados providos.
    /// @return True se a conta for criada, False caso o contrario.
    virtual bool criar(Conta) = 0;
    /// @param Um objeto do tipo Conta que representa a conta a ser lida.
    /// @brief Visualiza os dados de uma conta ja existente.
    /// @return True se os dados forem apresentados, False caso o contrario.
    virtual bool ler(Conta&) = 0;
    /// @param Uma referencia a um objeto do tipo Conta que representa a conta a ser editada.
    /// @brief Altera os dados de uma conta ja existente.
    /// @return True se os dados forem alterados, False caso o contrario.
    virtual bool editar(Conta) = 0;
    /// @param Um objeto do tipo CPF que representa o CPF a ser excluido.
    /// @brief Remove o cadastro do CPF no sistema.
    /// @return True se o cpf for excluido, False caso o contrario.
    virtual bool excluir(CPF) = 0;
};
///Interface de apresentação de conta / Luiz Carlos Campos de Alencar - 241004560
class IAC {
private:
public:
    /// @brief Solicita os dados para a criação de um objeto do tipo conta.
    /// @return True se os dados forem coletados, False caso o contrario.
    virtual bool criar() = 0;
    /// @brief Recebe input do usuario e faz solicitação a um dos 4 métodos de serviço.
    virtual void executar(CPF) = 0;
};


//-----------------------------------------------------//
//----------------CLASSE CONTROLADORA------------------//
//-----------------------------------------------------//
/* Exemplo usado durante a aula
class contrAC:public IAC{
private:
    ISC *cntr; <- ponteiro para um objeto do tipo ISC, que é uma classe abstrata

public:
    bool criar();
    void executar(cpf);
    void setCntr(ISC*); <- Não lembro pra que serve
};*/
#endif // INTERFACES_HPP_INCLUDED
