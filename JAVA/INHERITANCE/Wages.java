package INHERITANCE;
class Wages extends Worker
{
    int hrs;
    double rate;
    double wage;
    
    Wages(String a, double b,int c,double d)
    {
        super(a,b);
        hrs=c;
        rate=d;
    }
    
    double overtime()
    {
        return (hrs*rate);
    }
    
    void display()
    {
        super.display();
        wage = overtime()+ Basic;
        System.out.println(hrs+"    "+rate+"    "+wage);
    }
}
        
