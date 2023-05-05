import java.util.*;

class maxClass{
   public int find_max(int [] myarray) {
       int max_val = 0;
      
      for(int i=0; i<myarray.length; i++ ) {
         if(myarray[i]>max_val) {
            max_val = myarray[i];
         }
      }
      
      return max_val;
   }
}
public class Main
{
    public static void main(String args[]) {
        
       int[] myArray = {43,54,23,65,78,85,88,92,10};
       System.out.println("Input Array:" + Arrays.toString(myArray));
 
      
      maxClass obj = new maxClass();
        
        System.out.println("Maximum value in the given array is::"+obj.find_max(myArray));
   }
}