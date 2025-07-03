#include "../includes/build.hpp"

CntrInicializacao* BuilderSistema::construir(){
    cntrInic = new CntrInicializacao();
    cntrIAA = new CntrIAA();
    cntrIAC = new CntrIAC();
    //cntrIAI = new CntrIAI();

    cntrISA = new CntrISA();
    cntrISC = new CntrISC();
    //cntrISI = new CntrISI();


    cntrInic->setCntrIAA(cntrIAA);
    cntrInic->setCntrIAC(cntrIAC);
    // controle->setCntrIAI(cntrIAI);
    cntrIAA->setCntrISA(cntrISA);
    cntrIAC->setCntrISC(cntrISC);
    //cntrIAI->setCntrISI(cntrISI);

    return cntrInic;
}

BuilderSistema::~BuilderSistema(){
    // delete controle;
    delete cntrIAA;
    delete cntrIAC;
    // delete cntrIAI;
    delete cntrISA;
    delete cntrISC;
    //delete cntrISI;
}
