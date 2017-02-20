
#include <stdio.h>
#include <stdlib.h>
struct problem
{

int a,b,c;
};
void main()
{


    FILE *fin;
    FILE *fout;
    int test,i,add,sub1,sub2,div1,div2,mul;

    fin=fopen("input.txt","r");
    fscanf(fin,"%d",&test);

    printf("Number of test cases are:%d\n",test);
    struct problem n[test];
     for(i=1;i<=test;i++)
     {
         fscanf(fin,"%d%d%d",&n[i].a,&n[i].b,&n[i].c);
     }

    for(i=1;i<=test;i++)
     {
         printf("Numbers are:%d\t%d\t%d\n",n[i].a,n[i].b,n[i].c);

     }
     fout=fopen("output.txt","w");
     for(i=1;i<=test;i++)
     {

         add=n[i].a+n[i].b;
         sub1=n[i].a-n[i].b;
         sub2=n[i].b-n[i].a;
         div1=n[i].a%n[i].b;
         div2=n[i].b%n[i].a;
         mul=n[i].a*n[i].b;
    if(add==n[i].c)
    {
        fprintf(fout,"it is possible\n");
    }
    else if(sub1==n[i].c)
    {

        fprintf(fout,"it is possible\n");
    }
       else if(sub2==n[i].c)

    {

      fprintf(fout,"it is possible\n");
    }
        else if(div1==n[i].c)
    {

        fprintf(fout,"it is possible\n");
    }
       else if(div2==n[i].c)
    {

        fprintf(fout,"it is possible\n");
    }
       else if(mul==n[i].c)
    {
        fprintf(fout,"it is possible\n");
    }
       else
    {

        fprintf(fout,"it is not possible\n");
    }
     }
    fclose(fin);
    fclose(fout);

}

