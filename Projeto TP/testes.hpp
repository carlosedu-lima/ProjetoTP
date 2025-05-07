#ifndef TESTES_HPP_INCLUDED
#define TESTES_HPP_INCLUDED
#include <stdexcept>
#include "dominios.hpp"
using namespace std;
// TESTE Dominio: Dinheiro // Luiz Carlos - 241004560
// ainda não funciona
class TUDinheiro {
private:
    const static int VALOR_VALIDO = 100;
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


#endif // TESTES_HPP_INCLUDED
