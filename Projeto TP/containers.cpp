#include "../includes/containers.hpp"

ContainerConta* ContainerConta::instancia = nullptr;

//------------------------------------------------------------------------------------
// Implementações de métodos de classe container.

ContainerConta* ContainerConta::getInstancia() {
    if (instancia == nullptr)
        instancia = new ContainerConta();
    return instancia;
}

bool ContainerConta::incluir(Conta conta){
    return container.insert(make_pair(conta.getCPF().getCPF(), conta)).second;
}

bool ContainerConta::remover(CPF cpf){
    map<string, Conta>::iterator it = container.find(cpf.getCPF());
    if(it != container.end()){
        container.erase(it);
        return true;
    }
    return false;
}

bool ContainerConta::pesquisar(Conta* conta){
    map<string, Conta>::iterator it = container.find(conta->getCPF().getCPF());
    if(it != container.end()){
        *conta = it->second;
        return true;
    }
    return false;
}

bool ContainerConta::atualizar(Conta conta){
    map<string, Conta>::iterator it = container.find(conta.getCPF().getCPF());
    if(it != container.end()){
        it->second = conta;
        return true;
    }
    return false;
}
