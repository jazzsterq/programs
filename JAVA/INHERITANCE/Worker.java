package INHERITANCE;
class Worker
{
    String Name;
    double Basic;
    Worker(String n , double bp)
    {
        Name=n;
        Basic=bp;
    }
    void display()
    {
        System.out.println("Worker's Name :"+ Name);
        System.out.println("Worker's Basic pay:"+ Basic);
    }
}//class
        