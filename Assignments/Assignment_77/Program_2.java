import java.util.Scanner;

class Train
{
    public void Travel(int Distance, int Time, int Age, String ClassType)
    {
        int BaseFaire = 0;
        int FinalFaire = 0;

        float SeniorCityzen = 0.0f;
        float Tatkal = 0.0f;

        if(Distance < 100)
        {
            BaseFaire = Distance * 10;
        }
        else if(Distance > 100)
        {
            BaseFaire = Distance * 15;
        }

        if(ClassType.equalsIgnoreCase("SL"))
        {
            FinalFaire = BaseFaire + 180;
        }
        else if(ClassType.equalsIgnoreCase("3AC"))
        {
            FinalFaire = BaseFaire + 250;
        }
        else if(ClassType.equalsIgnoreCase("2AC"))
        {
            FinalFaire = BaseFaire + 350;
        }

        if(Time < 24)
        {
            Tatkal = FinalFaire * 0.30f;
            FinalFaire += Tatkal;
            System.out.println("Tatkal charges Applied : "+Tatkal);
        }
        
        if(Age >= 60)
        {
            SeniorCityzen = FinalFaire * 0.40f;
            FinalFaire -= SeniorCityzen;
            System.out.println("Reason of Breakdown : "+SeniorCityzen);
        }

        System.out.println("Final Fare : "+FinalFaire);

    }
}
class program_2
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);
        
        int Distace = 0;
        int BookingHoursBefor = 0;
        int Age = 0;
        String ClassType = null;

        System.out.print("Enter Distance : ");
        Distace = sobj.nextInt();

        System.out.print("Enter Class Type (SL,3AC,2AC) : ");
        ClassType = sobj.next();

        System.out.print("Enter Booking Time : ");
        BookingHoursBefor = sobj.nextInt();

        System.out.print("Enter Age : ");
        Age = sobj.nextInt();

        Train tobj = new Train();
        tobj.Travel(Distace, BookingHoursBefor, Age, ClassType);

        sobj.close();
    }
}