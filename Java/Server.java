// A Java program for a Server
import java.io.*;
import java.net.*;
import java.util.*;

public class Server {
	private Socket socket = null;
	public Server(int port)
	{
		try {
			
			ServerSocket ss = new ServerSocket(port);
			Socket s = ss.accept();

			
			DataInputStream dis
				= new DataInputStream(s.getInputStream());
			DataOutputStream dos
				= new DataOutputStream(s.getOutputStream());

			while (true) {
				String input = dis.readUTF();
				if (input.equals("bye"))
					break;
				System.out.println("Equation Received");
				int result = 0;

				StringTokenizer st
					= new StringTokenizer(input);
				int oprnd1
					= Integer.parseInt(st.nextToken());
				String operation = st.nextToken();
				int oprnd2
					= Integer.parseInt(st.nextToken());

				
				if (operation.equals("+")) {
					result = oprnd1 + oprnd2;
				}
				else if (operation.equals("-")) {
					result = oprnd1 - oprnd2;
				}
				else if (operation.equals("/")) {
					result = oprnd1 / oprnd2;
				}
				else if (operation.equals("*")) {
					result = oprnd1 * oprnd2;
				}
				System.out.println("Sending the Result");
				dos.writeUTF(Integer.toString(result));
			}
		}
		catch (Exception e) {
			System.out.println("Error");
		}
	}

	public static void main(String args[])
	{
		System.out.println("!SERVER ONLINE!");
		Server server = new Server(5000);
	}
}
