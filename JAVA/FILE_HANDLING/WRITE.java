package FILE_HANDLING;
import java.io.*;
import java.util.*;
class WRITE
{
    public static void main()throws IOException
    {
        FileWriter sya= new FileWriter("F:\\files\\f3.txt");
        sya.write("DONE");
        System.out.println("WRITTEN");
    }
}