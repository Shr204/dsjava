import java.io.*;
import java.util.*;
class UserMainCode
{
   public int lastDigitOf(int input1){
      if(input1>0){
           int rem = input1%10;
           return rem;
      }
      else {
           int rem2 = (input1%10)*-1;
           return rem2;
}
