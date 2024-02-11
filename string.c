#include<stdio.h>
#include "string.h"

/* /////////////// function definetions start ////////////// */

/////////////////////////// memchr() /////////////////////
void *my_string_memchr(const void *str, int c, size_t n)
{
    if(str==NULL)
    {
        printf("the string is empty ");
    }
    else
    {
        int index=0;
        for(index = 0; index < n ; index++)
        {

            if( c == *((unsigned char *)str+index))
            {
                return ((unsigned char *)str+index)  ;
                break;
            }

        }

    }
    return NULL;
}

/////////////////////////// memcmp1() /////////////////////
int my_string_memcmp_1(const void *str1, const void *str2, size_t n)
{
    int ret=0,index=-10;
    if(str1==NULL || str2== NULL)
        {

            //#error "there are at least one string is empty\n"
        }
    for(index=0;index<n;index++)
    {

        if(*((unsigned char *)str1+index) > *((unsigned char *)str2+index))
        {
            return 2;
        }
        else if(*((unsigned char *)str1+index) < *((unsigned char *)str2 + index))
        {
            return -1;
        }
        else
        {
            ret =0;
        }

    }

    return ret;
}

/////////////////////////// strcpy() /////////////////////
void *my_string_memncpy(void *dest, const void *src, size_t n)
{

    if(src==NULL)
    {
        printf("the source is empty !\n");
    }
    else
    {
        int index=0;
        for(index=0;index<n;index++)
        {

            *((unsigned char *)dest+index) = *((unsigned char *)src+index);
        }
        return dest;

    }
}

/////////////////////////// memset() /////////////////////
void *my_string_memset(void *str, int c, size_t n)
{
    if(str==NULL)
    {
        printf("the string is empty!\n");
    }
    else
    {
        int index=0;
        for(index=0;index<n;index++)
        {

            *((unsigned char *)str+index) = c;
        }
         return str;
    }
}

/////////////////////////// strcat1() /////////////////////
char *my_string_strcat(char *dest, const char *src)
{
    int len_src = strlen(src);
    int len_dest = strlen(dest);
    if(len_dest<len_src)
    {
        printf("not enough space !\n");

    }
    else
    {
        int index=0;

        for(index=0;index< len_src;index++)
        {
            *(dest+len_dest+index)=*(src+index);
        }
        return dest;
    }

}

/////////////////////////// strcat2() /////////////////////
char *my_string_strncat(char *dest, const char *src, size_t n)
{
    int len_dest = strlen(dest);
    int len_src = strlen(src);
    if(src==NULL||(len_dest<len_src))
    {
        printf("the source is empty or length is not enough!\n");
    }
    else
    {
        int index=0;
        for(index=0;index<n;index++)
        {
            *(dest+len_dest+index)=*(src+index);
        }
        return dest;
    }
}

/////////////////////////// memcmp2() /////////////////////
int my_string_memcmp_2(const void *str1, const void *str2)
{
    int ret=-10,index=0;
    int len_str1=strlen(str1);
    int len_str2=strlen(str2);
    if(str1==NULL || str2== NULL)
        {

            printf("there is at least one is empty!");
        }

    else
    {
        for(index=0;index < len_str1;index++)
        {

            if(*((unsigned char *)str1+index) > *((unsigned char *)str2+index))
            {
                return 2;
            }
            else if(*((unsigned char *)str1+index) < *((unsigned char *)str2 + index))
            {
                return -1;
            }
            else
            {
                ret =0;
            }

        }
    }

    return ret;
}

/////////////////////////// strcpy2() /////////////////////
char *my_string_strcpy(char *dest, const char *src)
{
    int len_src=0,index=0;
    len_src=strlen(src);
    if(src==NULL)
    {
        printf("the source is empty!\n");
    }
    else
    {
       for(index=0;index<len_src;index++)
       {
           *(dest+index)=*(src+index);
       }
       return dest;
    }
}

/////////////////////////// strcspn() /////////////////////
size_t my_string_strcspn(const char *str1, const char *str2)
{
    int index_1=0,index_2=0,ret=-1;
    if(str2==NULL)
    {
        printf("str2 is empty!");
    }
    else
    {
        for(index_1=0;index_1<strlen(str2);index_1++)
        {
            for(index_2=0;index_2<strlen(str1);index_2++)
            {
                if(*(str2+index_1)==*(str1+index_2))
                {
                    ret=index_2;
                    break;
                }

            }
            if(*(str2+index_1)==*(str1+index_2))
            {
                break;
            }
        }
        return ret;
    }

}

