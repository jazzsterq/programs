class BITWISE_OPERATOR
{
    static void main()
    { 
        int z=2 & 4;
        int y=2 | 4;
        int x=2 ^ 4;
        int a=~-5;
        System.out.println("AND" + z);
        System.out.println("OR"  + y);
        System.out.println("XOR" + x);
        System.out.println("COMPLEMENT"+a);//5=101 =>-110=>-6
    }
}
