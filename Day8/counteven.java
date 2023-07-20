import java.io.*;
import  java.util.*;
class UserMainCode{
     public int CountEvens(int input1, int input2, int input3, int input4, int input5){
          int count = 0;
          int arr[] = new int[5];
          arr[0] = input1;
          arr[1] = input2;
          arr[2] = input3;
          arr[3] = input4;
          arr[4] = input5;
          for (int i = 0; i<5; i++){
            if(arr[i]%2==0 || arr[i]==0){
              count+=1;
            }
            return count;
          }}}

         

