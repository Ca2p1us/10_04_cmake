#include <stdio.h>
#include <string.h>
int* FileOpen(FILE *fp,char *filename){
    if(fp = fopen(filename,"a+")==NULL){
        printf("ファイルを開けませんでした。\n");
    }else{
        return fp;
    }
}

void PDF(char *filename){
    FILE *gp;
    char dat[] = ".dat";
    char eps[] = ".eps";

    gp = popen("gnuplot -persist","w");
    fprintf(gp,"plot '%s'\n",strcat(*filename,dat));
    fprintf(gp,"set xtics 0, 0.25, 7\n");
    fprintf(gp,"set ytics -1, 0.5, 1\n");
    fprintf(gp,"set style data line\n");
    fprintf(gp,"replot\n");
    fprintf(gp,"set term eps\n");
    fprintf(gp,"set output '%s'\n",strcat(*filename,eps));
    fprintf(gp,"replot\n");
    fprintf(gp,"set output\n");
    fprintf(gp,"exit\n");

    pclose(gp);
    return 0;
}