import java.io.*;
class MAX_MIN
    {
        static void main()throws IOException
        {
            BufferedReader sa = new BufferedReader(new InputStreamReader(System.in));
            System.out.println(" ENTER HOW MANY NUMBERS YOU WANT TO ENTER");
            int n= Integer.parseInt(sa.readLine());
            System.out.println("ENTER THE NUMBER ");
            int m= Integer.parseInt(sa.readLine());
            int min=m,max=m;
            
            for( int i=2;i<=n;i++)
            {
                int num= Integer.parseInt(sa.readLine());
                if(num<min)
                min=num;
                if(num>max)
                max=num;
            }
            System.out.println("maximum is  "+max);
            System.out.println("minimum is  "+min);
        }
    }

   