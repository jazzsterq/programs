package PATTERNS.MY_SPECIFICATIONS;
/* WAP FOR
*                   
* *                 
*   *               
*     *             
*       *           
*       * *         
*     * *   *       
*   *   *     *     
* *     *       *   
*       *         * 
* *     *       *   
*   *   *     *     
*     * *   *       
*       * *         
*       *           
*     *             
*   *               
* *                 
*                   
 */
class TRIANGLE_2
    {
        public static void main()
        {
            for(int i=1;i<=10;i++)
            {
            for(int j=1;j<=10;j++)
                {
                    if(j==1||j==i||(j==5&&i>5)||i+j==11&&i>5)
                    System.out.print("* ");
                    else
                    System.out.print("  ");
                }
            System.out.println();
        }
         for(int i=2;i<=10;i++)
            {
            for(int j=10;j>=1;j--)
                {
                    if(j==10||j==i||(j==6&&i<6)||i+j==11&&i<5)
                    System.out.print("* ");
                    else
                    System.out.print("  ");
                }
            System.out.println();
        }
    }
}