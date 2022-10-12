#include<stdio.h>
void sum(int r1,int i1,int r2,int i2);
struct complex_num{
    int real, imaginary;
};

void main(){
    struct complex_num n1,n2;
    printf("ENTER COMPLEX NUMBERS :\n");
    
    printf("FIRST COMPLEX NUMBER : \n");
    printf("\tVALUE OF REAL NUMBER : ");
    scanf("%d",&n1.real);
    printf("\tVALUE OF REAL PART OF IMAGINARY NUMBER :");
    scanf("%d",&n1.imaginary);
    
    printf("SECOND COMPLEX NUMBER : \n");
    printf("\tVALUE OF REAL NUMBER : ");
    scanf("%d",&n2.real);
    printf("\tVALUE OF REAL PART OF IMAGINARY NUMBER :");
    scanf("%d",&n2.imaginary);

    printf("FIRST COMPLEX NUMBER : %d + %d i\n",n1.real,n1.imaginary);
    printf("SECOND COMPLEX NUMBER : %d + %d i\n",n2.real,n2.imaginary);

    sum(n1.real, n1.imaginary, n2.real, n2.imaginary);
    
}

void sum(int r1,int i1,int r2,int i2){
    int real,imaginary;
    real = r1+r2;
    imaginary = i1+i2;
    printf("SUM = %d + %d i",real,imaginary);
}