package INHERITANCE;
class Account extends Bank
{
    double amt;
    Account(String n,long acc,double pr,double am)
    {
        super(n,acc,pr);
        amt=am;
    }

    void deposit()
    {
        p=p+amt;
    }

    void withdraw()
    {
        if(amt>p)
        {
            System.out.println("INSUFFICIENT BALANCE");
            p=p-(500-p)/10;

        }	
        else
            p=p-amt;
    }

    void display()
    {
        super.display();
    }
}
