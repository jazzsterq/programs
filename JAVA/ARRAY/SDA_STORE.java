/* WAP TO INPUT 3 ARRAYS cod[],pric[],qty[] TO TAKE INPUT OF FOUR PRODUCT'S CODE,PRICE,QUANTITY.
CALCULATE TOTAL COST OF EACH PRODUCT AND PRINT RESULT AS ILLUSTRATED BELOW

 */
package ARRAY;
import java.util.*;
class SDA_STORE
{
    public static void main()
    {
        int cod[]=new int[4];
        double pric[]=  new double[4];
        int qty[]=new int[4];
        double tcost[]=new double[4];
        double tprice=0,ttcost=0;
        int tqty=0;
        Scanner sa=new Scanner(System.in);
        System.out.println("ENTER PRODUCT CODE,PRICE,QUANTITY OF 4 PRODUCTS");
        for(int i=0;i<4;i++)
        {
            cod[i]=sa.nextInt();
            pric[i]=sa.nextDouble();
            qty[i]=sa.nextInt();
        }
        for(int i=0;i<4;i++)
        {
            tcost[i]=pric[i]*qty[i];
            tprice+=pric[i];
            tqty+=qty[i];
            ttcost+=tcost[i];
        }
        System.out.println("\tPRODUCT CODE\tPRICE\t\tQUANTITY\tTOTAL COST");
        for(int i=0;i<4;i++)
        {
            System.out.println("\t\t"+cod[i]+"\t"+pric[i]+"\t\t"+qty[i]+"\t\t"+tcost[i]);
        }
        System.out.println("TOTAL\t\t\t"+tprice+"\t\t"+tqty+"\t\t"+ttcost);
    }
}
            