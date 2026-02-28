import java.util.Scanner;

class Warehouse
{
    public void CheckStock(int CurrentStock, int RequestWithdraw)
    {
        int quantity = 0;

        if(RequestWithdraw > CurrentStock)
        {
            System.out.println("Order Fails");
        }
        else
        {
            quantity = CurrentStock - RequestWithdraw;
            System.out.print("Remaining Stock : "+quantity);

            if(quantity < 5)
            {
                System.out.println(" Low stock !");
            }
        }
    }
}

class program_3
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);
        
        int CurrentStock = 0;
        int RequestWithdraw = 0;

        System.out.print("Enter the current stock : ");
        CurrentStock = sobj.nextInt();

        System.out.print("Enter the stock to withdrawal : ");
        RequestWithdraw = sobj.nextInt();

        if(CurrentStock <= 0)
        {
            System.out.println("stock can not be 0");
            return;
        }

        if( RequestWithdraw < 0)
        {
            System.out.println("Request quantity must be greater than 0");
            return;
        }

        Warehouse wobj = new Warehouse();
        wobj.CheckStock(CurrentStock, RequestWithdraw);

        sobj.close();
    }
}