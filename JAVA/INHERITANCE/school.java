package INHERITANCE;
abstract class school
{
    protected String sch;
    protected String hm;
    protected String pri;
    school()
    {
        pri = " Fr. Gregory ";
        hm  = " Sr. Sushila ";
        sch = " St. Mary's School ";
    }
    
    abstract void display();
}
