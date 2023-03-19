#include<iostream>
#include<string>
const float pi=3.14;
void foo()
{
    std::cout<<"Din foo() pi este "<<pi<<std::endl;
}



bool checkPassword(std::string input)
{
    if(input=="Parola")
    {
        return true;
    }
    else 
    {
    return false;
    }
}


int main()
{
foo();
    std::cout<<"din main () pi este "<<pi<<std::endl;

    //std::cout<<"suma este "<<1+0<<std::endl;
    //std::cout<<"suma este " <<1+1<<std::endl;
    //std::cout<<"suma este " <<1+2<<std::endl;



int last_sum=0;
int last_index=0;
bool b=false;
for(int i=0; i<10; i++)
{
    last_sum=1+i;
    std::cout<<"suma dintre 1+"<<i<<" este " << last_sum<<std::endl;
    last_index=i;
   
    if(!b)
    {
        std::cout<<"bye bye!"<<std::endl;
        break;
    }
}

std::cout<<"last index is "<<last_index<<std::endl;



for(int i=0;i<5;i++)
{
    std::cout<<"Hello world\n";
}



int a=0;
while(a<5)
{
    std::cout<<"valoarea lui a este "<<a<<std::endl;
    a++;
}
bool is_valid=true;
while(is_valid)
{
    std::cout<<"you are in\n";
    break;
}


std::string parola;
do
{
std::cout<<"introduceti parola\n";
std::cin>>parola;
} while(!checkPassword(parola));




return 0;
}