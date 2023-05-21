package FUNCTION;
class AREAS
{
    public static void AREA(double b,double h)
    {
        System.out.println("LEGNTH OF BASE AND HEIGHT "+ b+","+h);
        System.out.println("AREA OF TRIANGLE "+(0.5*b*h));
    }
    public static void AREA(int l,int br)
    {
        System.out.println("LEGNTH AND BREDTH "+ l+","+br);
        System.out.println("AREA OF RECTANGLE "+(l*br));
    }
    public static void AREA(double r)
    {
        System.out.println("RADIUS "+ r);
        System.out.println("AREA OF CIRCLE "+(3.14*r*r));
    }
    public static void main(double x,double y,double z,int m,int n)
    {
        AREAS sa1=new AREAS();
        AREAS sa2=new AREAS();
        AREAS sa3=new AREAS();
        sa1.AREA(x,y);
        sa2.AREA(z);
        sa3.AREA(m,n);
        
    }
}
        
       