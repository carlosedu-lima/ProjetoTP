//
//  main.cpp
//  Projeto TP
//
//  Created by Carlos Eduardo Figueredo Lima on 26/04/25.
//

#include <iostream>
#include <string>
#include <cctype>
#include "dominios.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    // IMPLEMENTACAO
   /* Codigo c;
    c.setValor(5);
    cout<<c.getValor()<<endl;
    cout<<c.setValor(10103)<<endl;*/
    string nome= "1Carlos";
//    int num = 1;
//    char a ='s';
//    if(isdigit(nome[0])){
//        cout<<"E um decimal de 0 - 9"<<endl;
//    }else{
//        cout<<"Nao e"<<endl;
////    }
////
//    string senha = "carlos !";
//    int cont = 0;
//    cout<<size(senha)<<endl;
//    while (cont<=size(senha)){
//        if(isspace(nome[cont])){
//            cout<<"tem especo"<<endl;
//        }else{
//            cout<<"na0 tem espaco"<<endl;
//        }
//        cont=cont+1;
//    }
    CodigoNegociacao c;
    c.setValor("Kdu12");
    cout<<c.getValor()<<endl;
    Perfil p;
    p.setValor("Conservador");
    cout<<p.getValor()<<endl;
    return 0;
}
