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

/// Métodos teste Nome / Luiz Carlos - 241004560
void TUNome::setUp(){
    nome = new Nome();
    estado = SUCESSO;
}
void TUNome::tearDown(){
    delete nome;
}

void TUNome::testarCenarioValorValido(){
    try{
        nome->setNome(VALOR_VALIDO);
        if(nome->getNome()!= VALOR_VALIDO)
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

void TUNome::testarCenarioValorInvalido(){
    try{
        nome->setNome(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument){
        if(nome->getNome() == VALOR_INVALIDO)
            estado = FALHA;
    }
    catch(...){
        cout << "Erro: Exceção inesperada!" << endl;
        estado = FALHA;
    }
}

int TUNome::run(){
    setUp();
    testarCenarioValorValido();
    testarCenarioValorInvalido();
    tearDown();
    return estado;
}

/// Métodos teste CPF / Luiz Carlos - 241004560
void TUCpf::setUp(){
    cpf = new CPF();
    estado = SUCESSO;
}
void TUCpf::tearDown(){
    delete cpf;
}

void TUCpf::testarCenarioValorValido(){
    try{
        cpf->setCPF(VALOR_VALIDO);
        string cpftemp;
        string num3;
        string num6;
        string num9;
        string num11;
        num3 = VALOR_VALIDO.substr(0, 3);
        num6 = VALOR_VALIDO.substr(3, 3);
        num9 = VALOR_VALIDO.substr(6, 3);
        num11 = VALOR_VALIDO.substr(9);
        cpftemp = num3 + '.' + num6 + '.' + num9 + '-' + num11;
        if(cpf->getCPF()!= cpftemp)
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

void TUCpf::testarCenarioValorInvalido(){
    try{
        cpf->setCPF(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument){
        string cpftemp;
        string num3;
        string num6;
        string num9;
        string num11;
        if(VALOR_INVALIDO.size() == 11){
            num3 = VALOR_INVALIDO.substr(0, 3);
            num6 = VALOR_INVALIDO.substr(3, 3);
            num9 = VALOR_INVALIDO.substr(6, 3);
            num11 = VALOR_INVALIDO.substr(9);
            cpftemp = num3 + '.' + num6 + '.' + num9 + '-' + num11;
            if(cpf->getCPF() == cpftemp)
                estado = FALHA;}
        else{
            if(cpf->getCPF() == VALOR_INVALIDO)
                estado = FALHA;
        }
    }
    catch(...){
        cout << "Erro: Exceção inesperada!" << endl;
        estado = FALHA;
    }
}

int TUCpf::run(){
    setUp();
    testarCenarioValorValido();
    testarCenarioValorInvalido();
    tearDown();
    return estado;
}

/// Métodos teste Ordem / Luiz Carlos - 241004560

void TUOrdem::setUP(){
    ordem = new Ordem();
    estado = SUCESSO;
}

void TUOrdem::tearDown(){
    delete ordem;
}

void TUOrdem::testarCenario(){
    Codigo c;
    c.setValor(VALOR_VALIDO_C);
    ordem->setCodigo(c);
    if(ordem->getCodigo().getValor() != VALOR_VALIDO_C)
        estado = FALHA;
    CodigoNegociacao cn;
    cn.setValor(VALOR_VALIDO_CN);
    ordem->setCodigoNegociacao(cn);
    if(ordem->getCodigoNeociacao().getValor() != VALOR_VALIDO_CN)
        estado = FALHA;
    Data d;
    d.setData(VALOR_VALIDO_ANO, VALOR_VALIDO_MES, VALOR_VALIDO_DIA);
    ordem->setData(d);
    ostringstream datatemp;
    datatemp << VALOR_VALIDO_ANO << "/"<< setw(2) << setfill('0') << VALOR_VALIDO_MES << "/" << setw(2) << setfill('0') << VALOR_VALIDO_DIA;
    if (ordem->getData().getData() != datatemp.str())
        estado = FALHA;
    Dinheiro p;
    p.setValor(VALOR_VALIDO_P);
    ordem->setPreco(p);
    if(ordem->getPreco().getValor() != VALOR_VALIDO_P)
        estado = FALHA;
    Quantidade qt;
    qt.setValor(VALOR_VALIDO_Qt);
    ordem->setQuantidade(qt);
    if(ordem->getQuantidade().getValor() != VALOR_VALIDO_Qt)
        estado = FALHA;
}

int TUOrdem::run(){
    setUP();
    testarCenario();
    tearDown();
    return estado;
}