/////////////////////////// strlen() /////////////////////
size_t my_string_strlen(const char *str)
{
    int ret=0,length=0;
    if(str==NULL)
    {
        ret=-1;
    }
    else
    {
        while(*(str) != NULL)
        {
            length++;
            str+=1;
        }
        ret=length;
    }
    return ret;
}

/////////////////////////// strpbrk() /////////////////////
char *my_string_strpbrk(const char *str1, const char *str2)
{
    int index_1=0,index_2=0;
    char *ret=NULL;
    if(str2==NULL)
    {
        printf("str2 is empty!");
    }
    else
    {
        for(index_1=0;index_1<strlen(str2);index_1++)
        {
            for(index_2=0;index_2<strlen(str1);index_2++)
            {
                if(*(str2+index_1)==*(str1+index_2))
                {
                    ret=(str2+index_1);
                    break;

                }

            }
            if(*(str2+index_1)==*(str1+index_2))
            {
                break;
            }


        }
        return ret;
    }

}

/////////////////////////// strrchr() /////////////////////
char *my_string_strrchr(const char *str, int c)
{
    int index=0;
    char *ret=NULL;
    if(str==NULL)
    {
        printf("the string is empty!\n\n");
    }
    else
    {
        for(index=0;index<my_string_strlen(str);index++)
        {
            if(*(str+index)==c)
            {
                ret=(str+index);
            }
        }
        return ret;
    }
}

/////////////////////////// strspn() /////////////////////
size_t my_string_strspn(const char *str1, const char *str2)
{
    int ret=0,index_1=0,index_2=0;
    if(str1==NULL||str2==NULL)
    {
        printf("one of two strings is empty!\n\n");
    }
    else
    {
        for(index_1=0;index_1<my_string_strlen(str2);index_1++)
        {
            for(index_2=0;index_2<my_string_strlen(str1);index_2++)
            {
                if(*(str2+index_1)==*(str1+index_2))
                {
                    ret++;
                    break;
                }
            }
        }
        return ret;
    }
}

/////////////////////////// strstr() /////////////////////
char *my_string_strstr(const char *haystack, const char *needle)
{
    int index_1=0,cmp=0;
    char *ret=NULL;
    if(haystack==NULL||needle==NULL)
    {
        printf("one of two strings is empty!\n\n");
    }
    else
    {
        for(index_1=0;index_1<my_string_strlen(haystack);index_1++)
        {
            cmp=my_string_memcmp_1((haystack+index_1),needle,my_string_strlen(needle) );
            if(cmp==0)
            {
                ret=needle;
            }
        }
        return ret;
    }
}

/////////////////////////// strtok() ///////////////////// not completed
char *my_string_strtok(char *str, const char *delim)
{

    if(str==NULL)
    {
        printf("the string is empty !!\n\n");

    }
    else if(*(str)!=NULL)
    {

        char *tok;
        while(*(str)!=*(delim))
        {
            (tok)=(str);
            str++;
            tok+=1;
        }
        printf("----->%s\n\n",tok);
        return tok;


    }
    else
    {
        return NULL;
    }

}

/////////////////////////// strxfrm() /////////////////////
size_t my_string_strxfrm(char *dest, const char *src, size_t n)
{
    int index=0;
    if(src==NULL)
    {
        printf("the source is empty!\n\n");
    }
    else
    {
        for(index=0;index<n;index++)
        {
            if(*(src+index)!=NULL)
            {
                *(dest+index)=*(src+index);

            }
            if(*(src+index)==NULL)
            break;

        }
        return index;
    }

}
/* /////////////// function definetions end ////////////// */

char *my_strtok(char *str, const char *delim) {
    static char *next_token = NULL; // Stores the next token position

    // If str is NULL, continue tokenizing from where we left off
    if (str == NULL)
    {
        str = next_token;

    }


        // Skip leading delimiters
        str += strspn(str, delim);

        // If the current position is at the end, return NULL
        if (*str == NULL)
            return NULL;

        // Find the end of the token
        char *end = str + strcspn(str, delim);

        // Set the end of the token as NULL and update next_token
        if (*end != NULL) {
            *end = '\0';
            next_token = end + 1;
        } else {
            next_token = NULL;
        }


    return str;
}



