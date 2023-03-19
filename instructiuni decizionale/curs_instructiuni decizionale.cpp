#include <iostream>

bool checkLimit(int limit)
{
    const int max_limit=20;
    if (limit>=max_limit)
    {
        return false;
    }

    return true;
    }



int main() 
{
int value=25;
bool isValid=true;

if (isValid)
{
    std::cout<<"Acces granted\n";
    if(checkLimit(value))
    std::cout<<"You are inn!\n";
}
else
{
    std::cout<<"Acces not granted\n";
    std::cout<<"value above max limit\n";
}
std::cout<<"Finishing\n";

int time=9;
if(time<10)
{
    std::cout<<"good morning!\n";
}
    else if(time<=20)
    {
        std::cout<<"Good day!\n";
    }
    else {
        std::cout<<"good evening!\n";
    }

std::cout<<"introduceti operatiunea:\n";
std::cout<<"+adunare, -scadere\n";
char op;
std::cin>>op;
std::cout<<"Introduceti valori\n";
int a,b;
std::cin>>a;
std::cin>>b;
switch(op)
{
    case '+':
    std::cout<<"suma este: "<<a+b<<std::endl;
break;
    case '-':
std::cout<<"scaderea este: "<<a-b<<std::endl;
break;
case '*':
std::cout<<"inmultirea este "<<a*b<<std::endl;
break;
    default:
std::cout<<"operatiunea "<<op<<" nu este suportata\n";
break;
}
    return 0;
}