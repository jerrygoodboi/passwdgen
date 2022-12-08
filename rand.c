#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	time_t seconds;
int num,i=0;
//	for(int i=0;i<9;i++){
while(i<20){
	seconds=time(NULL);
 	 num=((rand()*seconds)%(127+1));
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
printf("\n");
}
