#include<iostream>
#include<vector>
#include<string>

void printUsers(std::vector<std::string>users){
    for(int i=0; i<users.size(); i++)
    {
        std::cout<<users.at(i)<<std::endl;
    }
}




int main(){
//sintaxa pt vector este std::vector<tipData> nume_vector;
std::vector<int>lista;
lista.push_back(10);
std::cout<<"dimensiunea listei este: "<<lista.size()<<std::endl;
std::cout<<"capacitatea listei este: "<<lista.capacity()<<std::endl;
lista.push_back(10);
std::cout<<"dimensiunea listei este: "<<lista.size()<<std::endl;
std::cout<<"capacitatea listei este: "<<lista.capacity()<<std::endl;
std::vector<std::string>utilizatori;
utilizatori.push_back("Sergiu");
utilizatori.push_back("Ioana");
//printUsers(utilizatori);
utilizatori.push_back("Stefan");
//printUsers(utilizatori);

utilizatori.pop_back();//prin pop back se sterge ultimul entry din vector
printUsers(utilizatori);
std::string Nume="Sergiu";
Nume="Tralala";
for(int i=0; i<Nume.size(); i++)//parcurgem vectorul (care se aseamana cu un string)
{
    std::cout<<Nume.at(i)<<std::endl;
}
std::vector<char>NumeSimilar;


//A.sintaxa pt un multi-array este tip data[d1 size][d2 size]...[dn size]
int m_array[3][3]=
{
    {1,2,3},
    {4,5,6},
    {7,8,9}
};
std::cout<<m_array[0][0]<<std::endl;
//calculam suma elem din diagonala principala (varianta 1)
int diag_sum=0;
for(int i=0; i<3; i++)
{
    for(int j=0; j<3; j++)
    {
        if(i==j)
        {
            diag_sum+=m_array[i][j];
        }
    }
}
//varianta 2 de suma (merge doar pt matrice patratica):
int diag_sum2=0;
for (int i=0; i<3; i++)
{
    diag_sum2+=m_array[i][i];
}
std::cout<<"suma diagonalei principale este "<<diag_sum<<std::endl;

int x[2][3]=
{
    {2,3},
    {8,9,10}
};

//B.array-uri dinamice (care isi schimba dimensiunea)







    return 0;
}