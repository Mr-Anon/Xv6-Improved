#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
#define ll int

ll main(ll argc,char** argv)
{
	ll n=1;
	if(argc<2)
		n=1;	//default value
	else
		n=atoi(argv[1]);
	ll pid;
	volatile ll x;
	ll waitvar,runvar;
	for(ll k=0;k<n;++k)
	{
		pid=fork();
		if(pid<0)
		{
			printf(1,"fork failed\n");
		}
		else if(pid>0)
		{
			printf(1,"Parent %d created child %d\n",getpid(),pid);
			waitx(&waitvar,&runvar);
			printf(1,"pid:%d waittime:%d runtime:%d\n",pid,waitvar,runvar);
		}
		else
		{
			for(ll r=0;r<100000000;++r)
			{
				x=x+5;
				x=x*5.344;
				x=x/6.2442;
				x=x-3853;
			}
			break;
		}
	}
	exit();
}