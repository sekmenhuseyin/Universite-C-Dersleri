#include "stdio.h"
#include "conio.h"
#include "string.h"
#include "stdlib.h"

void main(){
	FILE *kp;
	char *s;
	int i;

	kp = fopen("dene.txt", "w"); /* NULL ise islem basarisiz */
	if (kp == NULL)
		exit(1);

	for (i=0; i<5; i++) {
		gets(s);
		fprintf(kp, "%s\n", s);
	}
	getch();
	fclose(kp);  /* kutugu kapatr. Program sona erdiginde
			otomatik kapatilir */
	/* fcloseall() hepsini kapatr. Donen , kapanan kutuk sayisi.
	 Hata var ise EOF doner	*/
}
