package STRING;
/*valueOf function will be valid for String to numeric typeand vice versa also CHARACTER TO String and all implicit conversions
 */
class valueOf
{
    static void STRING_TO_NUMERICTYPE()
    {
        char s='2';
        int a= Integer.valueOf(s);
        System.out.println(a);

    }

    static void NUMERICTYPE_TO_STRING()
    {
        int a=65;
        String s= String.valueOf(a);
        System.out.println(a);
    }

    static void CHAR_TO_STRING()
    {
        char a='6';
        String s= String.valueOf(a);
        System.out.println(a);
    }
}

