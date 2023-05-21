package CONSTRUCTOR;
class SAMPLE
{
    int a;float b;char ch;
    SAMPLE()
    {
        ch= 'S';
        b = 3.15f;
        a=42;
    }

    void display()
    {
        System.out.println("CHARACTER VALUE IN ch "+ch);
        System.out.println("INTEGRAL  VALUE IN a  "+a);
        System.out.println("DECIMAL   VALUE IN b  "+b);
    }

    void main()
    {
        SAMPLE ob=new SAMPLE();
        ob.display();
    }
}
