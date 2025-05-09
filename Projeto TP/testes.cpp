#include "testes.hpp"

/// Métodos teste Dinheiro / Luiz Carlos - 241004560
void TUDinheiro::setUp(){
    dinheiro = new Dinheiro();
    estado = SUCESSO;
}
void TUDinheiro::tearDown(){
    delete dinheiro;
}

void TUDinheiro::testarCenarioValorValido(){
    try{
        dinheiro->setValor(VALOR_VALIDO);
        if(dinheiro->getValor()!= VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument e){
        estado = FALHA;
    }
    catch(...){
        cout << "Erro: Exceção inesperada!" << endl;
        estado = FALHA;
    }
}

void TUDinheiro::testarCenarioValorInvalido(){
    try{
        dinheiro->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument){
        if(dinheiro->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
    catch(...){
        cout << "Erro: Exceção inesperada!" << endl;
        estado = FALHA;
    }
}

int TUDinheiro::run(){
    setUp();
    testarCenarioValorValido();
    testarCenarioValorInvalido();
    tearDown();
    return estado;
}

/// Métodos teste Quantidade / Luiz Carlos - 241004560
void TUQuantidade::setUp(){
    quantidade = new Quantidade();
    estado = SUCESSO;
}
void TUQuantidade::tearDown(){
    delete quantidade;
}

void TUQuantidade::testarCenarioValorValido(){
    try{
        quantidade->setValor(VALOR_VALIDO);
        if(quantidade->getValor()!= VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument e){
        estado = FALHA;
    }
    catch(...){
        cout << "Erro: Exceção inesperada!" << endl;
        estado = FALHA;
    }
}

void TUQuantidade::testarCenarioValorInvalido(){
    try{
        quantidade->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument){
        if(quantidade->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
    catch(...){
        cout << "Erro: Exceção inesperada!" << endl;
        estado = FALHA;
    }
}

int TUQuantidade::run(){
    setUp();
    testarCenarioValorValido();
    testarCenarioValorInvalido();
    tearDown();
    return estado;
}
