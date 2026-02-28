import java.util.*;

class program_2
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Please Enter Your Current Balance : Rs.");
        int Current_balance = sobj.nextInt();

        System.out.print("Please enter the ammmounnt that you want to withdraw : Rs.");
        int Withdraw_amount = sobj.nextInt();
        
        // Filter
        if(Current_balance < 0 || Withdraw_amount <= 0)
        {
            System.out.println("Invalid Input !");
            return;
        }

        if(Withdraw_amount % 100 != 0)
        {
            System.out.println("Transaction failed: Withdraw amount must be multiple of Rs.100");
        }
        else if(Withdraw_amount >= 25000)
        {
            System.out.println("Transaction failed: Maximum withdrawl per transaction is Rs.25000");
        }
        else if(Current_balance - Withdraw_amount < 1000)
        {
            System.out.println("Transaction failed: After withdrawal balance must remain at least Rs.1000");
        }
        else
        {
            System.out.println("Transaction Succesful.");
            System.out.println("Remaining Balance: "+(Current_balance-Withdraw_amount));
        }
        sobj.close();
    }
}