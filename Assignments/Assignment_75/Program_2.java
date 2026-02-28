import java.util.Scanner;

class Banking
{
    public void CheckLoan(int Age, int Income, int Score, String ExistingLoan)
    {
        if(Age <= 21 || Age >= 60)
        {
            System.out.println("Loan Rejected : Age Must be between 21 to 60");
        }
        else if(Income <= 25000)
        {
            System.out.println("Loan Rejected : Monthly Income must be 25000 or Above");
        }
        else if(Score <= 700)
        {
            System.out.println("Loan Rejected : Credit Score must be at least 700");
        }
        else if(ExistingLoan.equalsIgnoreCase("Yes"))
        {
            System.out.println("Loan Rejected : Applicant has an Existing unpaid Loan");
        }
        else
        {
            System.out.println("Loan Approved");
        }
    }
}

class program_2
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);
        
        int Age = 0;
        int Income = 0;
        int Score = 0;

        String ExistingLoan = null;

        System.out.print("Enter the Age of Applicant : ");
        Age = sobj.nextInt();
        
        System.out.print("Enter the Monthly Income of Applicant : ");
        Income = sobj.nextInt();
        
        System.out.print("Enter the Credit Score of Applicant : ");
        Score = sobj.nextInt();
        
        System.out.print("Enter the Existing unpaid Loan (Yes/No) : ");
        ExistingLoan = sobj.next();

        // Validation
        if(Age < 0 || Income < 0 || Score < 0)
        {
            System.out.println("Loan Rejected : Age/Income/Score must be non-negative !");
            return;
        }

        if(!(ExistingLoan.equalsIgnoreCase("Yes") ||
            ExistingLoan.equalsIgnoreCase("No")))
        {
            System.out.println("Loan Rejected : Yes/No must be valid");
            return;
        }

        Banking bobj = new Banking();
        bobj.CheckLoan(Age,Income,Score,ExistingLoan);

        sobj.close();
    }
}