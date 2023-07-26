import java.io.*;
import java.util.*
//Read only region start
class UserMainCode{
public String SecondWordUpperCase(String input1){
// Read only region end
// Write code here...
String s[]=input1.split(" ");       
 if(s.length==1) 
return "LESS";
 String s1=s[1];         
s1=s1.toUpperCase();         
return s1; 
