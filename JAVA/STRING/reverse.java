package STRING;
class reverse
{
    static void main()
    {
        StringBuffer nb= new StringBuffer("MADAMA");
        nb.reverse();      
        nb.setCharAt(0,'a');
        nb.append("aaa");
        System.out.println(nb);
    }
}
//WORKS FOR STRING BUFFER ONLY