#include <bits/stdc++.h>
class Entity{
    public:
    static int val;
    int j=32;
    virtual void name()
    {
        std:: cout<<"entity \n";
    }
    Entity()
    {
        std:: cout<<"default constructor \n";
    }
};
class Player : public Entity{
    public:
    void name() override
    {
        std:: cout<<"player\n";
    }
    void funct()
    {
        std:: cout<<"fucnt";
    }
};
int Entity:: val;
int main()
{
    Entity:: val =6;
    Entity *e2=new Player();
    e2->name();
    
}