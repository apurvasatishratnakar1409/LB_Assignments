//3. Write a program in Java which accepts file name integer N from user and copy last N bytes into a new file.

import java.io.*;
import java.util.Scanner;

class program_3
{
    public static void main(String A[]) throws Exception
    {
        String FileNameSrc = null;
        String FileNameDest = null;
        File fobjsrc = null;
        File fobjdest = null;
        int iValue = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of Source file : ");
        FileNameSrc = sobj.nextLine();

        fobjsrc = new File(FileNameSrc);
        
        if(!fobjsrc.exists() || !fobjsrc.isFile())
        {
            System.out.println("Enter a Valid File Name");
            sobj.close();
            return;
        }

        System.out.println("Enter the name of Destination file : ");
        FileNameDest = sobj.nextLine();


        fobjdest = new File(FileNameDest);

        if(fobjdest.exists())
        {
            System.out.println("Enter a new Files name as a Destination file");
            sobj.close();
            return;
        }

        System.out.println("Enter the number of bytes to be read : ");
        iValue = sobj.nextInt();
        
        fobjdest.createNewFile();
        
        FileInputStream fisobj = new FileInputStream(fobjsrc);
        FileOutputStream fosobj = new FileOutputStream(fobjdest);
        
        long FileSize =  fobjsrc.length();

        long skipBytes = FileSize - iValue;
       
        if(skipBytes < 0)
        {
            skipBytes = 0;
        }

        fisobj.skip(skipBytes);

        int data;
        int bytesRead = 0;

        while((data = fisobj.read()) != -1)
        {
            fosobj.write(data);
            bytesRead++;
        }
        
        System.out.println("Successfully copied last " + bytesRead + " bytes from '" + FileNameSrc + "' to '" + FileNameDest + "'");
        
        fisobj.close();
        fosobj.close();
        sobj.close();

    }

}