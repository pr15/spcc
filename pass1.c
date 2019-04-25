#include <stdio.h>
#include<string.h>
int main(int argc, char **argv)
{
	FILE *f1,*f2,*f3,*f4;
	int lc,sa,l,op1,o,len;
	char m1[20],la[20],op[20],otp[20];

	f1=fopen("input.txt","r");
	f3=fopen("symtab.txt","w");
	fscanf(f1,"%s %s %d",la,m1,&op1);
	if(strcmp(m1,"START")==0)
	{
	 sa=op1;
	 lc=sa;
	 printf("\t%s\t%s\t%d\n",la,m1,op1);
	 }
	 else
	 lc=0;
	fscanf(f1,"%s %s",la,m1);
	while(!feof(f1))
	{
	 fscanf(f1,"%s",op);
	 printf("\n%d\t%s\t%s\t%s\n",lc,la,m1,op);
	 if(strcmp(la,"-")!=0)
	 {
		if(strcmp(m1,"EQU")==0)
		 {
		 	fprintf(f3,"\n%s\t%s\n",op,la);
		 }	
	 
	 else
	 {
			fprintf(f3,"\n%d\t%s\n",lc,la);
	 }
}
	 
	 f2=fopen("optab.txt","r");
	 fscanf(f2,"%s %d",otp,&o);
	 while(!feof(f2))
	 {
	  if(strcmp(m1,otp)==0)
	  {
	    lc=lc+4;
	    break;
	  }
	  fscanf(f2,"%s %d",otp,&o);
	  }
	  fclose(f2);
	  if(strcmp(m1,"BALR")==0)
	 
	    {
	   lc=lc+0;
	   }
	   else if(strcmp(m1,"USING")==0)
	 
	    {
	   lc=lc+0;
	   }
	   
	    else if(strcmp(m1,"EQU")==0)
	    {
	   lc=lc+0;
	    }
	    else if(strcmp(m1,"DC")==0)
	    {
	     lc=lc+4;
	     }
	     else if(strcmp(m1,"DS")==0)
	    {
	     lc=lc+4;
	     }
	      else if(strcmp(m1,"END")==0)
	    {
	     lc=lc+4;
	     }
	    fscanf(f1,"%s%s",la,m1);
	    }
	   	
	   /*Total of LC*/	
	   	printf("TOTAL IS :%d\n",lc);
	    fclose(f1);
	    fclose(f3);
	    return 0;
	    }
