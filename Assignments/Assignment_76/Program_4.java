import java.util.Scanner;

class Scolarship
{
    public String Chekist(int Marks, int Attendence, int Income)
    {
        if(Marks < 80)
        {
            return "Scolarship Rejected : Marks Less Than 80%";
        }
        else if(Attendence < 75)
        {
            return "Scolarship Rejected : Attendence is low than 75%"; 
        }
        else if(Income > 300000)
        {
            return "Scolarship Rejected : Family Income exceeds 3lac";
        }
        else
        {
            return "Scolarship Approved";
        }
    }
} 

class program_4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Marks = 0;
        int Attendence = 0;
        int Familyincome = 0;

        System.out.println("Enter Marks : ");
        Marks = sobj.nextInt();

        System.out.println("Enter Attendence : ");
        Attendence = sobj.nextInt();

        System.out.println("Enter Family Income : ");
        Familyincome = sobj.nextInt();

        if((Marks <= 0 || Marks >= 100) || (Attendence <= 0 || Attendence >= 100) || (Familyincome < 0))
        {
            System.out.println("Invalid Input !");
            return;
        }

        Scolarship scobj = new Scolarship();
        String sRet = scobj.Chekist(Marks, Attendence, Familyincome);

        System.out.println(sRet);
    }
}