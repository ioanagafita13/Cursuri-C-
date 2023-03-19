#include <iostream>
#include<string>



 
//functia printeaza nume
void printeaza_nume(std::string Nume)
{
std::cout<<"Buna, sunt "<<Nume<<std::endl;
}





//functia suma
int suma(int a, int b)
{
int rezultat=a+b;
//am chemat functia printeaza_nume in functia suma
printeaza_nume("Ioana");
return rezultat;
}




//functia main
int main() 
{
    std::cout<<"Cum te cheama?\n";
    std::string nume;
    std::getline(std::cin,nume);

    printeaza_nume("Maria");
//mai jos chemam functia suma:
std::cout<<suma(10,20)<<std::endl;


//char nume='S';
std::string Nume="Gafita";
//se poate face si constant:     const std::string Nume;
std::cout<<Nume<<std::endl;
std::string Prenume="Ioana";
std::string Nume_complet=Nume+' '+Prenume;
std::cout<<Nume_complet<<std::endl;
std::cout<<"Numarul de caractere in Nume este "<<Nume.size()<<std::endl;

bool isEmpty=Nume.empty();
std::cout<<Prenume[0]<<std::endl;
Prenume[0]='L';
std::cout<<Prenume<<std::endl;


std::string input_Nume_complet;
std::cout<<"introdu numele complet: "<<std::endl;
//std::cin>>input_nume_complet;
std::getline(std::cin,input_Nume_complet);
std::cout<<input_Nume_complet<<std::endl;










    return 0;
}