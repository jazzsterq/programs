//SYNTAX
import java.io.*;
    class SYNTAX
        {
            public static void main()throws IOException
                {
                    BufferedReader sa  = new BufferedReader(new InputStreamReader(System.in));
                    System.out.println(" enter 1 for Syntax of Scanner and 2 for Buffered Reader");
                    int n=Integer.parseInt(sa.readLine());
                    switch(n)
                    {
                        case 1:
                        System.out.println("//SCANNER");
                        System.out.println("STATEMENT: Scanner sa=new Scanner(System.in);");
                        System.out.println("byte    b=sc.nextByte()");
                        System.out.println("int     i=sc.nextInt()");
                        System.out.println("short   s=sc.nextShort()");
                        System.out.println("long    l=sc.nextLong()");
                        System.out.println("double  d=sc.nextDouble()");
                        System.out.println("float   f=sc.nextFloat()");
                        System.out.println("char    c=sc.next().charAt(0)");
                        System.out.println("String  st=sc.next()");
                        System.out.println("String  str=sc.nextLine()");
                        break;
                        case 2:
                        System.out.println("//BUFFERED READER");
                        System.out.println("STATEMENT: BufferedReader sa  = new BufferedReader(new InputStreamReader(System.in));");
                        System.out.println("byte    B=Byte.parseByte(br.readLine())");    
                        System.out.println("int     I=Integer.parseInt(br.readLine())");
                        System.out.println("short   S=Short.parseShort(br.readLine())");
                        System.out.println("long    L=Long.parseLong(br.readLine())");
                        System.out.println("double  D=Double.parseDouble(br.readLine())");
                        System.out.println("float   F=Float.parseFloat(br.readLine())");
                        System.out.println("char    C=(char)(System.in.read())");
                        System.out.println("char    CH=(char)(br.read())");
                        System.out.println("String  STR=br.readLine()");
                        System.out.println("int     I=System.in.read() TAKES INPUT ANYTHING AND GIVES ASCII OR UNICODE OUTPUT");
                        break;  
                        default:
                        System.out.println("wrong choice");
                    }
                }
            }
