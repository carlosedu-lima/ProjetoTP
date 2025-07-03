#ifndef BUILD_HPP_INCLUDED
#define BUILD_HPP_INCLUDED
#include "../includes/interfaces.hpp"
#include "../includes/controladoras.hpp"
#include "../includes/controladorasservico.hpp"

class BuilderSistema{
private:
    CntrInicializacao *cntrInic;
    CntrIAA *cntrIAA;
    CntrIAC *cntrIAC;
    // CntrIAI *cntrIAI;
    CntrISA *cntrISA;
    CntrISC *cntrISC;
    // CntrISI *cntrISI;
public:
    CntrInicializacao* construir();
    ~BuilderSistema();
};

#endif // BUILD_HPP_INCLUDED
