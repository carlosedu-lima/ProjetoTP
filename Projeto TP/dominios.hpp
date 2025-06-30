#ifndef dominios_hpp
#define dominios_hpp
#include <stdio.h>
#include <string>
#include <set>
using namespace std;

///Classe Dominio Codigo - Carlos Eduardo 241004659
/// @brief Dominio Codigo, cria um limite min/max para um valor de Codigo
/// O valor pode variar entre 0 e 99999 com até 5 digitos
class Codigo{
private:
    ///@param Constante de LIMITE máximo de caracter da do valor da classe Codigo
    static const int LIMITEMAX = 99999;
    ///@param Constante de LIMITE minimo de caracter da do valor da classe Codigo
    static const int LIMITEMIN = 0;
    ///@param representa o valor do Codigo de Negociação: tipo inteiro
    int valor;
    /// - Representa a validação do Codigo com as regras da classe
    /// - Retorna True se for valido
    /// - lança a excessã0 @throw Invalid_argument se o valor for inválido
    bool validar(int);
public:
    /// - Irá 'setar' o valor na variável que representa 'Codigo'
    /// - Vai chamar a função validar
    /// - Retorna True se for armazenado
    /// - Retorna False se não for armazenado
    bool setValor(int);
    ///retorna o valor que está armazenado no valor de CodigoNegociacao
    int getValor();
};

inline int Codigo::getValor(){
    return valor;
}
//Classe Dominio Codigo de Negociacao - Carlos Eduardo 241004659
/// @brief Dominio Codigo de Negociacao, cria um limite que o código pode ter até 12 caracteres
///Cada caracter pode ser dígito (0 – 9), letra (A – Z ou a – z) ou espaço em branco.
class CodigoNegociacao{
private:
    ///@param Constante de LIMITE de caracter da Codigo de Negociacão
    static const int LIMITE = 12;
    ///@param representa o valor do Codigo de Negociação:tipo string
    string valor;
    /// - Representa a validação do Codigo de Negociação com as regras da classe
    /// - Retorna True se for valido
    /// - lança a excessã @throw Invalid_argument se o valor for inválido
    bool validar(string);
public:
    /// - Irá 'setar' o valor na variável que representa 'Codigo de Negociação'
    /// - Vai chamar a função validar
    /// - Retorna True se for armazenado
    /// - Retorna False se não for armazenado
    bool setValor(string);
    ///retorna o valor que está armazenado no valor de CodigoNegociacao
    string getValor();
};

inline string CodigoNegociacao::getValor(){
    return valor;
}
//Classe Dominio Perfil - Carlos Eduardo 241004659
/// @brief Dominio Perfil, vai determinar o tipo de perfil do usuário
///O Perfil pode ser: Conservador, Moderado, Agressivo
class Perfil{
private:
    ///@param que representa o valor da senha tipo:string
    string valor;
    /// - Irá 'setar' o valor na variável 'validar''
    /// - Vai chamar a função validar
    /// - Retorna True se for armazenado
    /// - lança a excessão @throw Invalid_argument se o valor for inválido
    bool validar(string);
public:
    /// - Irá 'setar' o valor na variável que representa o 'perfil'
    /// - Vai chamar a função validar
    /// - Retorna True se for armazenado
    /// - Retorna False se não for armazenado
    bool setValor(string);
    ///retorna o valor que está armazenado  valor da Senha
    string getValor();
};
inline string Perfil::getValor(){
    return valor;
}
//Classe Dominio Senha - Carlos Eduardo 241004659
/// @brief Dominio Senha, cria um limite que a senha pode ter até 6 caracteres
///Cada caracter pode ser dígito (0 – 9), letra (A – Z ou a – z) ou espaço em branco.
///Cada caracter pode ser dígito (0 – 9), letra (A – Z ou a – z), #, $, % ou &.
///Não há caracter duplicado.
///Existe pelo menos um dígito (0 – 9)
///Existe pelo menos uma letra maiúscula (A – Z)
///Existe pelo menos uma letra minúscula (a – z)
///Existe pelo menos um caracter especial (#, $, % ou &)
class Senha{
private:
    ///@param Constante de LIMITE de caracter da senha
    static int const LIMITE = 6;
    ///@param que representa o valor da senha tipo:string
    string valor;
    /// - Representa a validação da senha com as regras da classe
    /// - Retorna True se for valido
    /// - lança a excessão @throw Invalid_argument se o valor for inválido
    bool validar(string);
public:
    /// - Irá 'setar' o valor na variável que representa 'senha'
    /// - Vai chamar a função validar
    /// - Retorna True se for armazenado
    /// - Retorna False se não for armazenado
    bool setValor(string);
    ///retorna o valor que está armazenado  valor da Senha
    string getValor();
};
inline string Senha::getValor(){
    return valor;
}


///Domínio: Quantidade / Luiz Carlos - 241004560
/// @brief Dominio quantidade, cria um limite min/max para quantidades
/// O valor pode variar de 1 a 1.000.000
class Quantidade {
private:
    /// @param Constante de controle do limite maximo.
    static const int LIMITE_MAX = 1000000;
    /// @param Constante de controle do limite minimo.
    static const int LIMITE_MIN = 1;
    /// @param Um valor que representa a quantidade.
    int valor;
    /// @param Um valor que representa a quantidade a ser validada.
    /// @brief Compara o valor recebido com as constantes de controle.
    /// @return True caso o valor seja validado, False caso o contrario.
    /// @throw Invalid_argument
    /// Lança exceção quando o valor está acima ou abaixo do limite
    bool validar(int);
public:
    /// @param Um valor, que representa a quatidade a ser armazenada.
    /// @brief Chama a função validar, caso validado, armazena o valor.
    /// @return True se o valor for armazenado, False caso o contrario.
    bool setValor(int);
    /// @return Retorna o valor armazenado.
    int getValor();

};

