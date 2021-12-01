#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define pass; ;
struct TIME{
		int hours;
		int minutes;
		int seconds;
		
};
struct DATE{
		int dd;
		int mm;
		int yyyy;	
};
 
struct TIMEMGMNT{
		int hours;
		int seconds;
		int minutes;
		int t_time_sec;
		struct DATE starting_date;
		struct DATE ending_date;
		char title[256];	
};

/*function declaration*/
static void own_info();
int time_to_sec(struct TIME t);
struct TIME sec_to_h_m_s(int sec);

int main(){
own_info();
while(1){
	int h,m,s;
	struct TIME Start,End;
	int S_total_sec;
	int E_total_sec; 
    printf("\n\n\n\nStartint Time @Clock [H:M:S] ");
    scanf("%d%d%d",&h,&m,&s); 
      Start.hours=h;
      Start.minutes=m;
      Start.seconds=s;
      S_total_sec=time_to_sec(Start);
    printf("\nEnd Time @Clock [H:M:S] ");
    scanf("%d%d%d",&h,&m,&s);
      if(h<Start.hours){
      	End.hours=h+12;
      	printf("End %d",End.hours);
      }else{
          End.hours=h;	
      }
     // End.hours=h;
      End.minutes=m;
      End.seconds=s;
      E_total_sec=time_to_sec(End);

int working_time_in_sec;
struct TIME w_hour_in_format;
working_time_in_sec=E_total_sec-S_total_sec;
//printf("%d",working_time_in_sec);
w_hour_in_format=sec_to_h_m_s(working_time_in_sec);

printf("\033[93m\n\nWorking Hours (: (H:m:s) %d:%d:%d"
	    ,w_hour_in_format.hours
        ,w_hour_in_format.minutes
        ,w_hour_in_format.seconds
        );

printf("\n\033[93mWorking Hours (: (H:m:s) %dHourse  %dMinutes  %dSeconds"
	    ,w_hour_in_format.hours
        ,w_hour_in_format.minutes
        ,w_hour_in_format.seconds
        );


}
}
   
    
int time_to_sec(struct TIME t){
	int sec;
	sec=(3600*t.hours)+(t.minutes*60)+(t.seconds);
	return sec; 	

}
struct TIME sec_to_h_m_s(int sec){
	struct TIME t_to_ret;
	t_to_ret.hours=(sec)/(3600);
	t_to_ret.minutes=(sec-(t_to_ret.hours*3600))/(60);
	t_to_ret.seconds=(sec-(t_to_ret.hours*3600)-(t_to_ret.minutes*60));	
	return t_to_ret; 	
} 

static void own_info(){
printf("\n\n\nAuthor : One-Exploits @GNU/Projects"
"\n©Mohammad Arquam(C.E.O)"
"\n+______________________________________________+"
"\n| Programmer,H@cker,Web developer,Web designer,|\n| Data Scientist,Software developer,YouTuber,  |\n| Blogger and more.\t\t\t       |\n|\t\t\t\t\t       |"
"\n| Gmail: oneexploits@gmail.com\t\t       |"
"\n| GitHub: https://github.com/one-exploits      |"
"\n| Insta: https://www.instagram.com/one_exploits\|"
"\n| Website: https://one-exploits.business.site/ |"
"\n|\t\t\t\t\t       |"
"\n| \t\t\tVersion:1.00.00\t       |\n"
"|\t\t\tDate:02/12/2021,Thu    |"
"\n+______________________________________________+");

}
