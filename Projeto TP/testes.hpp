#ifndef TESTES_HPP_INCLUDED
#define TESTES_HPP_INCLUDED
#include <stdexcept>
#include "dominios.hpp"
using namespace std;

// TESTE Dominio: Dinheiro // Luiz Carlos - 241004560
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
// TESTE Dominio: Quantidade // Luiz Carlos - 241004560
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


#endif // TESTES_HPP_INCLUDED
