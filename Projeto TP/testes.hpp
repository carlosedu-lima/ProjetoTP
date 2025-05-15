#ifndef TESTES_HPP_INCLUDED
#define TESTES_HPP_INCLUDED
#include <stdexcept>
#include "dominios.hpp"
using namespace std;
/// TESTE Dominio: Dinheiro // Luiz Carlos - 241004560
class TUDinheiro {
private:
    const static int VALOR_VALIDO = 1000;
    const static int VALOR_INVALIDO = -1;
    Dinheiro *dinheiro;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioValorValido();
    void testarCenarioValorInvalido();
public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();

};
/// TESTE Dominio: Quantidade // Luiz Carlos - 241004560
class TUQuantidade {
private:
    constexpr static float VALOR_VALIDO = 1000;
    constexpr static float VALOR_INVALIDO = -1;
    Quantidade *quantidade;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioValorValido();
    void testarCenarioValorInvalido();
public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();

};

/// TESTE Dominio: Data // Luiz Carlos - 241004560
class TUData{
    private:
    const static int VALOR_VALIDO_ANO = 1998;
    const static int VALOR_INVALIDO_ANO = -1 ;
    const static int VALOR_VALIDO_MES = 3 ;
    const static int VALOR_INVALIDO_MES = 13;
    const static int VALOR_VALIDO_DIA = 9 ;
    const static int VALOR_INVALIDO_DIA = 32;
    Data *data;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioValorValido();
    void testarCenarioValorInvalido();
public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
};

/// TESTE Dominio: Nome // Luiz Carlos - 241004560
class TUNome{
    private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Nome *nome;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioValorValido();
    void testarCenarioValorInvalido();
public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
};
const string TUNome::VALOR_VALIDO = "Nome Sobrenome9";
const string TUNome::VALOR_INVALIDO = "Nome  Sob";
/// TESTE Dominio: CPF // Luiz Carlos - 241004560
class TUCpf{
    private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO ;
    CPF *cpf;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioValorValido();
    void testarCenarioValorInvalido();
public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
};
const string TUCpf::VALOR_VALIDO = "12345678909";
const string TUCpf::VALOR_INVALIDO = "1234567890k";
/// TESTE Entidade: Ordem // Luiz Carlos - 241004560
class TUOrdem {
private:

    const static int VALOR_VALIDO_C = 1000;
    const static string VALOR_VALIDO_CN;
    const static int VALOR_VALIDO_ANO = 1998;
    const static int VALOR_VALIDO_MES = 3 ;
    const static int VALOR_VALIDO_DIA = 9 ;
    const static int VALOR_VALIDO_P = 1000;
    constexpr static float VALOR_VALIDO_Qt = 1000;
    Ordem *ordem;
    int estado;
    void setUP();
    void tearDown();
    void testarCenario();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
    };
const string TUOrdem::VALOR_VALIDO_CN = "tT0 9";
#endif // TESTES_HPP_INCLUDED
