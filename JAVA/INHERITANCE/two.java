package INHERITANCE;
class two extends one
{
    protected int c;
    public int d;
    
    two()
    {
        System.out.println("two");
        c=30;
        d=40;
    }
    
    void display()
    {
        super.display();
        System.out.println(c+" "+d);        
    }
 
    void main()
    {
        two t = new two();
        t.display();
        System.out.println(a);
    }
}
