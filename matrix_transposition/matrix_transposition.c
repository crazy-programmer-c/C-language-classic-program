#include <stdio.h>

void transpose(void *dest, void *src, int src_h, int src_w)
{
 int i, j;
 double (*d)[src_h] = dest, (*s)[src_w] = src;
 for (i = 0; i < src_h; i++)
  for (j = 0; j < src_w; j++)
   d[j][i] = s[i][j];
}

int main(argc, argv)
int argc;
char *argv[];
{
 int i, j;
 
 double a[2][3];
 double b[3][2];
 a[0][0] = atoi(argv[1]);
 a[0][1] = atoi(argv[2]);
 a[0][2] = atoi(argv[3]);
 
 a[1][0] = atoi(argv[4]);
 a[1][1] = atoi(argv[5]);
 a[1][2] = atoi(argv[6]);

 
 transpose(b, a, 2, 3);
 for (i = 0; i < 3; i++)
  for (j = 0; j < 2; j++)
    fprintf(stdout, "%f\n", b[i][j]);
 return 0;
}

