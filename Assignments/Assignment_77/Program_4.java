import java.util.Scanner;

class Water
{
    public void Bill(int Units, int Weeks)
    {
        int BillAmount = 0;
        float LateFee = 0;
        int FixedCharge = 100;

        if(Units <= 100)
        {
            BillAmount = Units * 5;
        }
        else if(Units <= 200)
        {
            BillAmount = (100 * 5) + ((Units - 100) * 8);
        }
        else
        {
            BillAmount = (100 * 5) + (100 * 8) + ((Units - 200) * 12);
        }

        BillAmount = BillAmount + FixedCharge;

        if(Weeks > 0)
        {
            LateFee = BillAmount * 0.02f * Weeks;

            if(LateFee > BillAmount * 0.10f)
            {
                LateFee = BillAmount * 0.10f;
            }
        }

        System.out.println("Bill AMount to be paid : "+BillAmount);
    }
}

class program_4
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);
        
        int Units = 0;
        int WeeksLate = 0;

        System.out.print("Enter Water units : ");
        Units = sobj.nextInt();

        System.out.print("Bill Due : ");
        WeeksLate = sobj.nextInt();

        Water wobj = new Water();
        wobj.Bill(Units, WeeksLate);

        sobj.close();
    }
}