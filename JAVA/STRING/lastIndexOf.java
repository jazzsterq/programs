package STRING;
class lastIndexOf
{
    static void main()
    {
        String n="LENGTH";
        int l=n.lastIndexOf('H');//OR "H"
        System.out.println(l);
        StringBuffer nb= new StringBuffer("LENGTH");
        int lb=nb.lastIndexOf("H");//NOT 'H'        
        System.out.println(lb);
    }
}
//WORKS FOR BOTH STRING AND STRING BUFFER