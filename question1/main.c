//  1) Write a program in C to find the square number of any number given

//  2) Write a program in C to find the power of the given number (Don't use pow() funciton.).

// Created by Mehmet Akif Duran, 3 Jan. 2024.

/*
 Choose your operation (Press 0 to close the program): 1) Find square, 2) Find power:
 1
 Enter the number : 4
 Answer: 16.
 Choose your operation (Press 0 to close the program): 1)Find square, 2) Find power:
 2
 Enter the number and the power :
 5 2
 25
 Choose your operation (Press 0 to close the program) : 1) Find square, 2) Find power:
 0
 !! PROGRAM ENDS !!

 */



#include <stdio.h>
#include <stdlib.h>

float findSquare(float num){
    
    printf("Enter the number: \n");
    scanf("%f",&num);
    
    float squareNum = num * num;
    
    printf("Answer: %.2f\n",squareNum);
    return squareNum;
}


float findPow(float num2, int power){
    
    float num3;
    
    printf("Enter the number and the power please:\n");
    scanf("%f%d",&num2,&power);
    
    num3 = 1.0;
    
    for(power;power>0;power--){
        num3 = num3*num2;
    }
    printf("Answer: %.2f\n", num3);
    
    return num2;
    
}



int main(){
    
    int num, num2,op,power;
    

    do {
        printf("Choose your operation (Press 0 to close the program): 1) Find square, 2) Find power:");
        scanf("%d", &op);
        
        if(op==1)
            findSquare(num);
        else if(op==2)
            findPow(num,power);
        else if (op == 0){
            printf("!! PROGRAM ENDS !!\n");
        return 0;
        }
            else
                printf("This is not an operation number.Choose your operation (Press 0 to close the program) : 1) Find square, 2) Find power:");
    } while (op!=0);
    
    printf("!! PROGRAM ENDS !!\n");
    
    return 0;
}
