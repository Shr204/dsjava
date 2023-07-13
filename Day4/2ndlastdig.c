#include <stdio.h>
#include <string.h>

int secondlastDigitOf(int input1){
      if((input1>=0&&input1<=10)||(input1<=0&&input1>=10)){
            return -1;
      }
      if(input1>0){
           int rem = input1/10%10;
           return rem;
      }
      else {
           int rem2 = (input1/10%10)*-1;
           return rem2;
}
