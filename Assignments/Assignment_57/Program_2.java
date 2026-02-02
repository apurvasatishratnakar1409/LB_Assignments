// 1. Write a java prgram to accept two file names from user and check whether
//    that file is regular file or not
import java.io.*;
import java.util.Scanner;
class program_2
{
    public static void main(String A[])
    {
        {
            Scanner sobj = new Scanner(System.in);

            String FileName;
            System.out.print("Enter the name if the file : ");
            FileName = sobj.nextLine();

            File f1 = new File(FileName);

            if (!f1.exists()) 
            {
                System.out.println("File does not EXISTS");
                return;
            }
            if (!f1.isFile()) 
            {
                System.out.println(FileName+" is not a Regular File\n");
            }
            else
            {
                System.out.println(FileName+" is a Regular File\n");
            }

            sobj.close();
        }
    }
}