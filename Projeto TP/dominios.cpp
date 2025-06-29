#include <iostream>
#include <string>
#include <cctype>
#include "../includes/dominios.hpp"
#include <sstream> // string stream: biblioteca que permite manipular strings como se fossem entrada/saída.
#include <iomanip> // input/output manipulators: biblioteca que funciona em conjunto com a sstream para manipular strings.
#include <regex> // expressões regulares
#include <stdexcept>

using namespace std;
//Metodos Classe Dominio Codigo - Carlos Eduardo 241004659
bool Codigo::validar(int valor){
    if(valor>LIMITEMAX||valor<LIMITEMIN)
        throw invalid_argument("Valor Invalido!");
    return true;
}
bool Codigo::setValor(int valor){
    if(!validar(valor))
        return false;
    this->valor = valor;
    return true;
}
//Metodos Classe Dominio CodigoNegociacao - Carlos Eduardo 241004659
bool CodigoNegociacao::validar(string valor){
    int cont = 0;
    if(valor.size()<=LIMITE){
        while (cont<valor.size()) {
            if(isalpha(valor[cont])||valor[cont]==' '||isdigit(valor[cont])){
                cont++;
            }else{
                throw invalid_argument("Valor Invalido!");
                return false;
            }
        }
    }
    return true;
}
bool CodigoNegociacao::setValor(string valor){
    if(!validar(valor)){
        throw invalid_argument("Valor Invalido!");
        return false;
    }
    this->valor=valor;
    return true;
}
//Metodos Classe Dominio Perfil - Carlos Eduardo 241004659
bool Perfil::validar(string valor){
    if(valor=="Conservador"||valor=="Moderado"||valor=="Agressivo"){
        return true;
    }
    return false;
}
bool Perfil::setValor(string valor){
    if(!validar(valor)){
        throw invalid_argument("Valor Invalido!");
        return false;
    }
    this->valor=valor;
    return true;
}
//Metodos Classe Dominio Senha- Carlos Eduardo 241004659
bool Senha::validar(string valor) {
    if (valor.size() < 1 || valor.size() > LIMITE) {
        throw invalid_argument("Tamanho inválido.");
    }

    bool temMaiuscula = false;
    bool temMinuscula = false;
    bool temDigito = false;
    bool temEspecial = false;

    // Verifica caracteres permitidos e presença dos tipos exigidos
    for (int i = 0; i < valor.size(); i++) {
        char c = valor[i];

        if (isalpha(c) || isdigit(c) || c == '$' || c == '%' || c == '&' || c == '#' || c == ' ') {
            if (c >= 'A' && c <= 'Z') temMaiuscula = true;
            if (c >= 'a' && c <= 'z') temMinuscula = true;
            if (isdigit(c)) temDigito = true;
            if (c == '$' || c == '%' || c == '&' || c == '#') temEspecial = true;
        } else {
            throw invalid_argument("Caractere inválido!");
        }
    }

    if (!temMaiuscula || !temMinuscula || !temDigito || !temEspecial) {
        throw invalid_argument("Senha deve conter ao menos: 1 dígito, 1 maiúscula, 1 minúscula e 1 caractere especial (#, $, %, &).");
    }

    // Verifica repetição de caracteres
    for (int i = 0; i < valor.size(); i++) {
        for (int j = i + 1; j < valor.size(); j++) {
            if (valor[i] == valor[j]) {
                throw invalid_argument("Caracteres repetidos não são permitidos.");
            }
        }
    }

    return true;
}

bool Senha::setValor(string valor){
    if(!validar(valor)){
        return false;
    }
    this->valor=valor;
    return true;
}


// Métodos: Qauntidade / Luiz Carlos - 241004560
bool Quantidade::validar(int valor){
    if (valor > LIMITE_MAX)
        throw invalid_argument("Valor acima do Limite.");
    if (valor < LIMITE_MIN)
        throw invalid_argument("Valor abaixo do Limite.");
    return true;
}

bool Quantidade::setValor(int valor){
    if (validar(valor)){
            this->valor = valor;
            return true;}

    else
        return false;
}

// Métodos: Dinheiro / Luiz Carlos - 241004560

bool Dinheiro::validar(float valor){
    if (valor > LIMITE_MAX)
        throw invalid_argument("Valor acima do Limite.");
    if (valor < LIMITE_MIN)
        throw invalid_argument("Valor abaixo do Limite.");
    return true;
}

bool Dinheiro::setValor(float valor){
    if (validar(valor)){
        this->valor = valor;
        return true;}

    else
        return false;
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
    if (validarData(ano, mes, dia)){
        this->ano = ano;
        this->mes = mes;
        this->dia = dia;
        ostringstream oss; // classe 'ostringstream' da biblioteca sstream, objeto temporario 'oss' para formatar a string
        oss << ano << "/"<< setw(2) << setfill('0') << mes << "/" << setw(2) << setfill('0') << dia; // setw(): método da biblioteca <iomanip> uqe ajusta a largura. setfill(): método que ajusta o preenchimento. Funciona como uma f-string.
        this->data = oss.str(); // atribuição do objeto temporário 'oss' ja formatado e transformado em string ao objeto permanente 'string data'.
        return true;}
    else{
        return false;}
    }

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
    if (validarNome(nome)){
        this-> nome = nome;
        return true;}
    else{
        return false;}
}
// Métodos: CPF / Luiz Carlos - 241004560

bool CPF::validarCPF(string cpf){
    int cont = 0;
    if (cpf.size() == TAMANHO){
        while (cont<cpf.size()){
            if(!isdigit(cpf[cont])){
                throw invalid_argument("Caractere Invalido!");}
            else{
                cont++;
            }

        }
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
