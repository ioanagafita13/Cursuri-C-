#include<iostream>
#include<string>

void foo(int param)//param=variabila locala
{
    std::cout<<param<<std::endl;
    std::cout<<"Adresa lui param din foo este "<<&param<<std::endl;// &=adress of
}

void foo_cu_pointer(int* param)
{
    if(param!=nullptr){
    std::cout<<*param<<std::endl;//pt dereferentiere sintaxa e *param (accesare valoare din adresa)
    std::cout<<"Adresa lui param din foo cu pointer este "<<param<<std::endl;//este aceeasi cu adresa din main
    }
    else
    {
        std::cout<<"pointer invalid\n";
    }
}

/*int increment(int param)
{
    return ++param;
}*/
void increment(int* param)
{
    if(param!=nullptr)
    ++*param;
}


void printFood(const std::string& mancare)//este imp sa punem constanta daca vrem sa folosim o ref, daca nu vrem sa o modif.
//(adresa nu e modificabila in functia printFood)
{
    std::cout<<"mancarea este "<<mancare<<std::endl;
}

void addA(std::string & ref)
{
    ref+="A";
}
//functia swap(exercitiul)
void swapab(int &a, int &b)
{
    int aux;
    aux=a;
    a=b;
    b=aux;
}

int main(){
    int param=5;
    std::cout<<"adresa lui param din main este "<<&param<<std::endl;
    foo(param);
    int*ptr=NULL; //un pointer ce arata catre o adresa a unei variabile int 
    ptr=&param;
    foo_cu_pointer(ptr);
    increment(ptr);
    std::cout<<"valoarea lui param este  "<<*ptr<<std::endl;
//sintaxa pointer: 
//tip_data*nume_pointer


int my_array[5]={1,2,3,4,5};
for(int i=0; i<5; i++)
{
    std::cout<<&my_array[i]<<std::endl;
}

//CURS 12 Referinte

std::string pizza="PIZZA";
std::string& mancare=pizza;

printFood(mancare);//mancarea este o referinta catre adresa lui pizza, 
mancare = "CARTOFI";
printFood(pizza);

addA(pizza);
printFood(mancare);



//creati o fct ce sa faca swap intre 2 valori (a=5, b=10)->a=10, b=5;
int a;
int b;
std::cin>>a>>b;
swapab(a,b);
std::cout<<a<<" "<<b<<std::endl;

//scrieti o functie ce va scoate duplicatele dintr-un vector.
/**/


    return 0;
}