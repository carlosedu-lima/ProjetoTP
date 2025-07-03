#ifndef CONTROLADORAS_HPP_INCLUDED
#define CONTROLADORAS_HPP_INCLUDED
#include "../includes/interfaces.hpp"
#include "../includes/dominios.hpp"

class CntrInicializacao{
private:
    IAA *cntrIAA;
    IAC *cntrIAC;
    //IAI *cntrIAI;

public:
    void setCntrIAA(IAA*);
    void setCntrIAC(IAC*);
    //void setCntrIAI(IAI*);
};
void inline CntrInicializacao::setCntrIAA(IAA *cntrIAA){
    this->cntrIAA= cntrIAA;
}

void inline CntrInicializacao::setCntrIAC(IAC *cntrIAC){
    this->cntrIAC= cntrIAC;
}

/*void inline CntrInicializacao::setCntrIAI(IAI *cntrIAI){
    this->cntrIAI= cntrIAI;
}*/


class CntrIAA:public IAA{
private:
    ISA *cntrISA; // Referencia para camada servidor
public:
    bool autenticar(CPF&)override;
    void setCntrISA(ISA*);

};

void inline CntrIAA::setCntrISA(ISA *cntrISA){
    this->cntrISA = cntrISA;
}

class CntrIAC:public IAC{
private:
    ISC *cntrISC; // Referencia para camada servidor
public:
    bool criar()override;
    void executar(CPF)override;
    void setCntrISC(ISC*);
};
void inline CntrIAC::setCntrISC(ISC *cntrISC){
    this->cntrISC = cntrISC;
}

#endif // CONTROLADORAS_HPP_INCLUDED
