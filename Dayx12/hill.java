 import java.io.*;
import java.util.*
//Read only region start
class UserMainCode{
public int TotalHillWeight(int input1, int input2, int input3){
// Write code here...
        int sum=0,i,j; 
        for(i=0;i<input1;i++)         
        {
            for(j=0;j<=i;j++) 
                 sum+=input2;            
            input2=input2+input3;            
                         
                   }                   
                   return sum; 
                   
    }
	}
