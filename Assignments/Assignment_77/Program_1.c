import java.util.Scanner;

class Hospital
{
    public void Insurance(int Days, int MedicineBill, int ConsultaionFee, String WardType, String Insured)
    {
        int TotalBill = 0;
        int InsuranceCover = 0;
        int FinalBill = 0;
        int RoomCharges = 0;
        int ICUCharges = 0;
        float Discount = 0;

        if(WardType.equalsIgnoreCase("Normal"))
        {
            RoomCharges = 2000;
        }
        else if(WardType.equalsIgnoreCase("ICU"))
        {
            ICUCharges = 3000 * Days;
        }

        TotalBill = ConsultaionFee + MedicineBill + (RoomCharges * Days) + ICUCharges;

        if(Insured.equalsIgnoreCase("Yes"))
        {
            Discount = (TotalBill * 0.70f);

            if(Discount < 50000)
            {
                InsuranceCover = (int)Discount;
            }
            else
            {
                InsuranceCover = 50000;
            }
        }

        FinalBill = TotalBill - InsuranceCover;

        System.out.println("Total Bill : "+TotalBill);
        System.out.println("Insurance Covered : "+InsuranceCover);
        System.out.println("Final Pay : "+FinalBill);
    }
}

class program_1
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);
        
        int Days = 0;
        int MedicineBill = 0;
        int ConsultaionFee = 0;

        String WardType = null;
        String Insured = null;

        System.out.print("Enter Days to be Admitted : ");
        Days = sobj.nextInt();

        System.out.print("Enter in Which ward you are (Normal/ICU) : ");
        WardType = sobj.next();

        System.out.print("Enter Medicine Bill : ");
        MedicineBill = sobj.nextInt();

        System.out.print("Enter Consultation Fee : ");
        ConsultaionFee = sobj.nextInt();

        System.out.print("Are you Insured (Yes/No) : ");
        Insured = sobj.next();

        if((Days < 0 || MedicineBill < 0 || ConsultaionFee < 0) || 
            (!WardType.equalsIgnoreCase("Normal") && !WardType.equalsIgnoreCase("ICU")) || 
            (!Insured.equalsIgnoreCase("Yes") && !Insured.equalsIgnoreCase("No")))
        {
            System.out.println("Invalid Input !");
            return;   
        }

        Hospital hobj = new Hospital();
        hobj.Insurance(Days, MedicineBill, ConsultaionFee, WardType, Insured);

        sobj.close();
    }
}
