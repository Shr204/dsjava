import java.io.*;
import java.util.*
//Read only region start
class UserMainCode{
public int OddDigitsSum(int input1){
// Read only region end
// Write code here...
        int rem, sum=0;
        while(input1>0){
            rem = input1%10;
            if(rem%2!=0){
                sum = sum+rem;
            }
            input1 = input1/10;
        }
		return sum;
	}
}
