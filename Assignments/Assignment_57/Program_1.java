// 1. Write a java prgram to accept two file names from user and open first
//    file and create new file(Second Name) and copy the data from first file into
//    newly created file.
import java.io.*;
import java.util.Scanner;
class program_1
{
    public static void main(String A[])
    {
        try 
        {
            Scanner sobj = new Scanner(System.in);

            String FileName1;
            System.out.print("Enter the name if the file : ");
            FileName1 = sobj.nextLine();

            File f1 = new File(FileName1);

            if (!f1.exists()) 
            {
                System.out.println("Source File does not EXIsTS");
                return;
            }
            FileReader fr = new FileReader(f1);
            

            String FileName2;
            System.out.print("Enter the name if the file : ");
            FileName2 = sobj.next();

            File f2 = new File(FileName2);

            if (f2.createNewFile()) 
            {
                System.out.println("File created successfully");
            } else
            {
                System.out.println("File already exists");
            }

            FileWriter fw = new FileWriter(f2);
            int ch;
            while ((ch = fr.read()) != -1)
            {
                fw.write(ch);
            }

            fr.close();
            fw.close();
            sobj.close();

            System.out.println("File copied successfully");
        } 
        catch (IOException e) 
        {
            System.out.println("An error Occurred : "+e.getMessage());
        }
    }
}
