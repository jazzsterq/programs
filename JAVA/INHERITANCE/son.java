package INHERITANCE;
class son implements father,mother
{
    public void display()
    {
        System.out.println(fname);
        System.out.println(mname);
    }
    
    void main()
    {
        son s1 = new son();
        s1.display();
    }
}