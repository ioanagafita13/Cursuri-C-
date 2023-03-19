#include<iostream>
#include<string>

int suma_array(int arr[], const int dimensiune)
{
    int sum=0;
    for(int i=0; i<dimensiune; i++)
    {
        sum+=arr[i];
    }
    return sum;
}

void print_users(std::string users[], const int dimensiune)
{
    for(int i=0; i<dimensiune; i++)
    {
        if(users[i]!="")
        {
        std::cout<<users[i]<<std::endl;
        }
    }
}



int main() {
    const int array_size=5;
    int my_array[array_size]={1,2,3,4,5};//sintaxa: tipul, numele, [dimensiune]
    //my_array[0]=1;//accesare si modificare array prin index

    std::cout<<my_array[0]<<std::endl;
    std::cout<<my_array[4]<<std::endl;
    

    my_array[0]=99;
    std::cout<<my_array[0]<<std::endl;
    //my_array[5]=77;//indexul merge de la 0->4, index out of bounds!!


    for(int i=0; i<array_size; i++)
    {
        std::cout<<my_array[i]<<std::endl;
    }
    //am chemat functia suma_array pt a calcula suma dintre elem din array
    std::cout<<"suma este "<<suma_array(my_array,array_size)<<std::endl;

    //array de stringuri
    std::string lista_utilizatori[array_size]={"Sergiu", "Mihai"};
    print_users(lista_utilizatori, array_size);




    return 0;
}