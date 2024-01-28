#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
class Hero
{

    public:
    int health;
    static int time;
    string name;
    Hero(){
        cout<<"Default called" <<endl;
    }
    Hero(int health){
        cout<<"constructor called"<<health<<endl;
        cout<<this->health;
    }
    // copy constructor , anyway it is made by default so no need but just for the sake of it 
    Hero ( Hero & temp)
    {
        this->health = temp.health;
        this->name = temp.name;
    }
    ~Hero()
    {
        cout<<" Destructor called ";

    }
    int gethealth() //getter
    {
        return health;
    }
    void sethealth(int given)//setter
    {
        health = given ;
    }
};
int Hero :: time = 5;
int main()
{
    cout<< Hero :: time;
    Hero Ram(50);
    Ram.name="rans";
    Ram.health=33;
    Hero Suresh(Ram);
    cout<<Ram.health<<endl;
    cout<<Suresh.health<<endl;
    Ram.health=34;
    cout<<Ram.health<<endl;
    cout<<Suresh.health<<endl;
  
    /*
    Static and dynamic allocation 
    Hero a ; // static allocation 
    int *i = new int ; // dynamic allocation  , memory allocation in heap
    // similarily for objects 
    Hero *Adil = new Hero ; // or Hero *Adil = new Hero();
    ll ans = (*Adil).gethealth();
    ll ans2 = Adil -> gethealth();
    Adil -> name = "Adil";
    return 0;

    parameterized constructor 
    Ram (int health )
    {
        this.health = health; .. ths has the address of the current object 
    }
    */
    
}