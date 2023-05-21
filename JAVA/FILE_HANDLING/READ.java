package FILE_HANDLING;
import java.io.*;
import java.util.*;
class READ
{
    public static void main()throws IOException
    {
        File sa = new File("f:\\files\\list.txt");
        Scanner sya = new Scanner(sa);
        while(sya.hasNextLine())
        System.out.println(sya.nextLine());
    }
}