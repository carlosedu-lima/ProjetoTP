#ifndef dominios_hpp
#define dominios_hpp

#include <stdio.h>
#include <string>
#include <set>
using namespace std;
//Classe Dominio Codigo - Carlos Eduardo 241004659
class Codigo{
private:
    static const int LIMITEMAX = 99999;
    static const int LIMITEMIN = 0;
    int valor;
    bool validar(int);
public:
    bool setValor(int);
    int getValor();
};

inline int Codigo::getValor(){
    return valor;
}
//Classe Dominio Codigo de Negociacao - Carlos Eduardo 241004659
class CodigoNegociacao{
private:
    static const int LIMITE = 12;
    string valor;
    bool validar(string);
public:
    bool setValor(string);
    string getValor();
};

inline string CodigoNegociacao::getValor(){
    return valor;
}
//Classe Dominio Perfil - Carlos Eduardo 241004659
class Perfil{
private:
    string valor;
    bool validar(string);
public:
    bool setValor(string);
    string getValor();
};
inline string Perfil::getValor(){
    return valor;
}
//Classe Dominio Senha - Carlos Eduardo 241004659
class Senha{
private:
    static int const LIMITE = 6;
    string valor;
    bool validar(string);
public:
    bool setValor(string);
    string getValor();
};
inline string Senha::getValor(){
    return valor;
}


//Domínio: Quantidade / Luiz Carlos - 241004560
class Quantidade {
private:
    static constexpr float LIMITE_MAX = 1000000;
    static constexpr float LIMITE_MIN = 0.01;
    float valor;
    bool validar(float);
public:
    bool setValor(float);
    float getValor();

};

inline float Quantidade::getValor(){
    return valor;

};

// Domínio: Dinheiro / Luiz Carlos - 241004560
class Dinheiro {
private:
    static const int LIMITE_MAX = 1000000;
    static const int LIMITE_MIN = 1;
    int valor;
    bool validar(int);
public:
    bool setValor(int);
    int getValor();

};

inline int Dinheiro::getValor(){
    return valor;

};
//--------------------DOCUMENTAÇÃO EM ANDAMENTO------------------------------------------
/// Domínio: Data / Luiz Carlos - 241004560
/// @brief Dominio Data, Recebe 3 inteiros, que serão verificados e formatados para atender um padrão de data.
///
/// Verifica e formata a data recebida, comfome um padrão desejado.
class Data {
private:
    ///@param Constante de controle de Ano
    static const int LIMITE_MAX_ANO = 2025;
    ///@param Constante de controle de Ano
    static const int LIMITE_MIN_ANO = 1;
    ///@param Constante de controle de Mes
    static const int LIMITE_MAX_MES = 12;
    ///@param Constante de controle de Mes
    static const int LIMITE_MIN_MES = 1;
    ///@param Constantel de controle de Dia
    static const int LIMITE_MAX_DIA = 31;
    ///@param Constante de controle de Dia
    static const int LIMITE_MIN_DIA = 1;
    ///@brief Inicialização de 3 variaveis para manipular a formatação
    int ano, mes, dia;
    ///@brief Data final a ser armazenada.
    string data;
    ///@param Ano, Mes , Dia
    ///@brief Método de Validação dos valores para a data, chamado pelo método setData.
    bool validarData(int, int, int);

public:
    ///@param Ano, Mes, Dia
    ///@brief Método que formata e armazena a data, chama o método validarData para garantir que segue o padrão desejado.
    bool setData(int, int, int);
    ///@return Retorna a data armazenada.
    string getData();
};

inline string Data::getData(){
    return data;
    }

/// Dominio: Nome / Luiz Carlos - 241004560
/// @brief Dominio Nome , Recebe uma string de até 20 caracteres, valida e armazena ela.
///
/// Recebe uma string e compara ela a duas variaveis de controle, garantindo que a string está dentro de um tamanho desejado.
/// Validando o tamanho da string ela é comparada a um grupo de controle, onde será verificado se ela possui caracteres indesejados.
/// Passando por todas as validações a string é armazenada como um Nome.
class Nome {
private:
    /// @param representa o nome, usado para receber e armazenar a string.
    string nome;
    /// @param LIMITE_CHAR_MAX variavel de controle, usada para validação.
    static const int LIMITE_CHAR_MAX = 20;
    /// @param LIMITE_CHAR_MIN variavel de controle, usada para validação.
    static const int LIMITE_CHAR_MIN = 1;
    /// @brief Método que valida o CPF
    /// @param string que carrega o nome que será validado.
    /// Recebe uma string do método setNome, valida seu tamanho e verifica se contem caracteres indesejados.
    /// @return True se a string passar pela verificação, False caso o contrario.
    bool validarNome(string);
public:
    /// @brief Método que armazena o CPF.
    /// @param string que carrega o nome que será armazenado.
    /// Recebe uma string e faz uma chamada ao método validarNome, caso o retorno seja True, armazena o nome na variavel nome.
    /// @return True se o nome for armazenado, False caso o contrario.
    bool setNome(string);
    /// @return retorna o nome armazenado.
    string getNome();
};

inline string Nome::getNome(){
    return nome;
}
///Dominio: CPF / Luiz Carlos - 241004560
/// @brief Dominio CPF, recebe uma string e formata ela no formato padrão.
///
/// Este dominio recebe uma string de 11 caracteres, garantido pela constante TAMANHO e em seguida compara ela a outras strins CPFs ja guardadas.
/// Passando a validação de tamanho e duplicidade, a string recebida é armazenada na lista cpfsCadastrados e na variavel cpf.

class CPF {
private:
    /// @param Variavel usada para a validação.
    static const int TAMANHO = 11;
    /// @param cpf representa o cpf, variavel usada para guardar a string com o CPF.
    string cpf;
    /// @brief Método de validação do cpf.
    ///
    /// @param  Cpf que será validado.
    /// Recebe uma string do método setCPF, valida seu tamanho usando a variavel TAMANHO, e em seguida verifica se é um CPF já cadastrado
    /// usando a lista cpfsCadastrados.
    /// @return True se o cpf passar pelas validações, False se não.
    bool validarCPF(string);
    /// @brief Lista de CPFs ja cadastrados, usada para validação.
    static set<string> cpfsCadastrados;
public:
    /// @brief Método de armazenar o CPF.
    ///
    /// @param o CPF a ser armazenado.
    /// Puxa o método validar e caso o retorno seja True, armazena o cpf na variavel cpf e na lista de cpfsCadastrados.
    /// @return True caso o CPF seja armazenado, False caso o contrario.
    bool setCPF(string);
    /// @return Retorna o CPF armazenado.
    string getCPF();

};

inline string CPF::getCPF(){
    return cpf;
}
#endif /* dominios_hpp */
