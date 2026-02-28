import java.util.Scanner;

class Store
{
    public void Customer(int Budget, int NumberItem, int ItemPrices)
    {
        int itempurchase = 0;
        int RemainingBalance = 0;

        itempurchase = Budget / ItemPrices;

        if(itempurchase > NumberItem)
        {
            itempurchase = NumberItem;
        }

        RemainingBalance = Budget - (itempurchase * ItemPrices);
        
        System.out.println("Item Purchased : "+itempurchase);
        System.out.println("Remaining Balace : "+RemainingBalance);
    }
}

class program_2
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        int Budget = 0;
        int NumberItem = 0;
        int ItemPrices = 0;

        System.out.println("Enter the Budget : ");
        Budget = sobj.nextInt();

        System.out.println("Number of items : ");
        NumberItem = sobj.nextInt();

        System.out.println("Item Price : ");
        ItemPrices = sobj.nextInt();

        if(Budget <= 0 || NumberItem <= 0 || ItemPrices < 0)
        {
            System.out.println("Invalid Input !");
            return;
        }

        Store obj = new Store();
        obj.Customer(Budget, NumberItem, ItemPrices);

        sobj.close();
    }
}