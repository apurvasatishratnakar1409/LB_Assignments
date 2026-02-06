/*
Enter the Number
137
Enter the Position
7
Updated number : 201
*/
import java.util.Scanner;
class program_3
{
    public static void main(String[] A) 
    {
        int iNo =0 , iMask = 0x1 ,iPos = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number");
        iNo = sobj.nextInt();

        
        System.out.println("Enter the Position");
        iPos = sobj.nextInt();

        iMask = iMask << (iPos -1);

        iNo = iNo ^ iMask;

        System.out.println("Updated number : "+iNo);

    }
} 