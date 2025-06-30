#ifndef CONTAINERS_HPP_INCLUDED
#define CONTAINERS_HPP_INCLUDED

#include "../includes/dominios.hpp"
#include "../includes/entidades.hpp"

#include <map>

using namespace std;



class ContainerConta{
    private:
        map<string, Conta> container;
        static ContainerConta *instancia;
        ContainerConta(){};                           // Construtor.
    public:
        static  ContainerConta* getInstancia();       // Método para instanciar classe.
        bool incluir(Conta);
        bool remover(CPF);
        bool pesquisar(Conta*);
        bool atualizar(Conta);
};

#endif // CONTAINERS_HPP_INCLUDED
