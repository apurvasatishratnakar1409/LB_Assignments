//3. Write a java program to accept file name from user and open that file in write mode and write some data at end of file.
import java.io.*;
import java.util.Scanner;

class program_3
{
    public static void main(String A[])
    {
        try
        {
            int ch = 0;
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

            System.out.println("Opening file...\nEnter contents to write at the end: \n");

            FileWriter fw = new FileWriter(f,true);
            String TextWrite = sobj.nextLine();

            fw.write(TextWrite+"\n");
            fw.close();

            FileReader fr = new FileReader(f);

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