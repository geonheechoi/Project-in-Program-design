#include<stdio.h> 
#include<stdlib.h>
// sofa define
#define sa_min 60
# define sa_Mon 45
# define sa_Max 450
// loveseat define
#define lt_min 45
#define lt_Mon 30
#define lt_Max 280
//fourpostbed
#define fd_min 55 
#define fd_Mon 38 
#define fd_Max 350
//Dresser
#define dr_min 28 
#define dr_Mon 25 
#define dr_Max 200
//kitchentable
#define ke_min 35 
#define ke_Mon 20 
#define ke_Max 220
int main() {
//Geonhee Choi,U15718954, net id geonheechoi
 //Geonhee Choi project1 solution
  int furniture; //make the furniture input variable
  int month; //make the month variable
 int temp;  //make the temporary variable
 
   printf("Please select from the following menu: 1.Sofa 2.Loveseat, 3. 4 Post Bed,4. Dresser, 5.Kitchen Table");// ask user input
  printf("Enter furniture selection:");  // ask user input
   scanf("%d",&furniture);// scan furniture input
 
  if(furniture<1 || furniture>5 ){  //input valid test
     printf("Invalid input. The input should be in the range of 1 to 5.");
     exit(EXIT_FAILURE);
  }
  
  
   printf("Enter months rented:");//ask user month rent
   scanf("%d",&month);  // read month variable
   if(month<=0){ //input valid test
printf("Invalid input.Enter a positive number for moths rented.");
        exit(EXIT_FAILURE);
      }   
   
   
   if(furniture==1){  // if furniture  input is 1  start sofa task
       
       if(month==1){ //if one month rent, just charge   one month fee
           temp=sa_min;
         
       }
       else if(month<=12)  // if they rent before 12 month,charge=  one month rate+ remain month(month-1)*monthly pay rate
       {
           temp=sa_min+(month-1)*sa_Mon;
         
       }
       else if(month>12) // if they rent for more than one year ( over 12 month) ,charge= maximum rent rate permonth *(month/12)+ monthly pay rate(remain month by month%12)
       {
           temp=sa_Max*(month/12)+sa_Mon*(month%12);
          
       }
       
   }
      if(furniture==2){   // if furniture  input is 2  start loveseat task 
       
       if(month==1){// if just one month rent, charge one month fee 
           temp=lt_min;
         
       }
       else if(month<=12)//if they rent before 12 month, charge = one month fee+ remain month(month-1)*monthly pay rate
       {
           temp=lt_min+(month-1)*lt_Mon;
         
       }
       else if(month>12)   // if they rent for more than one year ( over 12 month) ,charge= maximum rent rate permonth *(month/12)+ monthly pay rate(remain month by month%12)
       {
           temp=lt_Max*(month/12)+lt_Mon*(month%12);
              printf("Amount due($): %d",temp);
          
       }
       
   }
     if(furniture==3){// if furniture  input is 3  start fourpostbed  task
       
       if(month==1){// if just one month rent, charge one month fee
           temp=fd_min;
    
       }
       else if(month<=12)
       {
           temp=fd_min+(month-1)*fd_Mon;    //if they rent before 12 month, charge = one month fee+ remain month(month-1)*monthly pay rate
         
       }
       else if(month>12)
       {       // if they rent for more than one year ( over 12 month) ,charge= maximum rent rate permonth *(month/12)+ monthly pay rate(remain month by month%12)
           temp=fd_Max*(month/12)+fd_Mon*(month%12);
    
       }
       
   }
       if(furniture==4){ // if furniture  input is 4  start dress  task
       
       if(month==1){ // if just one month rent, charge one month fee
           temp=dr_min;
         
                    }
        if(month<=12)
       { 
           temp=dr_min + (month-1)*dr_Mon;   //if they rent before 12 month, charge= one month fee+ remain month(month-1)*monthly pay rate
 
           if(temp>dr_Max){
           temp = dr_Max; // but if  rent overcharge before one year, adjust rent fee according to the  maximum per year 
              
      }
       }
      if(month>12)
       {
       temp=dr_Max*(month/12)+dr_Mon*(month%12);
     // if they rent for more than one year ( over 12 month) ,charge= maximum rent rate permonth *(month/12)+ monthly pay rate(remain month by month%12)
       } 
    }      
    
       if(furniture==5){  // if furniture  input is 5  start kitchentable  task
      if(month==1){
          temp=ke_min;   // if just one month rent, charge one month fee
         //    printf("Amount due($): %d",temp);
                  }
      if(month<=12)
      {          
               //if they rent before 12 month, charge = one month fee+ remain month(month-1)*monthly pay rate
          temp=ke_min + (month-1)*ke_Mon;
        
         }
     if(month>12)
       {            // if they rent for more than one year ( over 12 month) ,charge= maximum rent rate permonth *(month/12)+ monthly pay rate(remain  month by month%12)
             temp=ke_Max*(month/12)+dr_Mon*(month%12);
    if(temp>=ke_Max){  // but if  rent overcharge before one year, adjust rent fee according to the  maximum per year

            temp=temp-ke_Mon-dr_min;
         }
      }
    }  
  
   
   
         printf("Amount due($): %d\n",temp);
         //print out all case of rent fee     
    return 0;
       }
       
