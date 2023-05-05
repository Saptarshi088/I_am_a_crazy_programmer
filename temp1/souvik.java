import java.util.*;
import java.io.*;

public class souvik{
	public static void main(String[] args)
	throws IOException
	{
		BufferedReader bf = new BuffereidReader(new InputStreamReader(System.in));
		int a = Integer.parseInt(bf.readLine());
		//System.out.println(a);
		int b = Integer.parseInt(bf.readLine());
		System.out.println("The Sumation of the inputed NUMBER:"+sum(a,b));
	}	
	public static int sum(int a, int b){
		return a+b;
	}
}
