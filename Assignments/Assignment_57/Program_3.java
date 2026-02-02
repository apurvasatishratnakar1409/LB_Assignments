//3. Write a java program to accept file name from the user and create that directory
import java.io.File;
import java.util.Scanner;
class program_3
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.print("Enter the name of Directory : ");
        String dirName = sobj.nextLine();
        
        File dir = new File(dirName);

        if(dir.exists())
        {
            System.out.print("Given Directory already exists\n");
            System.out.print("Enter Another name for Directory\n");
        }
        else
        {
            if(dir.mkdir())
            {
                System.out.println("Directory Created Successfully\n");
            }
            else
            {
                System.out.println("Failed to create directory\n");
            }
        }
        
        sobj.close();
    }
}