/*
Enter number:
4
Modified number is: 4026531851
*/
import java.util.*;

class program_5
{
    public static void main(String[] A)
    {
        long iNo = 0;
        long iMask = 0xF000000FL;
        long iResult = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number: ");
        iNo = sobj.nextLong();

        iResult = iNo ^ iMask;

        System.out.println("Modified number is: " + iResult);
    }
}
