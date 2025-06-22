#ifndef STUBS_HPP_INCLUDED
#define STUBS_HPP_INCLUDED
#include "interfaces.hpp"

class StubISA:public ISA{
private:
    const static string TRIGGER_FALHA;
    const static string TRIGGER_ERRO_SISTEMA;
public:
    bool autenticar(CPF&,Senha&)override;
};

#endif // STUBS_HPP_INCLUDED
