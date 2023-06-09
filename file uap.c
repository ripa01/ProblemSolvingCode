/* Program: printing value of different data
types in a text file

#include <stdio.h>
main(){
    FILE *fp;
    int a = 10;
    float b = 6.75;
    char c = 'A';
    double d = 5.25;
    fp = fopen("myfile.txt","w");
    if(fp == NULL) {
        printf("Error....");
        return;
    }
    fprintf(fp,"%d %f %c %lf",a,b,c,d);
    fclose(fp);
}
*/

/* Program: reading value of different data
types from a text file

#include <stdio.h>

main(){

    FILE *fp;
    int a;
    float b;
    char c;
    double d;

    fp = fopen("myfile.txt","r");
    if(fp == NULL) {
        printf("Error....");
        return;
    }
    fscanf(fp,"%d %f %c %lf",&a,&b,&c,&d);
    printf("a = %d b = %f c = %c d = %lf",a,b,c,d);
    fclose(fp);

}
*/

/* Program: printing all even numbers between 1 to n
in a text file. n will be input

#include <stdio.h>

main(){

    FILE *fp;
    int i,n;
    scanf("%d",&n);
    fp = fopen("myfile.txt","w");
    if(fp == NULL) {
        printf("Error....");
        return;
    }
    for(i = 2; i <= n; i+= 2)
        fprintf(fp,"%d ",i);
    fclose(fp);

}

*/

/* Program: printing a string to a text file. string
will be input

#include <stdio.h>

main(){

    FILE *fp;
    int i,n;
    char s[80];
    gets(s);
    fp = fopen("myfile.txt","w");
    if(fp == NULL) {
        printf("Error....");
        return;
    }
    for(i = 0; i < strlen(s); i++)
        fprintf(fp,"%c",s[i]);
    fclose(fp);

}

*/

/* Copying  content of one text file to another text file

#include <stdio.h>

main(){

    FILE *fp1,*fp2;
    char ch;

    fp1 = fopen("myfile.txt","r");
    fp2 = fopen("yourfile.txt","w");
    if(fp1 == NULL || fp2 == NULL) {
        printf("Error....");
        return;
    }
    while(1){
        fscanf(fp1,"%c",&ch);
        if(feof(fp1)) break;
        fprintf(fp2,"%c",ch);
    }
    fclose(fp1);
    fclose(fp2);

}
*/


/* Program: printing value of different data
types in a binary file

#include <stdio.h>
main(){
    FILE *fp;
    int a = 10;
    float b = 6.75;
    char c = 'A';
    double d = 5.25;
    fp = fopen("myfile.dat","wb");
    if(fp == NULL) {
        printf("Error....");
        return;
    }
    fwrite(&a,sizeof(a),1,fp);
	fwrite(&b,sizeof(b),1,fp);
	fwrite(&c,sizeof(c),1,fp);
	fwrite(&d,sizeof(d),1,fp);
    fclose(fp);
}

*/

/* Program: reading value of different data
types from a binary file

#include <stdio.h>
main(){
    FILE *fp;
    int a = 10;
    float b = 6.75;
    char c = 'A';
    double d = 5.25;
    fp = fopen("myfile.dat","wb");
    if(fp == NULL) {
        printf("Error....");
        return;
    }
    fread(&a,sizeof(a),1,fp);
	fread(&b,sizeof(b),1,fp);
	fread(&c,sizeof(c),1,fp);
	fread(&d,sizeof(d),1,fp);
	printf("a = %d b = %f c = %c d = %lf",a,b,c,d);
    fclose(fp);
}

*/

#include <stdio.h>
#include <stdlib.h> // For exit()

int main()
{
    FILE *fptr1, *fptr2;
    char filename[100], c;

    printf("Enter the filename to open for reading \n");
    scanf("%s", filename);

    // Open one file for reading
    fptr1 = fopen(filename, "r");
    if (fptr1 == NULL)
    {
        printf("Cannot open file %s \n", filename);
        exit(0);
    }

    printf("Enter the filename to open for writing \n");
    scanf("%s", filename);

    // Open another file for writing
    fptr2 = fopen(filename, "w");
    if (fptr2 == NULL)
    {
        printf("Cannot open file %s \n", filename);
        exit(0);
    }

    // Read contents from file
    c = fgetc(fptr1);
    while (c != EOF)
    {
        fputc(c, fptr2);
        c = fgetc(fptr1);
    }

    printf("\nContents copied to %s", filename);

    fclose(fptr1);
    fclose(fptr2);
    return 0;
}


