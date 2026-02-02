//2. Write a java program to accept file name from user and open that file and display the contents on screen.
import java.io.*;
import java.util.Scanner;

class program_2
{
    public static void main(String A[])
    {
        try
        {
            Scanner sobj = new Scanner(System.in);

            System.out.print("Enter the name of the file: ");
            String FileName = sobj.nextLine();

            File f = new File(FileName);

            if (f.createNewFile())
            {
                System.out.println("File did not exist. New file created.\n");
            }
            else
            {
                System.out.println("File already exists.\n");
            }

            System.out.println("Opening file and reading contents: \n");

            FileReader fr = new FileReader(f);

            int ch;
            while ((ch = fr.read()) != -1)
            {
                System.out.print((char) ch);
            }

            fr.close();
            sobj.close();
        }
        catch (IOException e)
        {
            System.out.println("Error while creating or reading the file");
        }
    }
}