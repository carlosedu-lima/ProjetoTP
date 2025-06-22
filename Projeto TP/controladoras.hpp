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


#endif // CONTROLADORAS_HPP_INCLUDED
