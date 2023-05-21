package STRING;
class capacity
{
    static void main()
    {        
        StringBuilder nb= new StringBuilder("LENGTHL");
        int lb=nb.capacity();
        nb.replace(0,2,"sssss");
        System.out.println(nb);
    }
}
//WORKS FOR STRING BUFFER ONLY 6+16