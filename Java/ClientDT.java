import java.io.*;
import java.net.*;

public class ClientDT 
{
	public static void main(String args[]) throws IOException
	{
		
            Socket objclient = new Socket("localhost",9005);
		
		DataOutputStream dout=new DataOutputStream(objclient.getOutputStream());
		dout.writeUTF("\nRequest for DATE: " + "\n");
DataInputStream din=new DataInputStream(objclient.getInputStream());
		String msg2=din.readUTF();
		System.out.println("FROM SERVER" + msg2.toUpperCase());
	}
}

