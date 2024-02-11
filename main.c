#include<stdio.h>
/* ////////////// include header file ////////////////// */
#include "string.h"
/* ////////////// function declarations end ////////////////// */

/* ////////////// what i need start  ////////////////// */
char str_1[]   ={"wilcome ta our header file"};
char str_2[]   ={"wilcome to our header file"};
char str_3[30];
char str_4[50];
char str_5[20];
char str_6[]   ={"wilcome ta our academy we glade to be here"};
char str_7[]   ={"wilcome to our academy we glade to be here"};
char str_8[30];
char str_9[30];
const char str_10[]="ABCD0EFRJD81029";
char str_11[]      ="ABCHU9812J0";
char str_12[]      ="mohamed emad hamdy";
char str_13[]      ="emad";
char str_14[]      =" ";
char str_15[50] ;
char *ret=NULL;
char ch='t' ;
char ch2='#';
char ch3='t';
char *ptr=NULL;
char *ptr2=NULL;
char *ptr3=NULL;
char *ptr4=NULL;
char *ptr5=NULL;
char input_string[] = "Hello,world,this,is,a,test";
const char delimiter[] = ",";
/* ////////////// what i need end  ////////////////// */



int main()
{

     printf("//-----------------------start------------------------//\n\n");
     //printf("please enter number to search :");
     //scanf("%c",&ch);
    ret=my_string_memchr(str_1,ch,sizeof(str_1));
    if(NULL==ret)
    {
        printf("the charachter not found !! \n\n");
    }
    else
    {
        printf("the string from this charachter is : %s \n\n",ret);
    }


    printf("//-----------------------1------------------------//\n\n");
     int cmp=0;
    cmp = my_string_memcmp_1(str_1,str_2,20);
    if(cmp==-10)
    {
        printf("there an empty string !! \n\n");
    }
    else if(cmp>0)
    {
        printf("str1 is larger than str2 \n\n");
    }
    else if(cmp<0)
    {
        printf("str1 is less than str2 \n\n");
    }
    else
    {
        printf("str1 equal str2 \n\n");
    }
    printf("//-----------------------2------------------------//\n\n");
    my_string_memncpy(str_3,"helloooooooo",12);
    printf("str3 before copy str2 : %s\n\n",str_3);
    my_string_memncpy(str_3, str_2,13);
    printf("str3 after copy str2  : %s\n\n",str_3);

    printf("//-----------------------3------------------------//\n\n");

    printf("str1 before set : %s\n\n",str_1);
    my_string_memset(str_1,ch2,7);
    printf("str1 after set  : %s\n\n",str_1);

    printf("//-----------------------4------------------------//\n\n");
    my_string_memncpy(str_4,"hellooooooooo ",15);
    printf("str4 before concatenate is : %s\n\n",str_4);

    my_string_memncpy(str_5,"we are here ",12);
    printf("str5 before concatenate is : %s\n\n",str_5);

    my_string_strcat(str_4,str_5);
    printf("str4 after concatenate is  : %s\n\n",str_4);

    printf("//-----------------------5------------------------//\n\n");

    printf("str4 before concatenate is  : %s\n\n",str_4);
    printf("str2 before concatenate is  : %s\n\n",str_2);
    my_string_strncat(str_4,str_2,12);
    printf("str4 after concatenate only 12 char is  : %s\n\n",str_4);

    printf("//-----------------------6------------------------//\n\n");


     int cmp2=0;
    cmp2 = my_string_memcmp_2(str_6,str_7);
    if(cmp2==-10)
    {
        printf("there an empty string !! \n\n");
    }
    else if(cmp2>0)
    {
        printf("str6 is larger than str7 \n\n");
    }
    else if(cmp2<0)
    {
        printf("str6 is less than str7 \n\n");
    }
    else
    {
        printf("str6 equal str7 \n\n");
    }

    printf("//-----------------------7------------------------//\n\n");

    my_string_strcpy(str_8,"hellooooooo");
    printf("str8 before copy :%s\n\n",str_8);
    my_string_strcpy(str_9,"we here !");
    printf("str9 before copy :%s\n\n",str_9);
    my_string_strcpy(str_8,str_9);
    printf("str8 after copy :%s\n\n",str_8);

    printf("//-----------------------8------------------------//\n\n");

    int len=my_string_strcspn(str_10,str_11);
    if(len==-1)
    {
        printf("there is no matched charachter!\n\n");
    }
    else
    {
        printf("we found first matched char at :%i\n\n",len+1);
    }
    printf("//-----------------------9------------------------//\n\n");
    int len2=my_string_strlen(str_8);
    if(len2==-1)
    {
        printf("the string is empty!\n");

    }
    else
    {
        printf("the length of |%s| is :%i\n\n",str_8,len2);
    }
    printf("//-----------------------10------------------------//\n\n");

    ptr=my_string_strpbrk(str_10,str_11);
    if(ptr==NULL)
    {
        printf("there is no matched character!\n\n");
    }
    else
    {
        printf("the first character matched is :%c\n\n",*ptr);
    }
    printf("//-----------------------11------------------------//\n\n");

    ptr2=my_string_strrchr(str_6,ch3);
    if(ptr2==NULL)
    {
        printf("the character is not found!\n\n");
    }
    else
    {
        printf("the string after the last appearance of character |%c| is :%s\n\n",ch3,ptr2);
    }
    printf("//-----------------------12------------------------//\n\n");

    int len3=my_string_strspn(str_10,str_11);
    if(len3==0)
    {
        printf("there is no any matched characters!!\n\n");
    }
    else
    {
        printf("the number of matched characters are :%d\n\n",len3);
    }
    printf("//-----------------------13------------------------//\n\n");

    ptr=my_string_strstr(str_12,str_13);
    if(ptr==NULL)
    {
        printf("no matched word!\n\n");
    }
    else
    {
        printf("the matched word is :%s\n\n",ptr);
    }
    printf("//-----------------------14------------------------//\n\n");
    char *token = my_strtok(input_string, delimiter);

    while (token != NULL) {
        printf("Token: %s\n", token);
        token = my_strtok(NULL, delimiter);
    }

    printf("//-----------------------15------------------------//\n\n");


    int len4=my_string_strxfrm(str_15,str_12,9);
    printf("the length of string |%s| is:%d\n\n",str_15,len4);
    printf("//-----------------------the end------------------------//\n\n");

    return 0;

}

















