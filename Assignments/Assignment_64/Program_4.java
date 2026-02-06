/*
Enter the number:
135282752
7th, 15th, 21st and 28th bits are ON

Enter the number:
456787698
7th, 15th, 21st and 28th bits are OFF
*/
import java.util.*;

class program_4{
    public static void main(String[] A) 
    {
        int iNo = 0, iMask = 0, iResult = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number: ");
        iNo = sobj.nextInt();

        iMask = 0x08104040;

        iResult = iNo & iMask;

        if(iResult == iMask)
        {
            System.out.println("7th, 15th, 21st and 28th bits are ON");
        }
        else
        {
            System.out.println("7th, 15th, 21st and 28th bits are OFF");
        }
    }
}
