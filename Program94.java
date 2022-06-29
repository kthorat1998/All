//Accept number from user and check its 14 bit is on or off

import java.lang.*;
import java.util.*;
// 0000 0000 0000 0000 0000 0000 0000 0000
// 0 	0		0	0   2	0		0	0
class Bitwise
{
	public boolean CheckBit(int iNo)
	{
	   int iMask=0X00002000;
	   
       int iResult=0;
	   
	   iResult=iNo & iMask;
	   if(iResult==0)
	   {
		   return false;
	   }
	   else
	   {
		   return true;
	   }
	}
}
class Program94
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("enter the number:");
		int Value=sobj.nextInt();
		
	   Bitwise bobj=new Bitwise();
	 boolean bRet= bobj.CheckBit(Value);
	 if(bRet==true)
	 {
		 System.out.println("bit is on");
	 }
	 
	 else
	 {
		 System.out.println("bit is off");
	 }
	
	bobj=null;
	}
}