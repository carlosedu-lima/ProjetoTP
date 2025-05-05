#include <iostream>
#include <string>
#include <cctype>
#include "dominios.hpp"
#include <sstream> // string stream: biblioteca que permite manipular strings como se fossem entrada/saída.
#include <iomanip> // input/output manipulators: biblioteca que funciona em conjunto com a sstream para manipular strings.
#include <regex> // expressões regulares

using namespace std;
//Metodos Classe Codigo
bool Codigo::validar(int valor){
    if(valor>LIMITEMAX||valor<LIMITEMIN)
        return false;
    return true;
}
bool Codigo::setValor(int valor){
    if(!validar(valor))
        return false;
    this->valor = valor;
    return true;
}
//Metodos Classe CodigoNegociacao
bool CodigoNegociacao::validar(string valor){
    int cont = 0;
    if(size(valor)<=LIMITE){
        while (cont<size(valor)) {
            if(isalpha(valor[cont])||valor[cont]==' '||isdigit(valor[cont])){
                cont++;
            }else{
                cout<<"**CODIGO INVALIDO***";
                return false;
            }
        }
    }
    return true;
}
bool CodigoNegociacao::setValor(string valor){
    if(!validar(valor)){
        return false;
    }
    this->valor=valor;
    return true;
}
//Metodos Classe Perfil

bool Perfil::validar(string valor){
    if(valor=="Conservador"||valor=="Moderado"||valor=="Agressivo"){
        return true;
    }
    return false;
}
bool Perfil::setValor(string valor){
    if(!validar(valor)){
        return false;
    }
    this->valor=valor;
    return true;
}

// Métodos: Qauntidade / Luiz Carlos - 241004560
bool Quantidade::validar(float valor){
    if (valor > LIMITE_MAX)
        throw invalid_argument("Valor acima do Limite.");
    if (valor < LIMITE_MIN)
        throw invalid_argument("Valor abaixo do Limite.");
    return true;
}

bool Quantidade::setValor(float valor){
    if (!validar(valor)){
        return false;}

    this->valor = valor;
    return true;
}

// Métodos: Dinheiro / Luiz Carlos - 241004560

bool Dinheiro::validar(int valor){
    if (valor > LIMITE_MAX)
        throw invalid_argument("Valor acima do Limite.");
    if (valor < LIMITE_MIN)
        throw invalid_argument("Valor abaixo do Limite.");
    return true;
}

bool Dinheiro::setValor(int valor){
    if (!validar(valor)){
        return false;}

    this->valor = valor;
    return true;
}

// Métodos: Data / Luiz Carlos - 241004560

bool Data::validarData(int ano, int mes, int dia) {
    if (ano > LIMITE_MAX_ANO || ano < LIMITE_MIN_ANO)
        throw invalid_argument("Data invalida.");
    if (mes > LIMITE_MAX_MES || ano < LIMITE_MIN_MES)
        throw invalid_argument("Data invalida.");
    if (dia > LIMITE_MAX_DIA || ano < LIMITE_MIN_DIA)
        throw invalid_argument("Data invalida.");
    return true;
}

bool Data::setData(int ano, int mes, int dia) {
    if (!validarData(ano, mes, dia))
        return false;
    this->ano = ano;
    this->mes = mes;
    this->dia = dia;
    ostringstream oss; // classe 'ostringstream' da biblioteca sstream, objeto temporario 'oss' para formatar a string
    oss << ano << "/"<< setw(2) << setfill('0') << mes << "/" << setw(2) << setfill('0') << dia; // setw(): método da biblioteca <iomanip> uqe ajusta a largura. setfill(): método que ajusta o preenchimento. Funciona como uma f-string.
    this->data = oss.str(); // atribuição do objeto temporário 'oss' ja formatado e transformado em string ao objeto permanente 'string data'.
    return true;}

// Métodos: Nome / Luiz Carlos - 241004560
bool Nome::validarNome(string nome){
    if (nome.length() > LIMITE_CHAR_MAX)
        throw invalid_argument("Caracteres acima do limite.");
    if (nome.length() < LIMITE_CHAR_MIN)
        throw invalid_argument("Caracteres abaixo do limite.");
// primeiro [] permite letras e numeros, segundo [?:] permite espaços "\\s" se eles tiverem no minimo 1 membro do grupo selecionado  logo depois.
// ^ começa a string, $ termina a string, []+ indica que deve ter alguem desse grupo depois do \\s, (?:...)* é o grupo de exclusão.
    regex padrao("^[A-Za-zÀ-ÖØ-öø-ÿ0-9]+(?:\\s[A-Za-zÀ-ÖØ-öø-ÿ0-9]+)*$");
    if (regex_match(nome,padrao))
        return true;
    throw invalid_argument("Nome invalido.");
}

bool Nome::setNome(string nome){
    if (!validarNome(nome))
        return false;
    this->nome = nome;
    return true;
}
// Métodos: CPF / Luiz Carlos - 241004560

bool CPF::validarCPF(string cpf){
    if (cpf.size() == TAMANHO){
        if (cpfsCadastrados.count(cpf)){
            throw invalid_argument("CPF ja Cadastrado!");}
            else
                return true;
    }
    else
        throw invalid_argument("CPF Invalido!");
}
set<string> CPF::cpfsCadastrados; // Inicialização do set declarado na classe CPF
bool CPF::setCPF(string cpf){
    string num3;
    string num6;
    string num9;
    string num11;
    if (validarCPF(cpf)){
        num3 = cpf.substr(0, 3);
        num6 = cpf.substr(3, 3);
        num9 = cpf.substr(6, 3);
        num11 = cpf.substr(9);
        this->cpf = num3 + '.' + num6 + '.' + num9 + '-' + num11;
        cpfsCadastrados.insert(cpf);
        return true;}
    return false;
    }
