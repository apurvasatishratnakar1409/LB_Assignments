//1. Write a java program to accept file name from user and open that file.
import java.io.File;
import java.io.IOException;
import java.util.Scanner;
class program1
{
    public static void main(String A[])
    {
        try 
        {
            Scanner sobj = new Scanner(System.in);

            String FileName;
            System.out.print("Enter the name if the file : ");
            FileName = sobj.next();

            File f = new File(FileName);

                if (f.createNewFile()) 
                {
                    System.out.println("File created successfully");
                } else
                {
                    System.out.println("File already exists");
                }
        } 
        catch (IOException e) 
        {
            System.out.println("Error creating file");
        }
    }
}
