//5. Write a program in java which accepts file name freom user and handle all possible file related exceptions properly.

import java.io.*;
import java.util.Scanner;

class program_5
{
    public static void main(String A[])
    {
        Scanner sobj = null;
        FileInputStream fisobj = null;
        
        try
        {
            sobj = new Scanner(System.in);
            
            System.out.println("Enter the name of file: ");
            String FileName = sobj.nextLine();
            
            File fobj = new File(FileName);
            
            if(!fobj.exists())
            {
                System.out.println("Error: File does not exist!");
                return;
            }
            
            if(!fobj.isFile())
            {
                System.out.println("Error: The path is a directory, not a file!");
                return;
            }
            
            if(!fobj.canRead())
            {
                System.out.println("Error: File is not readable! Check permissions.");
                return;
            }
            
            fisobj = new FileInputStream(fobj);
            
            int data;
            int bytesRead = 0;
            
            System.out.println("Reading file...");
            
            while((data = fisobj.read()) != -1)
            {
                bytesRead++;
            }
            
            System.out.println("Successfully read " + bytesRead + " bytes from '" + FileName + "'");
        }
        catch(FileNotFoundException e)
        {
            System.out.println("FileNotFoundException: File not found or cannot be opened!");
            System.out.println("Details: " + e.getMessage());
        }
        catch(IOException e)
        {
            System.out.println("IOException: Error while reading the file!");
            System.out.println("Details: " + e.getMessage());
        }
        catch(SecurityException e)
        {
            System.out.println("SecurityException: Access denied due to security restrictions!");
            System.out.println("Details: " + e.getMessage());
        }
        catch(Exception e)
        {
            System.out.println("Unexpected Exception occurred!");
            System.out.println("Details: " + e.getMessage());
        }
        
        try
        {
            if(fisobj != null)
            {
                fisobj.close();
                System.out.println("File stream closed successfully.");
            }
        }
        catch(IOException e)
        {
            System.out.println("Error while closing file stream: " + e.getMessage());
        }
        
        if(sobj != null)
        {
            sobj.close();
        }
    
    }
}