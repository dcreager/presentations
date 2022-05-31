#include <stdio.h>

int
save_file(const char* filename)
{
    FILE* fp = fopen(filename, "w");
    if (fp == NULL) goto error0;

    int rc = fputs("lots of interesting data", fp);
    if (rc < 0) goto error1;

    fclose(fp);
    return 0;

error1:
    fclose(fp);
error0:
    return -1;
}

int
main(void)
{
    save_file("out.dat");
}
