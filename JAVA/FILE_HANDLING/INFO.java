package FILE_HANDLING;
import java.io.*;

class INFO
{
    public static void main()throws IOException
    {
        System.out.println("ENTER THE FILE LOCATION");
        File sya = new File(new BufferedReader(new InputStreamReader(System.in)).readLine());
        if(sya.exists())
        {
            System.out.println("FILE NAME:"+sya.getName());
            System.out.println("ABSOLUTE PATH:"+sya.getAbsolutePath());
            System.out.println("WRITABLE :"+sya.canWrite());
            System.out.println("READABLE :"+sya.canRead());
            System.out.println("FILE SIZE IN BYTES:"+sya.length());
        }
        else
        System.out.println("file does not exist");
    }
}