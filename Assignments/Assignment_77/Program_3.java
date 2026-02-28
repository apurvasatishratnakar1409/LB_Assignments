import java.util.Scanner;

class Calller
{
    public void Telecom(int Minute, int GB, int Sms)
    {
        String PlanName[] = {"Plan A","Plan B","Plan C","Plan D"};

        int BasePrice[] = {299, 399, 499, 600};

        int FreeMinute[] = {300, 500, 800, 1000};
        int FreeGB[] = {2, 3, 5, 10};
        int FreeSms[] = {100, 200, 300, 500};

        double ExtraMinute = 1.0;
        double ExtraGB = 20.0;
        double EtraSms = 0.5;

        double TotalCost = 0;

        double mincost = Double.MAX_VALUE;
        String BestPlan = "";

        for(int i = 0; i < 4; i++)
        {
            TotalCost = BasePrice[i];

            if(Minute > FreeMinute[i])
            {
                TotalCost = (Minute - FreeMinute[i] * ExtraMinute);
            }

            if(GB > FreeGB[i])
            {
                TotalCost = (GB - FreeGB[i] * ExtraGB);
            }

            if(Sms > FreeSms[i])
            {
                TotalCost = (Sms - FreeSms[i] * EtraSms);
            }

            if(TotalCost < mincost)
            {
                mincost = TotalCost;
                BestPlan = PlanName[i];
            }
        }

        System.out.println("Recommended Plan : "+BestPlan);
        System.out.println("Total Cost : "+TotalCost);
    }
}
class program_3
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);
        
        int Mininute = 0;
        int GB = 0;
        int Sms = 0;

        System.out.print("Enter Time : ");
        Mininute = sobj.nextInt();

        System.out.print("Enter Data : ");
        GB = sobj.nextInt();

        System.out.print("Enter Message : ");
        Sms = sobj.nextInt();

        Calller cobj = new Calller();
        cobj.Telecom(Mininute, GB, Sms);

        sobj.close();
    }
}