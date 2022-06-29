//check Armstrong=123

import java.lang.*;
import java.util.*;

class Number
{
	private int iNo;
    public void Accept()
	{
		Scanner sobj= new Scanner(System.in);
		
		System.out.println("enter the number:");
		
		this.iNo=sobj.nextInt();
		if(iNo<0)
		{
			iNo=-iNo;
		}
	}
	public int CheckArmStrong()
	{ int icnt=0;
			
			int iSum=0,iDigit=0;
		int temp=0,iCount=0;
		temp=iNo;
		while(iNo!=0)
		{
			iCount++;   //count digit
			iNo=iNo/10;
		}
		iNo=temp;
		
		while(iNo!=0)
		{ int iMult=1;
			iDigit=iNo%10;
			for(icnt=1;icnt<=iCount;icnt++)
			{
				iMult=iMult*iDigit;
			}
			iSum=iSum+iMult;
			iNo=iNo/10;
		}
		if(iSum==temp)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}
class Program80
{
	public static void main(String arg[])
	{
		int iRet;
		Number nobj=new Number();
		
		nobj.Accept();
		iRet=nobj.CheckArmStrong();
		if(iRet==1)
		{
			System.out.println("number is ArmStrong");
		}
		else
		{
			System.out.println("number is not ArmStrong");
		}	
		
		
		
	}
}