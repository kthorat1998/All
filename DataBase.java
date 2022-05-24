import java.lang.*;
import java.sql.*;

class DataBase
{
	public static void main(String arg[])
	{
		try
		{
			Class.forName("com.mysql.jdbc.Driver");
			
		Connection con=DriverManager.getConnection("jdbc::mysql://localhost:3306/Marvellous","root","root");
		
          Statement stmt=con.createStatement();

ResultSet rs=stmt.executeQuery("select*from student");

while(rs.next())
{
	System.out.println(rs.getInt(1)+" "+rs.getString(2)+" "+rs.getInt(3)+" "+rs.getString(4));
}
con.close();
}	
catch(Exception obj)
{
	System.out.println("Exception ocuured:"+obj);
}
		}
	
}