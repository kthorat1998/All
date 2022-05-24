import java.lang.*;

  abstract class Demo
{
	public int i,j;
	
	public Demo()
	{
		System.out.println("Demo Costruction");
	}
	public  void fun()
	{
		System.out.println("Demo fun");
	}
	public abstract void gun();
}
class hello extends Demo
{
	public int x,y;
	public hello()
	{
		System.out.println("hello construction");
	}
	public void gun()
	{
		System.out.println("hello  gun");
	}
/*	public void fun();
	{
		System.out.println("hello fun");
	}*/
	public void sun()
	{
		System.out.println("hello sun");
	}
}
class AbstractDemo
{
	public static void main(String arg[])
	{
		System.out.println("inside main");
		//Demo obj=new Demo();
		hello  hobj=new hello();
		hobj.fun();
		hobj.gun();
		hobj.sun();
	}
}
