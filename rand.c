#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	time_t seconds;
	seconds=time(NULL);
int num;
	for(int i=0;i<9;i++){
 	 num=((rand()*seconds)%(127+1));
        if(num>31&&num<80){
	                      num=num+47;
	                                      }
        else if(num>79&&num<127){
	                      num=num-47;
	printf("%c",num);
	                                            }
}}
