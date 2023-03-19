#include <iostream>
#include <memory> // aici se afla smart pointers
#include <vector>



//std::unique_ptr --> smart pointer ce asigura o sg referinta spre obiect si sterge obiectul cand e out of scope
//std::shared_ptr--> smart ptr ce poate avea mai multi pointeri spre acelasi ob, dar cand nu mai este  niciunul cheama "delete"
//std::weak_ptr->> exact ca si shared pointer dar nu lasa sa creasca "ref counter", pot fi mai multi weak pointeri ce arata catre acelasi ob
                // weak pointer nu poate fi instantzat 




class Entity 
{
    public:
    Entity()
    {
        std::cout<<" An entity was created\n";
    }
    ~Entity()
    {
        std::cout<<"An entity was destroyed\n";
    }
};


void CreateEntity()
{
    Entity* e=new Entity();
    delete e;
}


void CreateEntityUniquePtr() //exemplificare unique pointer (practic un unique pointer cheama "delete" pt noi)
{
    //sintaxa: std::unique_ptr<tip> numePtr=std::make_unique<tip>();
    std::unique_ptr<Entity> e = std::make_unique<Entity>();
    std::cout<<"Se termina stiva CreateEntityUniquePtr\n";


    //std::unique_ptr<Entity> e(Entity); ----->//varianta de sintaxa
    //std::unique_ptr<Entity> e(new Entity());------>//varianta de sintaxa
}


std::shared_ptr<Entity> CreateEntitySharedPtr()// exemplificare shared pointer
{
    //sintaxa este : std::sharedt_ptr<tip> nume_ptr = std::make_shared<tip>()
    std::shared_ptr<Entity> e=std::make_shared<Entity>();
    std::cout<<"Ref count "<<e.use_count()<< std::endl;
    std::cout<<"Se termina stiva CreateEntitySharedPtr\n";

    return e;
}

struct Player 
{ 
    Player(){std::cout<<"a player was created\n";}
    //std::shared_ptr<Player> companion; -> dependinta circulara
    std::weak_ptr<Player> companion;
    ~Player(){std::cout<<"a player was destroyed\n";}
};




int main(int argc, char const *argv[])
{

    //exemplificare weak poniter
    std::shared_ptr<Player> Sergiu = std::make_shared<Player>();
    std::shared_ptr<Player> Stefan = std::make_shared<Player>();

    Sergiu -> companion = Stefan;
    Stefan -> companion = Sergiu;

    std::weak_ptr<Player> p_shared = std::make_shared<Player>(); // p este un pointer catre un obiect ce e shared
    std::shared_ptr<Player> p_weak(p_shared); 
 

    //CreateEntity();
    CreateEntityUniquePtr(); // pt unique

    std::shared_ptr<Entity> e = CreateEntitySharedPtr(); //pt shared
    std::shared_ptr<Entity> e2 = e;
    std::cout<<"Ref count "<<e.use_count()<< std::endl;
    std::cout<<"Se termina stiva main\n"; //ca sa demnonstram ca shared pointer se distruge dupa main, spre deoseb de unique pointer care se sterge in fct



//unique pointerul nu lasa sa se faca doi pointeri spre acelasi obiect
//std::unique_ptr<Entity> e = std::make_unique<Entity>();


//in loc sa aratam cu alt pointer catre obiectul respectiv,  "mutam" obiectul catre alt pointer(se muta in alt bloc de memorie tot pe heap)
//std::unique_ptr<Entity> e2 = std::move(e); 







    return 0;
}
