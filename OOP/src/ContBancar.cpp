#include "ContBancar.h"

ContBancar::ContBancar(std::string nume, int sold, int const_var)
:m_nume(nume), 
m_sold(sold), 
m_iban("B33BUKB20201555555555"), 
constVar(const_var),
isAvailable(false) //in loc de liniile 1-4 (se numesc member initializers, pe masura ce alocam memorie, introducem valoarea default)
{
    //pt tema cu crearea ibanu-ului:invocam metoda gen_iban
    //m_nume=nume; -1
    //m_sold=sold; -2
    //m_iban="B33BUKB20201555555555";-3
    //constVar=const_var; -4
    std::cout<<"Un cont a fost creat\n"<<std::endl;
}

ContBancar::ContBancar()
:m_nume("Necunoscut"), 
m_sold(0), 
m_iban("B33BUKB20201555555555"), 
constVar(5)
{
    //m_nume="Necunoscut";
    //m_sold=0;
    //m_iban="B33BUKB20201555555555";
    std::cout<<"Un cont a fost creat\n"<<std::endl;
}

ContBancar::~ContBancar()
{
    std::cout<<"Un cont a fost sters\n"<<std::endl;
}

//tema:implementati un check in care "nume" sa fie doar caractere latine
void ContBancar::setNume(std::string nume)
{
    bool latine = false;
for (int i=0; i<m_nume.size(); i++)
        {
            if(int(m_nume[i]) >= 65 && int(m_nume[i]) <= 90 )
            {
                latine=true;
            }
                else if (int(m_nume[i]) >= 97 && int(m_nume[i]) <= 122)
                {
                    latine=true;
                }
                    else 
                    {
                        latine = false;
                    }
        }
        std::cout <<"Au fost introduse caractere " <<std::endl;
        std::cout<< "latine\n";
        std::cout << "invalide\n";
        //m_nume=nume;//"m_nume" e atributul din cont bancar iar "nume" este parametrul
}

void ContBancar::set_sold(int sold)
{
    if(sold<0)
    {
        std::cout<<"ERROR soldul initial trebuie sa fie mai mare de 0\n";
    }
    else
    {
        m_sold=sold;
        isAvailable=true;
    }
}

void ContBancar::printInfo()
{
    std::cout << "Numele contului este: " << m_nume << std::endl;
    std::cout << "Soldul contului este: " << m_sold << std::endl;
    std::cout << "Ibanul contului este: " << m_iban << std::endl;
}


std::string ContBancar::set_iban()
{
    int random;
    std::vector numbers={'0','1','2','3','4','5','6','7','8','9'};
    std::string const first_letters="ROITSCHOOL";
    std::string second_letters="";
    for(int i=0; i<15; i++)
    {
        random=rand()%10;//functia predefinita random care genereaza un numar, apoi am folosit algoritumul pt obtinerea ultimei cifre.
        second_letters=second_letters+numbers[random];
    }
 return first_letters+second_letters;//concatenare

}