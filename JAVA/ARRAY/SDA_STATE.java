package ARRAY;
import java.util.*;
class SDA_STATE
{
    public static void main()
    {   
        int small,pos;
        String STATE []=new String [5];
        char DO[]=new char[5];
        String CAPITAL[]= new String [5];
        Scanner sa=new Scanner (System.in);
        System.out.println("ENTER THE STATES AND THEIR CAPITALS ");
        for(int i=0;i<5;i++)
        {
            DO[i]=sa.next().charAt(0);
            STATE[i]=sa.nextLine();
            CAPITAL[i]=sa.nextLine();
        }
        for(int i=0;i<5-1;i++)
        {
            small=DO[i];
            pos=i;
            for(int j=i+1;j<5;j++)
            {
                if(small>DO[j])
                {
                    small=DO[j];
                    pos=j;
                }
            }
            char y=DO[i];
            DO[i]=DO[pos];
            DO[pos]=y;
            String temp=STATE[i];
            STATE[i]=STATE[pos];
            STATE[pos]=temp;
            String x=CAPITAL[i];
            CAPITAL[i]=CAPITAL[pos];
            CAPITAL[pos]=x;
        }
        for(int i=0;i<5;i++)
        {   
            System.out.println(STATE[i]+"\n"+CAPITAL[i]);
        }
    }
}
