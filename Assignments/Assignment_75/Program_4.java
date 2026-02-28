import java.util.Scanner;

class Traffic
{
    public void Police(String Helmet, String License, String Overspeeding)
    {
        int Fine = 0;

        if(Helmet.equalsIgnoreCase("No"))
        {
            System.out.println("Fine : No helmet ->  \u20B9500");
            Fine = Fine + 500; 
        }
        
        if(License.equalsIgnoreCase("No"))
        {
            System.out.println("Fine : No License -> \u20B91000");
            Fine = Fine + 1000;
        }
        
        if(Overspeeding.equalsIgnoreCase("Yes"))
        {
            System.out.println("Fine : Overspeeding -> \u20B91500");
            Fine = Fine + 1500;
        }

        if(Fine == 0)
        {
            System.out.println("No Fine.");
        }
        else
        {
            System.out.println("Total Fine Amount : \u20B9"+Fine);
        }
    }
}

class program_4
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);
        
        String Helmet = null;
        String License = null;
        String Overspeeding = null;

        System.out.print("Are you wear Helmet (Yes/No) : ");
        Helmet = sobj.next();

        System.out.print("Do you have License (Yes/No) : ");
        License = sobj.next();

        System.out.print("You are Over Speeding (Yes/No) : ");
        Overspeeding = sobj.next();

        if((!Helmet.equalsIgnoreCase("Yes") && !Helmet.equalsIgnoreCase("No")) ||
            (!License.equalsIgnoreCase("Yes") && !License.equalsIgnoreCase("No")) ||
            (!Overspeeding.equalsIgnoreCase("Yes") && !Overspeeding.equalsIgnoreCase("No")))
        {
            System.out.println("Input Must be Yes/No");
            return;
        }
        
        Traffic tobj = new Traffic();
        tobj.Police(Helmet, License, Overspeeding);

        sobj.close();
    }
}