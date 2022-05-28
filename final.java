import java.lang.*;
 class Demo
 {
	 public
	 int i,j;
	 
	public Demo()
	 {
		 this.i=0;
		 this.j=0;
	 }
	public Demo(int i,int j)
	 {
		 this.i=i;
		 this.j=j;
	 }
	public void fun()
	 {
		 System.out.priintl("inside base fun");
	 }
	 public final void gun()
	 {
		 System.out.println("inside  base  final gun");
	 }
 }
 class Derived extends Base
 {
	 public int x,int y;
	 
	 public Derived()
	 {
		Sytem.out.printf("inside Derived construction");
	 }
	 public void fun()
	 {
		 System.out.println("inside Derived fun");
	 }
	 public void gun()
	 {
		 System.out.println("inside Deived gun");
	 }
 }
class final
{
	public static void main(String arg[])
	{
		System.out.println("inside main..");
		Base obj=new Derived();
		obj.fun();
		obj.gun();
	}
}