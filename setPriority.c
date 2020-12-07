#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
#define ll int

ll main(ll argc,char** argv)
{
	ll pid,pr;

	if(argc<=2)
	{
		printf(1,"Invalid number of arguments\n");
		exit();
	}
	pid=atoi(argv[2]);
	pr=atoi(argv[1]);

	if(pr<0||pr>100)
	{
		printf(1,"Enter valid priority\n");
		exit();
	}
	changepr(pid,pr);
	exit();
}