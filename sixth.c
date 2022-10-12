#include<stdio.h>
struct stu_rec {
    char name[20], en_num[15];
    long sap_id; 
    struct detail{
        int day,mon,year;  
    } dor,dob,doj ;
};

void main(){
    int n,i;
    printf("ENTER THE NUMBER OF STUDENTS : ");
    scanf("%d",&n);
    
    struct stu_rec s[n];
    
    for(i=0;i<n;i++){
        printf("ENTER DATA OF STUDENT %d : \n",i+1);
        printf("\tNAME : ");
        scanf("%s",&s[i].name);
        printf("\tSAP ID : ");
        scanf("%ld",&s[i].sap_id);
        printf("\tENROLLMENT NUMBER : ");
        scanf("%s",&s[i].en_num);
        printf("\tDATE OF REGISTRATION : ");
        scanf("%d %d %d",&s[i].dor.day,&s[i].dor.mon,&s[i].dor.year);
        printf("\tDATE OF BIRTH : ");
        scanf("%d %d %d",&s[i].dob.day,&s[i].dob.mon,&s[i].dob.year);
        printf("\tDATE OF JOINING : ");
        scanf("%d %d %d",&s[i].doj.day,&s[i].doj.mon,&s[i].doj.year);
    }
    
    for(i=0;i<n;i++){
        printf("\nDATA OF STUDENT %d IS :\n",i+1);
        printf("\tNAME : %s\n",s[i].name);
        printf("\tSAP ID : %ld\n",s[i].sap_id);
        printf("\tENROLLMENT NUMBER : %s\n",s[i].en_num);
        printf("\tDATE OF REGISTRATION : %d-%d-%d\n",s[i].dor.day,s[i].dor.mon,s[i].dor.year);
        printf("\tDATE OF BIRTH : %d-%d-%d\n",s[i].dob.day,s[i].dob.mon,s[i].dob.year);
        printf("\tDATE OF JOINING : %d-%d-%d\n",s[i].doj.day,s[i].doj.mon,s[i].doj.year);
    }
}