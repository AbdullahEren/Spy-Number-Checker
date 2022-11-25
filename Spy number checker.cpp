#include <stdio.h>

int main(void)

{
    int numberFromUser=1;
    int othernumber=1;
    int fixnumber=1;
    
	while(numberFromUser!=-1){
	printf("\n-------------THE SPY NUMBER CHECKER-------------");
    printf("\n\nEnter a positive number:");
    scanf("%d", &numberFromUser);
    
	othernumber=numberFromUser;
	
	int sum=0,mult=1,rem;
    
	if(numberFromUser==-1){
     numberFromUser=-1;
      }
   
   
    while(numberFromUser>=1){

    if(numberFromUser>=1){
        rem=numberFromUser%10;
        sum+=rem;
        mult*=rem;
        numberFromUser/=10;
    }
    }
    if(sum==mult){
     printf("It is a spy Number.\n");
	 }
    else if(sum!=mult && numberFromUser!=-1){
     
	 printf("It is not a spy Number.\n");
     
	 fixnumber=othernumber;
	 while(sum!=mult){
		
		int sum=0,mult=1,rem;
		
		fixnumber++;
		
		othernumber=fixnumber;
		
		while(othernumber>=1){
	        	rem=othernumber%10;
	        	sum+=rem;
	        	mult*=rem;
	        	othernumber/=10;
    }
		if(sum==mult){
		printf("%d is spy number\n",fixnumber); 
     	break;
		}
	 }
     	 	
	 }
    }
}
