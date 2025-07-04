#include "../includes/controladorasservico.hpp"

bool CntrISA::autenticar(CPF& cpf, Senha& senha){
    ContainerConta *container;
    container = ContainerConta::getInstancia();

    Conta contaTemp;
    contaTemp.setCPF(cpf);

    Conta* contaEncontrada = nullptr;
    if (container->pesquisar(&contaTemp, &contaEncontrada)) {
        return contaEncontrada->getSenha().getValor() == senha.getValor();
    }
    return false;
}

bool CntrISC::criar(Conta conta){
    ContainerConta *container;
    container = ContainerConta::getInstancia();

    return container->incluir(conta);
}

bool CntrISC::editar(Conta conta){
    ContainerConta *container;
    container = ContainerConta::getInstancia();

    return container->atualizar(conta);
}

bool CntrISC::ler(Conta* conta){
    ContainerConta *container;
    container = ContainerConta::getInstancia();

    return container->pesquisar(conta);
}

bool CntrISC::excluir(CPF cpf){
    ContainerConta *container;
    container = ContainerConta::getInstancia();

    return container->remover(cpf);
}
