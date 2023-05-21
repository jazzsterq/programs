package STRING;
class add_palindrome
{
    public static int minChar(String str)
    {
       
       int temp=0;
        for(int i=str.length()-1;i>=0;i--)
        {
            String a= str.substring(0, i+1);
            if(checkPalin(a)==true)
            {
                return (str.length()-1-i);
            }
        }
        return 1;
    } 
    static boolean checkPalin(String str)
    {
        StringBuffer m = new StringBuffer(str);
        m.reverse();
        String rev=new String(m); 
        if(str.equals(rev))
        return true;
        else
        return false;
    }
}