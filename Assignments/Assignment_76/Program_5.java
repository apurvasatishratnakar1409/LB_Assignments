import java.util.Scanner;

class Ride
{
    public void PeakHour(int Distance, String Hour)
    {
        int Base = 50;
        int TotalFare = 0;

        if(Distance <= 10)
        {
            TotalFare = Base + (Distance * 12);
        }
        else
        {
            TotalFare = Base + (10 * 12) + ((Distance - 10) * 15);
        }

        if(Hour.equalsIgnoreCase("Yes"))
        {
            TotalFare = TotalFare + (TotalFare * 20 / 100);
        }

        System.out.println("Distance : "+Distance+"Km");
        System.out.println("Peak Hour : "+Hour);
        System.out.println("Total Fare : "+TotalFare);
    }
}
class program_5
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);
        
        int Distance = 0;
        String Hour = null;

        System.out.println("Enter the Distance : ");
        Distance = sobj.nextInt();

        System.out.println("Peak Hour (Yes/No) : ");
        Hour = sobj.next();

        if(Distance < 0)
        {
            System.out.println("Invalid Input !");
            return;
        }

        if(!(Hour.equalsIgnoreCase("Yes") || Hour.equalsIgnoreCase("No")))
        {
            System.out.println("Invalid Input! Enter Yes or No only.");
            return;
        }

        Ride robj = new Ride();
        robj.PeakHour(Distance, Hour);

        sobj.close();
    }
}