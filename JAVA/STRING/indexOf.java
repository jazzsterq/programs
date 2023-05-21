package STRING;
class indexOf
{
    static void main()
    {
        String n="LENHGTH";
        int l=n.indexOf('H');//OR "H"
        System.out.println(l);
        StringBuffer nb= new StringBuffer("LENHGTH");
        int lb=nb.indexOf("H");//NOT 'H'        
        System.out.println(lb);
    }
}
//WORKS FOR BOTH STRING AND STRING BUFFER