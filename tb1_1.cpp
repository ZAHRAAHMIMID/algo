#include<stdio.h>
int main (){
int  i ,j;
char t[5][5],m[5][5]={
{'1','2','3','4','5'},
{'7','a','c','8','d'},
{'c','9','4','z','8'},
{'5','6','p','n','3'},
{'2','9','t','m','k'}};
printf("la matrice est \n");
   for(i=0;i<5;i++){
       for(j=0;j<5;j++){
         printf ("%c \t",m[i][j]);
		 }
          printf("\n");
}
 printf(" la matrice pair est \n");
   for(i=0;i<5;i++){
      for(j=0;j<5;j++){
         if(i%2==0){
          printf ("m[i][j]");
	    }  
    }
         printf("\n");
}
printf(" la matrice impair est \n");
      for(i=0;i<5;i++){
         for(j=0;j<5;j++){
           if((i+0)%2!=0){
              printf ("m[i][j]");
       }}printf("\n");}
return 0;
}
