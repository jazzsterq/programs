/*WAP TO INPUT A NUMBER AND CONVERT BINNARY TO DECIMAL,DECIMAL TO BINARY,OCTAL TO DECIMAL
 *USING SWITCH
 */
import java.util.*;
class NUMBER_CONVERSION 
    {
        public static void main(String[] args)
            
        { 
           long y=0,base=1,dig;   
            Scanner sa = new Scanner(System.in);
            
            System.out.println("ENTER 1 FOR BINARY  TO DECIMAL");
            System.out.println("ENTER 2 FOR DECIMAL TO BINARY");
            System.out.println("ENTER 3 FOR DECIMAL TO OCTAL");
            System.out.println("ENTER 4 FOR OCTAL   TO DECIMAL");
            int v=sa.nextInt();
            System.out.println("ENTER THE NUMBER");
            long n=sa.nextLong();
           
            
            switch(v)
            {
                case 1:
                for(;n!=0;n/=10)
                {
                    dig=n%10;
                    y+=dig*base;
                    base*=2;
                }
                System.out.println(y);
                break;
                case 2:
                
                for(;n!=0;n/=2)
                {
                    dig=n%2;
                    y=y+(dig*base);
                    base=base*10;
                }
                System.out.println(y);
                break;
                case 3:
                for(;n!=0;n/=8)
                {
                    dig=n%8;
                    y=y+(dig*base);
                    base=base*10;
                }
                System.out.println(y);
                break;
                case 4:
                for(;n!=0;n/=10)
                {
                    dig=n%10;
                    y=y+(dig*base);
                    base=base*8;
                }
                System.out.println(y);
                break;
                default:
                System.out.println("\"Wrong Choice\"");
            }
        }
    }