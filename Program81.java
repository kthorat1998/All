import java.lang.*;
import java.util.*;

class ArrayX
{
	private int Arr[];
	
	public ArrayX(int iNo)
	{
		Arr= new int[iNo];
	}
   public void Accept()
   {
	   int icnt=0;
	   Scanner sobj=new Scanner(System.in);
	   System.out.println("enter the  data of array:");
	  for(icnt=0;icnt<Arr.length;icnt++)
	   {
		   Arr[icnt]=sobj.nextInt();
	   }
   }
   public void Display()
   {int icnt=0;
	   System.out.println("Display data from array:");
	   for(icnt=0;icnt<Arr.length;icnt++)
	   {
		   System.out.println(Arr[icnt]);
	   }
   }
}
class Program81
{
	public static void main(String arg[])
	{ int iSize=0;
		
		
		System.out.println("enter the size of array:");
		Scanner sobj=new Scanner(System.in);
		iSize=sobj.nextInt();
		
		ArrayX obj=new ArrayX(iSize);
		obj.Accept();
		obj.Display();
		
		
		obj=null;
	}
}