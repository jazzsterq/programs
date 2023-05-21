package STRING;
class length
{
    static void main()
    {
        String n="LENGTH";
        int l=n.length();
        System.out.println(l);
        StringBuffer nb= new StringBuffer("LENGTH");
        int lb=nb.length();        
        System.out.println(lb);
    }
}
//WORKS FOR BOTH STRING AND STRING BUFFER