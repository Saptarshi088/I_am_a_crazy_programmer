import java.util.*;
import java.io.*;


class student{
	String str;
	student(String str){
		this.str=str;
	}
	@Override
	public String toString(){
		return str;
	}
}

public class new2{
	public static void main(String[] args)throws IOException{
		BufferedReader bf = new BufferedReader( new 
				InputStreamReader(System.in));

		//int a = Integer.parseInt(bf.readLine());
		//System.out.println(a);
		student[] arr = new student[3];
		for(int i =0;i<3;i++){
			arr[i]=new student(bf.readLine());
		}
		for(student e : arr){
			System.out.println(e);
		}

	}
}
