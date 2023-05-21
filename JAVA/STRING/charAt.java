package STRING;
class charAt
{
    static void main()
    {
        String n="LENGTH";
        char l=n.charAt(0);
        System.out.println(l);
        StringBuffer nb= new StringBuffer("LENGTH");
        char lb=nb.charAt(0);        
        System.out.println(lb);
    }
}
//WORKS FOR BOTH STRING AND STRING BUFFER