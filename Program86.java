import java.lang.*;
import java.util.*;

class Pattern
{
	private int iRow,iCol;
	
	public Pattern(int a,int b)
	{
		this.iRow=a;
		this.iCol=b;
		
	}
	
/*  $  *   *  *
	#  $  *  *
	#  #  $  *
	#  #  #  $
	*/
	public void Display()
	{
		int i=0,j=0;
		if(iRow!=iCol)
		{
			System.out.println("invalid rows and col");
			return;
		}
		for(i=1;i<=iRow;i++)
		{
			for(j=1;j<=iCol;j++)
			{
				if(i==j)
				{
					System.out.print("$\t");
				}
				else if(i<j)
				{
					System.out.print("*\t");
				}
				else if(i>j)
				{
					System.out.print("#\t");
				}
			}
			System.out.println("\n");
		}
	}
	
/*	* * * *
	* & & *
	* & & *
	* * * *
*/
	void Display1()
	{
		int i=0,j=0;
		
		for(i=1;i<=iRow;i++)
		{
			for(j=1;j<=iCol;j++)
			{
				if((i==1)||(j==1)||(i==iCol)||(j==iRow))
				{
					System.out.print("*\t");
				}
				else
				{
					System.out.print("&\t");
				}
			}
			System.out.println("\n");
		}
	}
/*  * * * *
    *     *
	*     *
	* * * *
*/
void Display2()
	{
		int i=0,j=0;
		
		for(i=1;i<=iRow;i++)
		{
			for(j=1;j<=iCol;j++)
			{
				if((i==1)||(j==1)||(i==iCol)||(j==iRow))
				{
					System.out.print("*\t");
				}
				else
				{
					System.out.print(" \t");
				}
			}
			System.out.println("\n");
		}
	}
/*  * * * *
    * *   *
	*   * *
	* * * *
*/
void Display3()
	{
		int i=0,j=0;
		
		for(i=1;i<=iRow;i++)
		{
			for(j=1;j<=iCol;j++)
			{
				if((i==1)||(j==1)||(i==iCol)||(j==iRow))
				{
					System.out.print("*\t");
				}
				else if(i==j)
				{
					System.out.print("*\t");
				}
				else
				{
					System.out.print(" \t");
				}
			}
			System.out.println("\n");
		}
	}
/* * * * *
   * * & *
   * # * *
   * * * *
*/
void Display4()
	{
		int i=0,j=0;
		
		for(i=1;i<=iRow;i++)
		{
			for(j=1;j<=iCol;j++)
			{
				if((i==1)||(j==1)||(i==iCol)||(j==iRow))
				{
					System.out.print("*\t");
				}
				else if(i==j)
				{
					System.out.print("*\t");
				}
				else if(i<j)
				{
					System.out.print("&\t");
				}
				else if(i>j)
				{
					System.out.print("#\t");
				}
			}
			System.out.println("\n");
		}
	}

}
class Program86
{
	
	public static void main(String arg[])
	{
		int iValue1=0,iValue2=0;
		
		System.out.println("enter number of rows");
		Scanner sobj=new Scanner(System.in);
		iValue1=sobj.nextInt();
		
		System.out.println("enter number of col");
		iValue2=sobj.nextInt();
		
		Pattern obj=new Pattern(iValue1,iValue2);
        
		obj.Display();
		
		obj.Display1();
		obj.Display2();
		obj.Display3();
		obj.Display4();
		obj=null;
	}
}