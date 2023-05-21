package STRING;
class substring
{
    static void main()
    {
        String n="LENGTH";
        String l = n.substring(2,4); // start index , end index -1 
        System.out.println(l);
        StringBuffer nb= new StringBuffer("LENGTH");
        StringBuffer lb=new StringBuffer(nb.substring(2));
        
        //OR String lb=nb.substring(2);   
        System.out.println(lb);
    }
}
//WORKS FOR BOTH STRING AND STRING BUFFER
//SAME IN substring(m,n)