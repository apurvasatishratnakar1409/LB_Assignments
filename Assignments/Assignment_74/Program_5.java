import java.util.*;

class program_5
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        int Units = 0;
        int Amount = 0;

        System.out.print("Enter Units Consumed : ");
        Units = sobj.nextInt();

        if(Units < 0)
        {
            System.out.println("Units can not be negative");
            return;
        }

        if(Units <= 100)
        {
            Amount = Units * 5;
        }
        else if(Units <=200)
        {
            Amount = 500 + ((Units - 100) * 7);
        }
        else 
        {
            Amount = 500 + 700 + ((Units - 200) * 10);
        }

        System.out.println("Total Units Consumed : "+Units);
        System.out.println("Total Electicity Bill : "+Amount);

        sobj.close();
    }
}