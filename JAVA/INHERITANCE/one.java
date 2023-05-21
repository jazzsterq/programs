package INHERITANCE;
class one
{
    final protected int a;
    public int b;
    
    one()
    {
        System.out.println("one");
        a=10;
        b=20;
    }
    
    void display()
    {
        System.out.println(a+" "+b);
    }
}