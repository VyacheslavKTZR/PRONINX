#include "kernel/types.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
	printf("PRONINX rebooting...\n");
	reboot();
	exit(0);
	
}
