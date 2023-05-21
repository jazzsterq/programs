package STRING;
import java.util.*;
class NAME_DIAMOND
    {
        static void main()
        {
            Scanner sa=new Scanner(System.in);
            System.out.println("ENTER THE NAME");
            String name=sa.nextLine();           
            for(int i=0;i<name.length();i++)
            {
                for(int j=i;j<name.length()-1;j++)
                {
                    System.out.print(" ");
                    
                }
                for(int k=0;k<=i;k++)
                {                  
                    System.out.print(name.charAt(k)+" ");
                }
                System.out.println();
            }
            for(int i=name.length()-2;i>=0;i--)
            {
                for(int j=i;j<name.length()-1;j++)
                { System.out.print(" ");
                }
                for(int k=0;k<=i;k++)
                 {                    
                    System.out.print(name.charAt(k)+" ");
                }
                 System.out.println();
            }
            }
        }
               
