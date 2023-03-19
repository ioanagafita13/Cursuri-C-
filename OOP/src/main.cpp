#include <iostream>
#include "ContBancar.h"
#include "Car.h"

void print()
{
    std::cout<<"Hello from a function\n";
}



class myClass//am creat o clasa
{
public:
void printHello()// cream o metoda
{
    std::cout<<"Hello from my class!!\n";
}


};
struct test
{
    test()
    {
        std::cout<<"un test a fost nascut\n";
    }

    ~test()
    {
        std::cout<<"un test a fost distrus\n";
    }
    void printTest()
    {
        std::cout<<"Hello\n";
    }
};

enum zile
{
    Luni=1, //imp de scris 1, pt ca by default ar fi fost 0
    Marti,
    Miercuri,
    Joi,
    Vineri,
    Sambata,
    Duminica
};
ContBancar* CreateAccounts()//curs 18, memoria stack si heap
{
    std::cout<<"Introduceti numele utilizatorului de cont\n";
    std::string nume;
    std::cin>>nume;
    std::cout<<"introduceti valoarea soldului initial\n";
    int sold;
    std::cin>>sold;

    //pt a instanta obiete pe memoria heap se foloseste operatorul 'new'.
    ContBancar* cont=new ContBancar(nume, sold, 10); //sintaxa : tip pointer numeObiect=new Obiect



    return cont;
}



int main(int argc, char const *argv[])
{ 
    ContBancar* c1=CreateAccounts(); 
    std::cout<<c1->getNume()<<std::endl; // operatorul '->' pt dereferentiere si accesare a metodei
    delete c1; //operatorul delete cheama destructorul obiectului si sterge obiectul de pe heap






    zile azi; //obiectul "azi"
    zile maine;
    azi=Marti;
    maine=Duminica;

    test t;
    t.printTest();

    //ContBancar c1("Popistas", 50, 5);
    //c1.printInfo();
    //tema, ex.1, printam detaliile contului (nume si sold)
    //ContBancar c2;
    //c2.printInfo();
    //std::cout<<"iban-ul generat pt c2 este "<<c2.set_iban()<<std::endl;
    

    std::cout<< "Hello World!" << std::endl;
    myClass obiect; //instantiem un obiect de tip myClass
    obiect.printHello();//invocam metoda printHello (poate fi invocata doar printr-un obiect)
    print();//o fct poate fi invocata oricand
    myClass obj2;
    obj2.printHello();



    Car Jannet(100, "Gri", 2015, 5);
    Jannet.printCarInfo();
    Jannet.Drive(100);
    Jannet.printCarInfo();

    return 0;
}
