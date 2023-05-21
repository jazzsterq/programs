import java.io.*;
import java.util.*;
class ASCII
{
    public static void main(String[] args)throws IOException
    {
        System.out.println("ENTER THE LITERAL WHOSE ASCII TO FIND");
        int s=System.in.read();
        System.out.println(s);
        System.out.println("ENTER THE ASCII WHOSE VALUE TO FIND");
        char ch= (char)new Scanner(System.in).nextInt();
        System.out.println(ch);
    }
}
        