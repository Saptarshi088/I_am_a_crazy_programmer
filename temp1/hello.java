// import java.io.BufferedReader;
// import java.io.IOException;
// import java.io.InputStreamReader;
import java.io.*;
import java.util.*;
class goodgame{
    public static void main(String[] args)
    throws IOException{
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        // int a, b;
        // a=Integer.parseInt(bf.readLine());
        // b=Integer.parseInt(bf.readLine());
        // System.out.println("the sum is "+sum(a,b));
        int []arr=new int[100];
        for(int i=0;i<10;i++){
            arr[i]=Integer.parseInt(bf.readLine());
        }
        System.out.println(sum(arr,10));
        
    }

    private static int sum(int []arr, int l){
        int s=0;
        for(int i=0;i<l;i++){
            s+=arr[i];
        }
        return s;
    }
}
