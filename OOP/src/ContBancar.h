#ifndef CONTBANCAR_H//sunt header guards pt a nu avea duplicate in program
#define CONTBANCAR_H

#pragma once//tot o directiva de preprocesare cu ac fct ca cele de sus
#include<iostream>//l-am adaugat noi pt a vedea in .cpp "std"
#include<string>
#include<vector>

class ContBancar
{
public://se num acces specifiers
    ContBancar(std::string nume, int sold, int val_const);//constructor -> se instanteaza un obiect in memorie(este o metoda)

    ContBancar();//constructor

    ~ContBancar();//destructor -> se sterge din mem obiectul

    void setNume(std::string nume);
    std::string getNume()
    {
        return m_nume;
    }
    void set_sold(int sold);
    int getSold()
    {
        return m_sold;
    }
    //tema:1.o metoda publica prin care printati detaliile contului (printInfo: "numele utilizatorului este...iar soldul este...")
    void printInfo();

    std::string set_iban();
    
    //3.creati o clasa cu nume bicicleta si atributele tip_cadru, dimensiune_roti, nr_viteze si metodele de accelerare si franare
private://se num acces specifiers
    std::string m_nume;
    int m_sold;
    std::string m_iban;
    const int constVar;
    bool isAvailable;
};

#endif