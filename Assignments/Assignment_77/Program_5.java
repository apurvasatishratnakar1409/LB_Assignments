import java.util.*;

class Theatre
{
    private boolean seats[][];   
    private int rowPrice[];      
    private int rows;
    private int cols;

    public Theatre(int r, int c)
    {
        rows = r;
        cols = c;
        seats = new boolean[rows][cols];
        rowPrice = new int[rows];

        for(int i = 0; i < rows; i++)
        {
            rowPrice[i] = 100 + (i * 50);
        }
    }

    public void bookInitialSeats(List<int[]> bookedList)
    {
        for(int[] seat : bookedList)
        {
            seats[seat[0]][seat[1]] = true;
        }
    }

    public void bookSeats(List<int[]> requestList)
    {
        float totalCost = 0;

        for(int[] seat : requestList)
        {
            int r = seat[0];
            int c = seat[1];

            if(seats[r][c] == true)
            {
                System.out.println("Fail: Seat (" + r + "," + c + ") already booked");
                return;
            }
        }

        for(int[] seat : requestList)
        {
            int r = seat[0];
            int c = seat[1];

            totalCost = totalCost + rowPrice[r];
            seats[r][c] = true;
        }

        if(requestList.size() >= 6)
        {
            totalCost = totalCost - (totalCost * 0.10f);
            System.out.println("10% Group Discount Applied");
        }

        int remaining = 0;
        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                if(seats[i][j] == false)
                    remaining++;
            }
        }

        System.out.println("Success");
        System.out.println("Total Cost: " + totalCost);
        System.out.println("Remaining Seats: " + remaining);
    }
}

public class program_5
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Rows: ");
        int rows = sc.nextInt();

        System.out.print("Enter Columns: ");
        int cols = sc.nextInt();

        Theatre theatre = new Theatre(rows, cols);

        List<int[]> bookedSeats = new ArrayList<>();
        bookedSeats.add(new int[]{0,1});
        bookedSeats.add(new int[]{2,2});

        theatre.bookInitialSeats(bookedSeats);

        List<int[]> requestSeats = new ArrayList<>();

        System.out.print("Enter number of seats to request: ");
        int n = sc.nextInt();

        for(int i = 0; i < n; i++)
        {
            System.out.print("Enter row and column: ");
            int r = sc.nextInt();
            int c = sc.nextInt();
            requestSeats.add(new int[]{r,c});
        }

        theatre.bookSeats(requestSeats);

        sc.close();
    }
}