#ifndef TESTES_HPP_INCLUDED
#define TESTES_HPP_INCLUDED
#include <stdexcept>
#include "dominios.hpp"
#include "entidades.hpp"

using namespace std;
/// TESTE Dominio: Dinheiro // Luiz Carlos - 241004560
/// @brief Classe de teste unitario do Dominio Dinheiro
/// Contem valor validos e invalidos para o dominio dinheiro
/// O teste é bem sucedido se o Valor valido for validado e armazenado, e se o valor invalido lançar exceção e não for armazenado
class TUDinheiro {
private:
    /// @brief Valor valido para dinheiro, queremos que esse valor seja aceito
    const static float VALOR_VALIDO;
    /// @brief Valor invalido para quantidade, queremos que esse valor seja negado
    const static float VALOR_INVALIDO;
    /// @brief Inicialização da variavel que representa o dinheiro
    Dinheiro *dinheiro;
    /// @brief Inicialização da variavel de teste
    int estado;
    /// @brief Método que constroi o dominio
    void setUp();
    /// @brief Método que destroi o dominio
    void tearDown();
    /// @brief Método que testa se o VALOR_VALIDO foi aceito
    /// @return SUCESSO se o valor for validado e armazenado, FALHA ao contrario
    void testarCenarioValorValido();
    /// @brief Método que testa se o VALOR_INVALIDO foi aceito
    /// @return SUCESSO se lançar exceção e não armazenar o valor, FALHA ao contrario
    void testarCenarioValorInvalido();
public:
    /// @brief Constante de controle do teste
    const static int SUCESSO = 0;
    /// @brief Constante de controle do teste
    const static int FALHA = -1;
    /// @brief Método que roda o teste, chama os outros métodos, setUp,testarCenario e tearDown em ordem
    /// @return Retorna o estado
    int run();

};
const float TUDinheiro::VALOR_VALIDO = 1000.5;
const float TUDinheiro::VALOR_INVALIDO = -1;
/// TESTE Dominio: Quantidade // Luiz Carlos - 241004560
/// @brief Classe de teste unitario do Dominio Quantidade
/// Contem valor validos e invalidos para o dominio quantidade
/// O teste é bem sucedido se o Valor valido for validado e armazenado, e se o valor invalido lançar exceção e não for armazenado
class TUQuantidade {
private:
    /// @brief Valor valido para quantidade, queremos que esse valor seja aceito
    const static int VALOR_VALIDO = 1000;
    /// @brief Valor invalido para quantidade, queremos que esse valor seja negado
    const static int VALOR_INVALIDO = -1;
    /// @brief Inicialização da variavel que representa a quantidade
    Quantidade *quantidade;
    /// @brief Inicialização da variavel de teste
    int estado;
    /// @brief Método que constroi o dominio
    void setUp();
    /// @brief Método que destroi o dominio
    void tearDown();
    /// @brief Método que testa se o VALOR_VALIDO foi aceito
    /// @return SUCESSO se o valor for validado e armazenado, FALHA ao contrario
    void testarCenarioValorValido();
    /// @brief Método que testa se o VALOR_INVALIDO foi aceito
    /// @return SUCESSO se lançar exceção e não armazenar o valor, FALHA ao contrario
    void testarCenarioValorInvalido();
public:
    /// @brief Constante de controle do teste
    const static int SUCESSO = 0;
    /// @brief Constante de controle do teste
    const static int FALHA = -1;
    /// @brief Método que roda o teste, chama os outros métodos, setUp,testarCenario e tearDown em ordem
    /// @return Retorna o estado
    int run();

};

/// TESTE Dominio: Data // Luiz Carlos - 241004560
/// @brief Classe de teste unitario do Dominio Data
/// Contem valor validos e invalidos para o dominio data
/// O teste é bem sucedido se o Valor valido for validado e armazenado, e se o valor invalido lançar exceção e não for armazenado
class TUData{
    private:
    /// @brief Valor valido para ANO, queremos que esse valor seja aceito
    const static int VALOR_VALIDO_ANO = 1998;
    /// @brief Valor invalido para ANO, queremos que esse valor seja negado
    const static int VALOR_INVALIDO_ANO = -1 ;
    /// @brief Valor valido para MES, queremos que esse valor seja aceito
    const static int VALOR_VALIDO_MES = 3 ;
    /// @brief Valor invalido para MES, queremos que esse valor seja negado
    const static int VALOR_INVALIDO_MES = 13;
    /// @brief Valor valido para DIA, queremos que esse valor seja aceito
    const static int VALOR_VALIDO_DIA = 9 ;
    /// @brief Valor invalido para DIA, queremos que esse valor seja negado
    const static int VALOR_INVALIDO_DIA = 32;
    /// @brief Inicialização da variavel que representa a data
    Data *data;
    /// @brief Inicialização da variavel de teste
    int estado;
    /// @brief Método que constroi o dominio
    void setUp();
    /// @brief Método que destroi o dominio
    void tearDown();
    /// @brief Método que testa se o VALOR_VALIDO foi aceito
    /// @return SUCESSO se o valor for validado e armazenado, FALHA ao contrario
    void testarCenarioValorValido();
    /// @brief Método que testa se o VALOR_INVALIDO foi aceito
    /// @return SUCESSO se lançar exceção e não armazenar o valor, FALHA ao contrario
    void testarCenarioValorInvalido();
public:
    /// @brief Constante de controle do teste
    const static int SUCESSO = 0;
    /// @brief Constante de controle do teste
    const static int FALHA = -1;
    /// @brief Método que roda o teste, chama os outros métodos, setUp,testarCenario e tearDown em ordem
    /// @return Retorna o estado
    int run();
};

