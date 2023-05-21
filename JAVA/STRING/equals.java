package STRING;
class equals
{
    static void main()
    {
        String n="LENGTH";
        String n1="lENGTH";
               
        boolean l=n.equalsIgnoreCase(n1);
        System.out.println(l);
    }
}
//WORKS FOR STRING only
//in other cases it always will return false
//equalsIgnoreCase works for string only
//to cases and start and end with and valueofwork with string only