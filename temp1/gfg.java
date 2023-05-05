import java.util.*;
// import java.io.*;

class Student {
	String str;

	Student(String str) {
		this.str = str;
	}

	@Override
	public String toString() {
		return str;
	}
}

public class gfg {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Student[] stu = new Student[] { new Student(sc.nextLine()) };
		for (Student e : stu) {
			System.out.println(e);
		}
		System.out.println("Hello World");
	}
}