/// TESTE Dominio: Nome // Luiz Carlos - 241004560
/// @brief Classe de teste unitario do Dominio Nome
/// Contem valor validos e invalidos para o dominio nome
/// O teste é bem sucedido se o Valor valido for validado e armazenado, e se o valor invalido lançar exceção e não for armazenado
class TUNome{
    private:
    /// @brief Valor valido para nome, queremos que esse valor seja aceito
    const static string VALOR_VALIDO;
    /// @brief Valor invalido para nome, queremos que esse valor seja negado
    const static string VALOR_INVALIDO;
    /// @brief Inicialização da variavel que representa o nome
    Nome *nome;
    /// @brief Inicialização da variavel de teste
    int estado;
    /// @brief Método que constroi o dominio
    void setUp();
    /// @brief Método que destroi o dominio
    void tearDown();
    /// @brief Método que testa se o VALOR_VALIDO foi aceito
    /// @return SUCESSO se o valor for validado e armazenado, FALHA ao contrario
    void testarCenarioValorValido();
    /// @brief Método que testa se o VALOR_INVALIDO foi aceito
    /// @return SUCESSO se lançar exceção e não armazenar o valor, FALHA ao contrario
    void testarCenarioValorInvalido();
public:
    /// @brief Constante de controle do teste
    const static int SUCESSO = 0;
    /// @brief Constante de controle do teste
    const static int FALHA = -1;
    /// @brief Método que roda o teste, chama os outros métodos, setUp,testarCenario e tearDown em ordem
    /// @return Retorna o estado
    int run();
};
const string TUNome::VALOR_VALIDO = "Nome Sobrenome9";
const string TUNome::VALOR_INVALIDO = "Nome  Sob";

/// TESTE Dominio: CPF // Luiz Carlos - 241004560
/// @brief Classe de teste unitario do Dominio CPF
/// Contem valor validos e invalidos para o dominio cpf
/// O teste é bem sucedido se o Valor valido for validado e armazenado, e se o valor invalido lançar exceção e não for armazenado
class TUCpf{
    private:
    /// @brief Valor valido para cpf, queremos que esse valor seja aceito
    const static string VALOR_VALIDO;
    /// @brief Valor invalido para cpf, queremos que esse valor seja negado
    const static string VALOR_INVALIDO ;
    /// @brief Inicialização da variavel que representa o cpf
    CPF *cpf;
    /// @brief Inicialização da variavel de teste
    int estado;
    /// @brief Método que constroi o dominio
    void setUp();
    /// @brief Método que destroi o dominio
    void tearDown();
    /// @brief Método que testa se o VALOR_VALIDO foi aceito
    /// @return SUCESSO se o valor for validado e armazenado, FALHA ao contrario
    void testarCenarioValorValido();
    /// @brief Método que testa se o VALOR_INVALIDO foi aceito
    /// @return SUCESSO se lançar exceção e não armazenar o valor, FALHA ao contrario
    void testarCenarioValorInvalido();
public:
    /// @brief Constante de controle do teste
    const static int SUCESSO = 0;
    /// @brief Constante de controle do teste
    const static int FALHA = -1;
    /// @brief Método que roda o teste, chama os outros métodos, setUp,testarCenario e tearDown em ordem
    /// @return Retorna o estado
    int run();
};
const string TUCpf::VALOR_VALIDO = "12345678909";
const string TUCpf::VALOR_INVALIDO = "1234567890k";

