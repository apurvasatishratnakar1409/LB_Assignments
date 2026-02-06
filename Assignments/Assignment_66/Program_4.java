/*
Enter number:
10
Enter position:
3
Modified number is: 14
*/
import java.util.*;

class program_4
{
    public static void main(String[] A)
    {
        int iNo = 0, iPos = 0;
        int iMask = 0x1, iResult = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number: ");
        iNo = sobj.nextInt();

        System.out.println("Enter position: ");
        iPos = sobj.nextInt();

        iMask = iMask << (iPos - 1);

        iResult = iNo ^ iMask;

        System.out.println("Modified number is: " + iResult);
    }
}
