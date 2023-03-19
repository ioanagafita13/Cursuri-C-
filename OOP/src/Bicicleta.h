#ifndef BICICLETA_H
#define BICICLETA_H

#pragma once
#include<iostream>
#include<string>

class Bicicleta
{
public:
    Bicicleta();
    ~Bicicleta();
    void accelerare();
    void franare();
    void conducere_bicicleta();

    //setters
    void tip_cadru(const std::string& input);
    void set_dim_roti(const std::string& input);
    void set_nr_viteze(const std::string& input);


private:
    //std::string tip_cadru;
    std::string dim_roti;
    std::string nr_viteze;
    int viteza=0;

};

#endif