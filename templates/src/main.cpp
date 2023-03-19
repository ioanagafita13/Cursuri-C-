#include <iostream>


void swap(int& a, int& b)
{
    int temp=a;
    a=b;
    b=temp;
}


void swap(char& a, char& b)
{
    char temp=a;
    a=b;
    b=temp;
}


template<typename T> //T= tipul nostru de date generic
//(o fct poate fi folosita cu mai multe tipuri de param: int, char, string si sa faca acelasi lucru)
void swap(T& a, T& b)
{
    T temp=a; 
    a=b;
    b=temp;
}




int main(int argc, char const *argv[])
{

  int c=10;
  int d=99;
  char e='c';
  char f='z';

  std::string g="Test";
  std::string h="Tralala";
  std::cout<<"inainte de swap\n";
  std::cout<<g<<std::endl;
  std::cout<<h<<std::endl;
  std::cout<<e<<std::endl;
  std::cout<<f<<std::endl;
  std::cout<<c<<std::endl;
  std::cout<<d<<std::endl;

  swap(e,f);
  swap(c,d);
  swap(g,h);
  std::cout<<"dupa swap\n";
  std::cout<<e<<std::endl;
  std::cout<<f<<std::endl;

  

  std::cout<<c<<std::endl;
  std::cout<<d<<std::endl;  
  std::cout<<g<<std::endl;
  std::cout<<h<<std::endl;






    return 0;
}
