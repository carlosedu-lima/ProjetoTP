#ifndef CONTROLADORASSERVICO_HPP_INCLUDED
#define CONTROLADORASSERVICO_HPP_INCLUDED
#include "../includes/interfaces.hpp"
#include "../includes/dominios.hpp"
#include "../includes/entidades.hpp"

class CntrISA:public ISA{
public:
    bool autenticar(CPF&, Senha&)override;

};

class CntrISC:public ISC{
public:
    bool criar(Conta)override;
    bool ler(Conta&)override;
    bool editar(Conta)override;
    bool excluir(CPF)override;

};


#endif // CONTROLADORASSERVICO_HPP_INCLUDED
