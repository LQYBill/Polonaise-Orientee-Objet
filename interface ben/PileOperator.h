#ifndef PILEOPERATOR_H
#define PILEOPERATOR_H

#include "Pileconstantes.h"

/*Ensemble des op�rations de manipulations de la pile de constantes. Extraction des constants, d�clenchement des calcul et insertion des r�sultats*/

class PileOperator{
    PileConstantes* PilePointer;
public:

    PileOperator(PileConstantes* ptr =0 ):PilePointer(ptr){}
    void Operate(std::string op); //Arriv�e des commandes
    void BinaryTypeCheck(std::string str);
    void UnaryTypeCheck(std::string str);
    template<class T>std::string UnaryOp(T value,std::string str);
    template<class T>std::string BinaryOp(T v1,T v2, std::string op);
    std::string SpecialOp(std::string op);
};

#endif // PILEOPERATOR_H
