import java.io.*;
import java.util.*
//Read only region start
class UserMainCode{
public int IsPalinNum(int input1){
// Read only region end
// Write code here...
        int temp = input1;
        int rev = 0;
        while(input1>0){
            rev = rev*10 + input1%10;
            input1/=10;

        }
        if(rev!=temp)
        return 1;
        return 2;
		
	}
}
