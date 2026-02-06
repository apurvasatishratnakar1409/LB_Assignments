/*
Enter the number:
73
Modified number is: 79
*/
import java.util.*;

class program_5
{
    public static void main(String[] A)
    {
        int iNo = 0, iMask = 0, iResult = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number: ");
        iNo = sobj.nextInt();

        iMask = 0x0000000F;   

        iResult = iNo | iMask;

        System.out.println("Modified number is: " + iResult);
    }
}
