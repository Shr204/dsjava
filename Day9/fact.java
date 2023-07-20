import java.io.*;
import  java.util.*;
class UserMainCode{
     public int nFactorial(int input1){


if(input1==1){
            return 1;
        }
        return (input1* nFactorial(input1-1));
		
	}
}
