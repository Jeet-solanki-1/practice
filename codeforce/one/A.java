package codeforce.one;
import java.io.*;
import  java.util.*;
import java.io.BufferedReader;

public class A {
    public static void main(String[] args) throws Exception{
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        int []cells;
        int t = Integer.parseInt(bufferedReader.readLine().trim());
        while(t-->0){
            st = new StringTokenizer(bufferedReader.readLine());// n,a,b
            int n = Integer.parseInt(st.nextToken());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());

            if (n%2==0){
                //even
                // two segment should mirror
                if(b%2==0){
                    System.out.println("Yes");
                }else {
                    System.out.println("No");
                }
            }else{
                // mid=center
             //   the left and right of the center should be mirror and mid!=mid-1&&mid!=mid+1// it means it is symmetric

                if(a%2==0){
                    System.out.println("Yes");
                }else {
                    System.out.println("No");
                }
            }

        }

    }
}
