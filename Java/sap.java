import java.util.*;


class sapt{
	public static int meth(int [] arr){
		int m = -21426746;
		for(int i=0;i<arr.length;i++){
			if (arr[i]>m){
				m=arr[i];
			}
		}
		
		return m; 
	}
}
public class sap{
	public static void main(String[] args) {
		int[] arr = new int[]{1,2,3323324,4,5};
		// System.out.println(Arrays.toString(arr));
		sapt obj = new sapt();
		System.out.println("The Greatest Element of the Array is: "+obj.meth(arr));
	}
}