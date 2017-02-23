#include <stdio.h>
#include <gnu/libc-version.h>

int main()
{
	printf("version:%s\n",gnu_get_libc_version());
	return 0;
}