/// TESTE Entidade: Ordem // Luiz Carlos - 241004560
/// @brief Classe de teste unitario da entidade Ordem
/// Contem valor válidos para cada um dos dominios dentro da entidade.
class TUOrdem {
private:
    /// @brief Constante de valor valido para o dominio Codigo
    const static int VALOR_VALIDO_C = 1000;
    /// @brief Constante de valor valido para o dominio Codigo de Negociacao
    const static string VALOR_VALIDO_CN;
    /// @brief Constante de valor valido para o dominio Data
    const static int VALOR_VALIDO_ANO = 1998;
    /// @brief Constante de valor valido para o dominio Data
    const static int VALOR_VALIDO_MES = 3 ;
    /// @brief Constante de valor valido para o dominio Data
    const static int VALOR_VALIDO_DIA = 9 ;
    /// @brief Constante de valor valido para o dominio Dinheiro, denominado P por ser chamado preco na entidade
    const static int VALOR_VALIDO_P = 1000;
    /// @brief Constante de valor valido para o dominio Quantidade
    constexpr static float VALOR_VALIDO_Qt = 1000;
    /// @brief Inicialização da variavel que representa a entidade.
    Ordem *ordem;
    /// @brief Inicialização da variavel de teste
    int estado;
    /// @brief Método que constroi a entidade
    void setUP();
    /// @brief Método que destroi a entidade
    void tearDown();
    /// @brief Método de teste da entidade
    /// Testa cada dominio individualmente com os valores validos, caso ao menos 1 esteja invalido, o teste resulta em FALHA.
    void testarCenario();

public:
    /// @brief Constante de controle do Teste
    const static int SUCESSO = 0;
    /// @brief Constante de controle do Teste
    const static int FALHA = -1;
    /// @brief Método que roda o teste, chama os outros métodos, setUp,testarCenario e tearDown em ordem
    /// @return Retorna o estado
    int run();
    };
const string TUOrdem::VALOR_VALIDO_CN = "tT0 9";

//TESTE Dominio: TUCodigo// Carlos Eduardo - 241004659
class TUCodigo{
private:
    const static int VALOR_VALIDO = 12345;
    const static int VALOR_INVALIDO = 1234567;
    Codigo *codigo;
    int estado;
    void setUp();
    void tearDown();
    void testarCenariosValido();
    void testarCenarioInvalido();
public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    
    int run();
};

//TESTE Dominio: TUCodigoNegociacao// Carlos Eduardo - 241004659
class TUCodigoNegociacao{
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    CodigoNegociacao *codigoNegociacao;
    int estado;
    void setUp();
    void tearDown();
    void testarCenariosValido();
    void testarCenarioInvalido();
public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
};

//TESTE Dominio: TUPerfil // Carlos Eduardo - 241004659
class TUPerfil{
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Perfil *perfil;
    int estado;
    void setUp();
    void tearDown();
    void testarCenariosValido();
    void testarCenarioInvalido();
public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    
    int run();
};
//TESTE Dominio: TUSenha// Carlos Eduardo - 241004659
class TUSenha{
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Senha *senha;
    int estado;
    void setUp();
    void tearDown();
    void testarCenariosValido();
    void testarCenarioInvalido();
public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    
    int run();
};

//TESTE Entidade: TUConta// Carlos Eduardo - 241004659
/*
class TUConta{
private:
    const static string VALOR_VALIDO_CPF;
    const static string VALOR_INVALIDO_CPF;
    const static string VALOR_VALIDO_NOME;
    const static string VALOR_INVALIDO_NOME;
    const static string VALOR_VALIDO_SENHA;
    const static string VALOR_INVALIDO_SENHA;
    CPF *cpf;
    Nome *nome;
    Senha *senha;
    int estado;
    void setUp();
    void tearDown();
    void testarCenariosValido();
    void testarCenarioInvalido();
public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
};

//TESTE Entidade: TUCarteira// Carlos Eduardo - 241004659

class TUCarteira{
private:
    const int VALOR_VALIDO_CODIGO = 12345678;
    const int VALOR_INVALIDO_CODIGO = 1232243;
    const static string VALOR_VALIDO_NOME;
    const static string VALOR_INVALIDO_NOME;
    const static string VALOR_VALIDO_PERFIL;
    const static string VALOR_INVALIDO_PERFIL;
    Codigo *codigo;
    Nome *nome;
    Perfil *perfil;
    int estado;
    void setUp();
    void tearDown();
    void testarCenariosValido();
    void testarCenarioInvalido();
public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
};
*/
//TESTE Entidade: TUConta// Carlos Eduardo - 241004659

class TUConta{
private:
    const static string VALOR_VALIDO_CPF;
    const static string VALOR_VALIDO_NOME;
    const static string VALOR_VALIDO_SENHA;
    Conta *conta;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarios();
public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
};

//TESTE Entidade: TUCarteira// Carlos Eduardo - 241004659

class TUCarteira{
private:
    const int VALOR_VALIDO_CODIGO = 12348;
    const static string VALOR_VALIDO_NOME;
    const static string VALOR_VALIDO_PERFIL;
    Carteira *carteira;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarios();
public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
};
#endif // TESTES_HPP_INCLUDED