inline int Quantidade::getValor(){
    return valor;

};


/// Domínio: Dinheiro / Luiz Carlos - 241004560
/// @brief Dominio Dinheiro, cria um limite minimo e maximo para dinheiro.
/// O valor pode variar de 0,01 até 1.000.000,00
class Dinheiro {
private:
    /// @param Constante de controle, limita o maximo de dinheiro.
    const static float LIMITE_MAX;
    /// @param Constante de controle, limita o minimo de dinheiro.
    const static float LIMITE_MIN;
    /// @param Valor a ser armazenado, representa o Dinheiro.
    float valor;
    /// @param Um valor representando o dinheiro a ser validado.
    /// @brief Compara o valor recebido de setValor com as constantes de controle.
    /// @return True se o valor for validado, Lança exceção caso contrario.
    /// @throw Invalid_argument
    /// Lança exceção quando o valor está acima ou abaixo do limite
    bool validar(float);
public:
    /// @param Um inteiro representando o dinheiro a ser armazenado.
    /// @brief Recebe um inteiro, chama o método validar, e em seguida armazena o valor validado.
    /// @return True se o valor for armazenado, False caso o contrario.
    bool setValor(float);
    /// @return Retorna o valor armazenado.
    float getValor();

};
inline const float Dinheiro::LIMITE_MAX = 1000000.00;
inline const float Dinheiro::LIMITE_MIN = 1.00;
inline float Dinheiro::getValor(){
    return valor;

};

/// Domínio: Data / Luiz Carlos - 241004560
/// @brief Dominio Data, cria um formato padrão pra data. Recebe 3 inteiros e formata eles no padrão seguido.
/// Os 3 inteiros representam o ANO, o MES, e o DIA. O formato padrão usado é de AAAA/MM/DD.
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
    ///@brief Valor que representa a Data, ja formatada.
    string data;
    ///@param Ano, Mes , Dia
    ///@brief Método de Validação dos valores para a data, chamado pelo método setData.
    ///@return True se a data for validada, Lança exceção caso contrario
    ///@throw Invalid_argument
    /// Lança exceção se o Ano for maior que o ano atual ou menor que 1.
    /// Lança exceção se o Mes for maior que 12 ou menor que 1.
    /// Lança exceção se o dia for maior que 31 ou menor que 1.
    bool validarData(int, int, int);

public:
    ///@param Ano, Mes, Dia
    ///@brief Método que formata e armazena a data, chama o método validarData para garantir que segue o padrão desejado.
    /// @return True se o valor for armazenado, False caso o contrario.
    bool setData(int, int, int);
    ///@return Retorna a data armazenada.
    string getData();
};

inline string Data::getData(){
    return data;
    }

/// Dominio: Nome / Luiz Carlos - 241004560
/// @brief Dominio Nome , cria um padrão pra nome.
/// No padrão usado o limite maximo de caracteres é 20, o minimo é 1.
/// Cada caractere pode ser digitos(0~9), letras(A~Za~z) ou espaço em branco, não pode repetir espaço em branco.
class Nome {
private:
    /// @param representa o nome, usado para receber e armazenar a string.
    string nome;
    /// @param LIMITE_CHAR_MAX variavel de controle, usada para validação.
    static const int LIMITE_CHAR_MAX = 20;
    /// @param LIMITE_CHAR_MIN variavel de controle, usada para validação.
    static const int LIMITE_CHAR_MIN = 1;
    /// @brief Método que valida o Nome
    /// @param string que carrega o nome que será validado.
    /// Recebe uma string do método setNome, valida seu tamanho e verifica se contem caracteres indesejados.
    /// @return True se a string passar pela verificação, False caso o contrario.
    bool validarNome(string);
public:
    /// @brief Método que armazena o Nome.
    /// @param string que carrega o nome que será armazenado.
    /// Recebe uma string e faz uma chamada ao método validarNome, caso o retorno seja True, armazena o nome na variavel nome.
    /// @return True se o nome for armazenado, Lança exceção caso contrario
    /// @throw Invalid_argument
    /// Lança exceção se o numero de caracteres for acima ou abaixo do limite.
    /// Lança exceção se possuir caracteres que não sejam permitidos ou espaços duplos.
    bool setNome(string);
    /// @return retorna o nome armazenado.
    string getNome();
};

inline string Nome::getNome(){
    return nome;
}
///Dominio: CPF / Luiz Carlos - 241004560
/// @brief Dominio CPF, cria um padrão para CPF
/// No padrão usado o limite de digitos do cpf é 11, apenas digitos, não aceita letras.
/// O cpf recebido deve ser um inteiro sem adição de '.' ou '-'.
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
    /// @return True se o cpf passar pelas validações, Lança exceção caso contrario.
    /// Lança exceção se o numero de digitos não for 11.
    /// Lança exceção se tiver um caractere não permitido.
    /// Lança exceção se o CPF ja for cadastrado.
    bool validarCPF(string);
    /// @brief Lista de CPFs ja cadastrados, usada para validação.
    static set<string> cpfsCadastrados;
public:
    /// @brief Método de armazenar o CPF.
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
