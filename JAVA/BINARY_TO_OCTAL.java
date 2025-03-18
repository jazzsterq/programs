import java.util.*;
class BINARY_TO_OCTAL
{
    public static void main(String args[])
    {   int dig,sum=0,base=1,dig1,oct=0;
        Scanner sa=new Scanner(System.in);
        System.out.println("ENTER A OCTAL NUMBER");
        int n=sa.nextInt();
        int count =0;int dup=n;
        for(;dup!=0;dup/=10)
            count++;
        if(count %3==0)
        {  
            count=0;
            for(;n!=0;n/=1000)
            {   
                sum=0;
                dig=n%1000;
                for(;dig!=0;dig/=10)
                {
                    dig1=dig%10;
                    sum+=dig1*base;
                    base*=2;
                }
                oct+=sum*Math.pow(10,count);
                base=1;
                count++;
            }
            System.out.println("OCTAL  "+oct);
        }
        else
            System.out.println("CANNOT BE CONVERTED INTO OCTAL");
        }
    }
