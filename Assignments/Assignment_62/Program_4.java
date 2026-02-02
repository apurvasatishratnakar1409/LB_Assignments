//4. Write a program in Java which accepts file name integer N from user and create a backup copy of it with name original_backup.ext.
//4. Write a program in Java which accepts file name from user and create a backup copy of it with name original_backup.ext.

import java.io.*;
import java.util.Scanner;

class program_4
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of file to backup: ");
        String FileNameSrc = sobj.nextLine();

        File fobjsrc = new File(FileNameSrc);
        
        if(!fobjsrc.exists() || !fobjsrc.isFile())
        {
            System.out.println("Enter a Valid File Name");
            sobj.close();
            return;
        }

        int dotIndex = FileNameSrc.lastIndexOf('.');
        String FileNameDest;
        
        if(dotIndex == -1)
        {
            FileNameDest = FileNameSrc + "_backup";
        }
        else
        {
            FileNameDest = FileNameSrc.substring(0, dotIndex) + "_backup" + FileNameSrc.substring(dotIndex);
        }

        File fobjdest = new File(FileNameDest);

        if(fobjdest.exists())
        {
            System.out.println("Backup file already exists: " + FileNameDest);
            sobj.close();
            return;
        }
        
        FileInputStream fisobj = new FileInputStream(fobjsrc);
        FileOutputStream fosobj = new FileOutputStream(fobjdest);
        
        int data;
        int bytesRead = 0;

        while((data = fisobj.read()) != -1)
        {
            fosobj.write(data);
            bytesRead++;
        }
        
        System.out.println("Successfully created backup : " + FileNameDest);
        System.out.println("Total bytes of file made : " + bytesRead);
        
        fisobj.close();
        fosobj.close();
        sobj.close();
    }
}