import java.util.*;
class r
{
public static void main(String[] args) 
{
Scanner sr=new Scanner(System.in);
int i,temp=0;
long p[] =new long[10];
String n[]=new String[10];
System.out.println("Enter name and phn no. respectively ");
for(i=0;i<=9;i++)
{
n[i]=sr.next();
p[i]=sr.nextLong();
}
System.out.println("Enter name whose phn no. is to be searched");
String name =sr.next();
for(i=0;i<=9;i++)
{
if(n[i].equals(name))
{
System.out.println("Phone no. of "+name+ " is "+p[i]);
temp=1;break;
}
}
if(temp==0)
System.out.println("Not found");
}
}