// #include <stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main()
// {
//     FILE *fp=NULL;
//     fp=fopen("abc.txt","w");
//     if(fp==NULL)
//     {
//         printf("FILE Couldn't be created nor found");
//         exit(1);
//     }
//     char ch[10]=fscanf("%s",fp);
//     //for(int i=0;i<10;i++)
//     printf("%s",ch);
//     fclose(fp);
// }


//121
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     FILE *fp=NULL;
//     fp=fopen("abc.txt","w");
//     if(fp==NULL)
//     {
//         printf("FILE Couldn't be created nor found");
//         exit(1);
//     }
//     //char ch='h';
//     //fputc(ch,fp);

// //wrong
// //fputs(ch,fp);

// char ch='h';
// fprintf(fp,"%c",ch);

//     fclose(fp);
// }


// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main()
// {
//     FILE *fp=NULL;
//     fp=fopen("abc.txt","w");
//     if(fp==NULL)
//     {
//         printf("error");
//         exit(1);
//     }
//     char ch[50];
//     printf("Enter a string");
//     gets(ch);

//     //fputs(ch,fp);

//     for(int i=0;i<strlen(ch);i++)
//     {
//         fputc(ch[i],fp);
//     }

//     // int a=10;
//     // fprintf(fp,"%d %s",a,ch);
//     fclose(fp);
// }



//122
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main()
// {
//     FILE *fp=NULL;
//     fp=fopen("abc.txt","r");
//     if(fp==NULL)
//     {
//         printf("error");
//         exit(1);
//     }
//     char ch;
//     // ch=fgetc(fp);
//     // printf("%c",ch);

// // wrong
// //    ch=fgets(fp);
// //    printf("%c",ch);


// ////
// // ch=fscanf(fp,"%c",&ch);
// // printf("%c",ch);
// ////



// // wrong
// // ch=fscanf(fp,"%s",&ch);
// // printf("%s",ch);

//  while(!feof(fp))
//     {
//         ch=fgetc(fp);
//         printf("%c",ch);
//     }
//      ch=fgetc(fp);
//     printf("%c",ch);   

//     fclose(fp);
// }




// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main()
// {
//     FILE *fp=NULL;
//     fp=fopen("abc.txt","r");
//     if(fp==NULL)
//     {
//         printf("ERROR");
//         exit(1);
//     }
//     char str[50];
//     fgets(str,50,fp);
// printf("%s",str);

// char ch;
//     while(!feof(fp))
//     {
//         ch=fgetc(fp);
//         printf("%c",ch);
//     }
//      ch=fgetc(fp);
//     printf("%c",ch);

// char str[50];
// while(!feof(fp))
// {
//     fgets(str,50,fp);
//     printf("%s",str);
// }
//      char ch=fgetc(fp);
//     printf("%c",ch);


//     fclose(fp);
// }



//123
// #include<stdio.h>
// int main()
// {
//     FILE *fp=NULL;
//     fp=fopen("abc.txt","a");
//     if(fp==NULL)
//     {
//         printf("ERROR");
//         exit(-1);
//     }
//     char str[50];
//     printf("Enter string to append\n");
//     gets(str);

//     // fputs(str,fp);

//     //fprintf(fp,"%s",str);

// int i=0;
//     while(str[i]!='\0')
// {
//     fputc(str[i],fp);
//     i++;
// }
//     printf("Successfully appended");
//     fclose(fp);
// }




//124
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     FILE *fp=NULL;
//     fp=fopen("abc.txt","r+");
//     if(fp==NULL)
//     {
//         printf("ERROR");
//         exit(1);
//     }
//    // fputs("Jenny",fp);

//   // you can do by 2 more ways

//     fclose(fp);
// }





//125
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp=NULL;
    fp=fopen("abc.txt","w+");
    if(fp==NULL)
    {
        printf("ERROR");
        exit(1);
    }
    fclose(fp);
}


// #include<stdio.h>
// #include <stdlib.h>
// int main()
// {
//     FILE* fp=NULL;
//     fp=fopen("abc.txt","r+");
//     if(fp==NULL)
//     {
//         printf("ERROR");
//         exit(1);
//     }
//     char str[50];
//     while(!feof(fp))
//     {

//         fgets(str,50,fp);
//         printf("%s",str);
//     }
//     fputs("jenny",fp);

//     fclose(fp);
// }