/**
 * ----------------------------------------------------------
 * Program : 24_FindTheMaxNo.c
 * Purpose : To find the maximum number among four numbers using functions
 * Author(s) : [Yazdaan]
 * Date : Nov 24, 2025
 * ----------------------------------------------------------
 */

#include<stdio.h>

int firstmax(int a, int b){   //Here we create a function 'firstmax' to find maximum of first two numbers 
    if(a>b){
        return a;       //If 'a' is greater than 'b', value of 'a' is returned
    }
    else{
        return b;    //Else value of 'b' is returned
    }}
    
int secondmax(int c, int d){  //here we create a function 'secondmax' to find maximum of last two numbers
    if(c>d){
        return c;      //If 'c' is greater than 'd', value of 'c' is returned
    }
    else{
        return d;   //Else value of 'd' is returned  
    }}

int main(){
    int a,b,c,d;                      //4 variables created to take 4 inputs from the user
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int a1= firstmax(a,b);       //We create a variable 'a1' which will store the maximum of first two numbers
    int a2= secondmax(c,d);     //We create a variable 'a2' which will store the maximum of last two numbers
    if(a1>a2){                  //We a1 and a2 , to find the maximum number out of the 4 numbers
        printf("%d",a1);        // if a1 is greater than a2, value a1 is printed
    }
    else{
        printf("%d",a2);       //else value of a2 is printed
    }
    return 0;}

/*-----------------------NOTE--------------------------*/

//Here in tthe code line 31 that is , int a1= firstmax(a,b); we are calling the function 'firstmax' and passing two arguments 'a' and 'b' to it.
//Similarly in line 32 that is , int a2= secondmax(c,d); we are calling the function 'secondmax' and passing two arguments 'c' and 'd' to it.
//The functions 'firstmax' and 'secondmax' then process these arguments and return the maximum values which are stored in 'a1' and 'a2' respectively.
//Finally in lines 33-38 we compare 'a1' and 'a2' to find the overall maximum among the four input numbers and print it.

/*-----------------------END OF NOTE--------------------------*/