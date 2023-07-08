#include <stdio.h>

int main(){
		FILE *fp;
		fp = fopen("dosya.txt","w");
		fprintf(fp,"Efe Aygun");
		fclose(fp);
		
}
