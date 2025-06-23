#ifndef CONTROLADORAS_HPP_INCLUDED
#define CONTROLADORAS_HPP_INCLUDED
#include "interfaces.hpp"

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
