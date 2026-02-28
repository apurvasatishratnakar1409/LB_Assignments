import java.util.Scanner;

class Taxes
{
    public void IncomeTax(int Income)
    {
        float Tax = 0;

        if(Income <= 250000)
        {
            Tax = 0.0f;
            System.out.println("No Tax Payable under \u20B92.5lac");
        }
        else if(Income <= 500000)
        {
            Tax = (Income - 250000) * 0.05f;
            System.out.println("Tax Applied Above \u20B92.5lac to \u20B95 lac 5%");
        }
        else if(Income <= 1000000)
        {
            Tax = 12500 + (Income - 500000) * 0.20f;
            System.out.println("Tax Applied Above \u20B95 lac to \u20B910 lac 20%");
        }
        else
        {
            Tax = 112500 + (Income - 1000000) * 0.30f;
            System.out.println("Tax Applied Above \u20B910 lac 30%"); 
        }

        System.out.println("Annual Income : \u20B9"+Income);
        System.out.println("Total Tax Payble : \u20B9"+Tax);
    }
}

class program_5
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);
        
        int Income = 0;

        System.out.print("Enter the annual income : ");
        Income = sobj.nextInt();

        if(Income < 0)
        {
            System.out.println("Income Cannot be negative");
            return;
        }

        Taxes tobj = new Taxes();
        tobj.IncomeTax(Income);

        sobj.close();
    }
}