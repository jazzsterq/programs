package INHERITANCE;
class Bank 
{
    String name;
    long accno;
    double p;
    Bank(String n , long an , double pri)
    {
        name=n;
        accno=an;
        p=pri;
    }
     
    void display()
    {
        System.out.println("NAME : "+name);        
        System.out.println("ACCOUNT NO. : "+accno);
        System.out.println("PRINCIPAL : "+p);
    }
}
