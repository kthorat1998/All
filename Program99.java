//accept number fromo user and position from user and toggle the bit of that position
import java.lang.*;
import java.util.*;
// 0000 0100 0000 0000 0000 0000 0000 0000
// 0 	 0	 0		0   0	0	  0      0
class Bitwise
{
	public int ToggleBit(int iNo,int iPos)
	{
		if((iPos<=0)||(iPos>32))
		{
			System.out.println("invalid Position:");
			
			return 0;
		}
	   int iMask=0X00000001;
	   int iResult=0;
	   
	   iMask=iMask<<(iPos-1);
	   
	   iResult=iNo ^ iMask;
	   
	   return iResult;

	}
}
class Program99
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("enter the number:");
		int Value1=sobj.nextInt();
		
		System.out.println("enter the Position :");
		int Value2=sobj.nextInt();
		
	   Bitwise bobj=new Bitwise();
	 int iRet= bobj.ToggleBit(Value1,Value2);
	 
		 System.out.println("Updated number is:"+iRet);
	
	    bobj=null;
	}
}