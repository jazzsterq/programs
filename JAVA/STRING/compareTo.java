package STRING;
class compareTo
{
    static void main()
    {
        String n="cable"; 
        String n1="cadet";
        int l=n.compareTo(n1);
        System.out.println(l);
    }
}
//WORKS FOR STRING ONLY
/*WORKING IS ALPHABETICALLY
EXAMPLE- "CADET".compareTo("CABLE");
CHECKS    C      WITH       C   FINDS EQUAL HENCE PROCEEDS
CHECKS     A     WITH        A  FINDS EQUAL HENCE PROCEEDS
CHECKS      D    WITH         B FINDS INEQUALITY HENCE GIVES OTPUT AS D-B=>68-66=2;
 */

 