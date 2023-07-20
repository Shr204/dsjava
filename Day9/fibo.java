import java.io.*;
import  java.util.*;
class UserMainCode{
     public int nthFibonacci(int input1){
 int f1 = 0;
        int f2 = 1;
        int f3 = 0;
        int f4 = 3;
        while(f4<= input1){
         f3 = f1 + f2;    
         f1 = f2;    
         f2 = f3;  
         f4++;  
        }
       return f3;
		
	}
}
