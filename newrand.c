#include <time.h>
int main(){
	time_t seconds;
int num,i=0;
//	for(int i=0;i<9;i++){
 srand(time(NULL));
for(;;)
{sleep(1);
	while(i<20){
 	 num=((rand()%(128)));
        if(num>31&&num<80){
	                      num=num+47;
			      i++;
	printf("%c",num);
	                                      }
        else if(num>79&&num<127){
	                      num=num-47;
			      i++;
	printf("%c",num);
	                                            }
}
srand(rand());
i=0;
printf("\n");}
}
