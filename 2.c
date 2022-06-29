#include <stdio.h>
#include <string.h>
#include <stdio.h>
#define LEN 13

int main(int argc, char** argv) {

 char ss[100]  = {  '1','2','3','4','5','6','7','8','9','0','q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m','Q','W','E','R','T','Y','U','I','O','P','A','S','D','F','G','H','J','K','L','Z','X','C','V','B','N','M','+','=','!','@','#','$','%','^','&','*','(',')','_','-','<','>','/','?','.','>',',','<',']','['};
    
    
    char correct[LEN + 1] = "ReenYbkV'('&)";
    char shift_array[LEN + 1] = {2,3,4,5,6,7,8,9,10,11,12,13,14};    
    int i = 0;

   
   char shift_arrayed_char = correct[i] + shift_array[i];
 
   

   int a,b;
for( a = 0; a < 14; a = a + 1 ){

 shift_arrayed_char = correct[a] + shift_array[a];
  
  for( b = 0; b < 100; b = b + 1 ){
      char t = ss[b];
      char flag;
      if (shift_arrayed_char == t) {

         printf("%c\n" ,ss[b] );
         flag = flag + ss[b];
       
      }
 
  
   }
  
   
   
      }  
      

}