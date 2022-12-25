import java.util.Scanner;
import java.util.Arrays;

public class E{
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int k = in.nextInt();
        int[] A = new int[n];

        for(int i = 0; i < n; i++){
            A[i] = in.nextInt();
        }

        Arrays.sort(A);
        long satisfaction = 0;
        int idxLimit = n-1;
        int idx;
        while(k > 0){
            idx = idxLimit;
            // System.out.println(idx);
            while(idx > 0 && A[idx] == A[idx-1]){
                // System.out.println(idx);
                idx--;
            }
            while(idx <= idxLimit){
                if(k <= 0 || A[idx] <= 0){
                    k = 0;
                    break;
                }
                satisfaction += A[idx]--;
                k--;
                idx++;
            }
        }
        System.out.println(satisfaction);
    }
}