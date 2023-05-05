import java.util.*;
import java.io.*;

class kakali {
	// public int cs = 0;
	// public int ms = 0;

	public static int kaden(int[] arr, int n){
		int m = -21234543;
		int cs=0, ms=0;

		for (int i = 0; i < n; i++) {
			cs += arr[i];
			if (arr[i] > m) {
				m = arr[i];
			}
		}
		if (cs > ms) {
			ms = cs;
		}
		if (cs < 0) {
			cs = 0;
		}
		if (m < 0) {
			return m;
		} else {
			return ms;
		}
	}
}

public class new1 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int[] arr = new int[]{-1,-2,-3,-4,-5};
		kakali saptarshi = new kakali();
		System.out.println(saptarshi.kaden(arr, 5));

	}
}
