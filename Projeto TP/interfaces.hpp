#ifndef INTERFACES_HPP_INCLUDED
#define INTERFACES_HPP_INCLUDED


///Interface de serviço de autenticação / Luiz Carlos Campos de Alencar - 241004560
class ISA {
private:
    /// @param Um objeto do tipo CPF e um objeto do tipo Senha, que representam os valores a serem validados.
    /// @brief Compara os objetos CPF e Senha com os valores armazenados.
    /// @return True se o valor for validado, False caso o contrario.
    virtual bool autenticar(CPF,Senha) = 0;
};


///Interface de serviço de conta / Luiz Carlos Campos de Alencar - 241004560
class ISC {
private:
    /// @param Um objeto do tipo Conta que representa a conta a ser criada.
    /// @brief Cria uma conta usando os dados providos.
    /// @return True se a conta for criada, False caso o contrario.
    virtual bool criar(Conta) = 0;
    /// @param Um objeto do tipo Conta que representa a conta a ser lida.
    /// @brief Visualiza os dados de uma conta ja existente.
    /// @return True se os dados forem apresentados, False caso o contrario.
    virtual bool ler(Conta*) = 0;
    /// @param Um objeto do tipo Conta que representa a conta a ser editada.
    /// @brief Altera os dados de uma conta ja existente.
    /// @return True se os dados forem alterados, False caso o contrario.
    virtual bool editar(Conta) = 0;
    /// @param Um objeto do tipo CPF que representa o CPF a ser excluido.
    /// @brief Remove o cadastro do CPF no sistema.
    /// @return True se o cpf for excluido, False caso o contrario.
    virtual bool excluir(CPF) = 0;
};

#endif // INTERFACES_HPP_INCLUDED
