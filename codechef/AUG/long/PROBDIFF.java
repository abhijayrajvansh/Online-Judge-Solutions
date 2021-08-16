/**
*    author: abhijayrajvansh
*    created: 07.08.2021  02:01:28
**/

import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Scanner;
import java.util.Arrays;

class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner in = new Scanner (System.in);
        int TT = 1;
        TT = in.nextInt();
        while(TT != 0){
            int[] arr = new int[4];
            for(int i = 0; i < 4; i++){
                int n = in.nextInt();
                arr[i] = n;
            }
            Arrays.sort(arr);
            if(arr[0] == arr[1] && arr[1] == arr[2] && arr[2] == arr[3]){
                System.out.println(0);
            }
            else if(arr[0] == arr[1] && arr[1] == arr[2] || arr[1] == arr[2] && arr[2] == arr[3]){
                System.out.println(1);
            }
            else{
                System.out.println(2);
            }
            TT--;
        }
    }
}
