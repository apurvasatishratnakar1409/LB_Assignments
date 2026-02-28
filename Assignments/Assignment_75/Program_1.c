import java.util.*;

class Parking
{
    public int Calculation(int Hours)
    {
        int Amount = 0;

        if(Hours <= 2)
        {
            Amount = 20;
        }
        else
        {
            Amount = 20 +(Hours - 2) * 10;
        }

        if(Hours > 10)
        {
            Amount = Amount + 50;
        }
        return Amount;
    }
}

class program_1
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        int Hours = 0;
        
        System.out.println("Enter the parking time : ");
        Hours = sobj.nextInt();

        // Validation
        if(Hours < 0)
        {
            System.out.println("Invalid Input !");
            return;
        }

        Parking pobj = new Parking();
        int Amount = pobj.Calculation(Hours);

        System.out.println("Total Parking Duration : "+Hours+"hr");
        System.out.println("Total Parking Fee : "+Amount);

        sobj.close();
    }
}
