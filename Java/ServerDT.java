import java.io.*;
import java.net.*;
import java.util.*;


public class ServerDT {
	public static void main(String a[]) throws IOException
	{
	    System.out.println("\nWELCOME");
	    ServerSocket ss=new ServerSocket(9005); 
	    System.out.println("\n SERVER ONLINE");
	    
	    Socket serobj=ss.accept(); //binding
	DataInputStream din=new DataInputStream(serobj.getInputStream());
		String msg=din.readUTF();
	    System.out.println("FROM CLIENT: " + msg);
	    
	    DataOutputStream dout=new DataOutputStream(serobj.getOutputStream());
		dout.writeUTF("\nSERVER: " + "TODAY IS = " +(new Date()).toString()+ "\n");
	    	 
	
	}

}
