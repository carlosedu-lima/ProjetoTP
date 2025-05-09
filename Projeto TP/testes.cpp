#include "testes.hpp"
#include <sstream>
#include <iomanip>

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
    catch(invalid_argument){
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

/// Métodos teste Data / Luiz Carlos - 241004560
void TUData::setUp(){
    data = new Data();
    estado = SUCESSO;
}
void TUData::tearDown(){
    delete data;
}

void TUData::testarCenarioValorValido(){
    try{
        data->setData(VALOR_VALIDO_ANO, VALOR_VALIDO_MES, VALOR_VALIDO_DIA);
        ostringstream oss;
        oss << VALOR_VALIDO_ANO << "/"<< setw(2) << setfill('0') << VALOR_VALIDO_MES << "/" << setw(2) << setfill('0') << VALOR_VALIDO_DIA;
        if(data->getData()!= oss.str())
            estado = FALHA;
    }
    catch(invalid_argument){
        estado = FALHA;
    }
    catch(...){
        cout << "Erro: Exceção inesperada!" << endl;
        estado = FALHA;
    }
}

void TUData::testarCenarioValorInvalido(){
    try{
        data->setData(VALOR_INVALIDO_ANO, VALOR_INVALIDO_MES, VALOR_INVALIDO_DIA);
        estado = FALHA;
    }
    catch(invalid_argument){
        ostringstream oss;
        oss << VALOR_INVALIDO_ANO << "/"<< setw(2) << setfill('0') << VALOR_INVALIDO_MES << "/" << setw(2) << setfill('0') << VALOR_INVALIDO_DIA;
        if(data->getData()== oss.str())
            estado = FALHA;
    }
    catch(...){
        cout << "Erro: Exceção inesperada!" << endl;
        estado = FALHA;
    }
}

int TUData::run(){
    setUp();
    testarCenarioValorValido();
    testarCenarioValorInvalido();
    tearDown();
    return estado;
}
