 import java.io.*;
import java.util.*
//Read only region start
class UserMainCode{
public int Digitsum(int input1){
// Read only region end
        boolean b = true;
        int r,sum=0;
        int x= input1;
        input1 = Math.abs(input1);
        while(b){
            while(input1>0){
                r = input1%10;
                sum = sum+r;
                input1 = input1/10;

            }
            if(sum<10){
                b = false;

            }
            else{
                input1 = sum;
                sum =0;
            }
        }
        if(x<0){
            res = -sum;

        }
        else{
            res = sum;
        }
        return res;
	}
}
