import java.util.Scanner;

class OS
{
    public void Warning(int Battery)
    {
        if(Battery <= 5)
        {
            System.out.println("Status : Critical");
        }
        else if(Battery <= 15)
        {
            System.out.println("Status : Low");
        }
        else
        {
            System.out.println("Status : Normal");
        }
    }
}

class program_1
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);
        
        int Battery = 0;

        System.out.print("Enter the Battery Helth : ");
        Battery = sobj.nextInt();

        if((Battery < 0) && (Battery >= 100))
        {
            System.out.println("Invalid Input !");
            return;
        }
        
        OS oobj = new OS();
        oobj.Warning(Battery);

        System.out.println("Battery Percentage : "+Battery);

        sobj.close();
    }
}
