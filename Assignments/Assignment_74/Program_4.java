import java.util.*;

class program_4
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        int Amount = 0;

        float DiscountAmount = 0.0f;
        float FinalAmount = 0.0f;

        String MembershipType = null;

        System.out.print("Enter the Purchase Ammount : ");
        Amount = sobj.nextInt();

        System.out.print("Enter Membership Type : (Premium/Regular) ");
        MembershipType = sobj.next();

        if
        (   (Amount < 0) || 
            ((MembershipType.equalsIgnoreCase("Premium" ) == false) &&
            (MembershipType.equalsIgnoreCase("Regular" ) == false))
        )
        {
            System.out.println("Invalid Input !");
            return;
        }

        if(Amount > 5000)       // 20%
        {
            DiscountAmount = ((float)Amount * (float)0.2);
        }
        else if(Amount > 2000)  // 10%              
        {
            DiscountAmount = ((float)Amount * (float)0.1);
        }
        else                    // 0%
        {
            DiscountAmount = (float)0.0;
        }

        FinalAmount = Amount - DiscountAmount;

        if(MembershipType.equalsIgnoreCase("Premium"))
        {
            DiscountAmount = DiscountAmount + (FinalAmount * (float)0.05);
            FinalAmount = Amount - DiscountAmount;
        }

        System.out.println("Original Amount : "+Amount);
        System.out.println("Total Discount : "+DiscountAmount);
        System.out.println("Final Payable Amount : "+FinalAmount);

        sobj.close();
    }
}