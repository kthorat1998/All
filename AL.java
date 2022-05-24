import java.lang.*;
import java.util.*;

class AL
{
	public static void main(String arg[])
	{
      ArrayList<String> obj=new ArrayList<String>();
	  obj.add("january");
	  obj.add("february");
	  obj.add("march");
	  obj.add(2,"New");
	   obj.add("April");
	   obj.add("Marvellous");
	    obj.add("Marvellous");
		 obj.add("Marvellous");
	   
	  System.out.println("Arraylist contain"+obj);
   System.out.println("size is:"+obj.size());
   
 
   System.out.println("Element using loop");
   for(int i=0;i<obj.size();i++)
   {
	   System.out.println(obj.get(i));
   }
   
   String str;
   int icnt=0;
   for(int i=0;i<obj.size();i++)
   {
	   str=obj.get(i);
	   if(str.equals("Marvellous"))
	   {
		   icnt++;
	   }
   }
   System.out.println("Marvellous occure at"+icnt+"times in array");
   if(obj.contains("April"))
   {
	   System.out.println("Element is there");
   }
   int ret=obj.indexOf("April");
   System.out.println("element is at"+ret);
   
   System.out.println("element at index 3 is"+obj.get(3));
   obj.remove(3);
   obj.remove("New");
   System.out.println("updated list is:"+obj);
   obj.clear();
    System.out.println("updated list is:"+obj);
	}
}