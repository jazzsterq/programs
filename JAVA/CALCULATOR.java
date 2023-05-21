// CALCULATOR    
import java.io.*;
    class CALCULATOR
        {
             static void main()throws IOException 
                {
                    BufferedReader sa  = new BufferedReader(new InputStreamReader(System.in));
                    System.out.println("                       CALCULATOR");
                    System.out.println("Enter the greater number");
                    double x=Double.parseDouble(sa.readLine());
                    System.out.println("Enter the smaller number");
                    double y=Double.parseDouble(sa.readLine());
                    double a,s,m,d;
                    System.out.println("ENTER + FOR ADDITION");
                    System.out.println("ENTER - FOR SUBTRACTION"); 
                    System.out.println("ENTER * FOR MULTIPLICATION");
                    System.out.println("ENTER / FOR DIVISION"); 
                     char n=(char)(sa.read());
                   
                    switch(n)
                   {
                    case '+':
                    a=x+y;
                    System.out.println("THE SUM IS "+a);
                    break;
                    case '-':
                    s=x-y;
                    System.out.println("THE DIFFERENCE IS "+s);
                    break;
                    case '*':
                    m=x*y;
                    System.out.println("THE PRODUCT IS "+m);
                    break;
                    case '/':
                    d=x/y;
                    System.out.println("THE FRACTION IS "+d);
                    break;
                    default:
                    System.out.println("WRONG CHOICE!!");
                    System.out.println("TRY AGAIN :-)");
                }
            }
        }                        