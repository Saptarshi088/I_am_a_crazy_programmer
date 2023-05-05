import java.util.*;
import java.io.*;

class hello{
	public static void display(){
		System.out.println("Hello, I am from A Class named hello");
	}
}

class Another extends hello{
	public static int new1(){
		return 1;		
	}
}

public class oops{
	public static void main(String[] args){
		hello a = new Another();
		a.display();
		//System.out.println(a.new1());
	}
}
	
