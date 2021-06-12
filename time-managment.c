#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define pass; ;
struct TIME{
		int hours;
		int seconds;
		int minutes;	
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
int time_to_sec(struct TIME t);
void __set_deadline__(struct TIMEMGMNT *self,struct DATE s_date,struct DATE edate,struct TIME ttime,const char *chapter);
void __printout__(struct TIMEMGMNT *self);

int main(){
	
	{
	struct TIMEMGMNT conic_section;
	struct DATE sdate={5,6,2021};
	struct DATE edate={10,6,2021};
	struct TIME ttime={8,0,0};
	__set_deadline__(&conic_section,sdate,edate,ttime,"conic section chapter no 11,11th mathematics");
	printf("%s",conic_section.title);	
	}

   {
	struct TIMEMGMNT i_3d_geometry;
	struct DATE sdate={11,6,2021};
	struct DATE edate={13,6,2021};
	struct TIME ttime={4,0,0};
	__set_deadline__(&i_3d_geometry,sdate,edate,ttime,"3d geometry chapter no 12,11th mathematics");
	printf("\n%s",i_3d_geometry.title);	
	}
	
			
	return 0; 	
	
}


int time_to_sec(struct TIME t){
	int sec;
	sec=(3600*t.hours)+(t.minutes*60)+(t.seconds);
	return sec; 	
}
void __set_deadline__(struct TIMEMGMNT *self,struct DATE s_date,struct DATE e_date,struct TIME ttime,const char *chapter){
		self->hours=ttime.hours;
		self->minutes=ttime.minutes;
		self->seconds=ttime.seconds;
		
		self->t_time_sec=time_to_sec(ttime);
		
		self->starting_date.dd=s_date.dd;
		self->starting_date.mm=s_date.mm;
		self->starting_date.yyyy=s_date.yyyy;
		
		self->ending_date.dd=e_date.dd;
		self->ending_date.mm=e_date.mm;
		self->ending_date.yyyy=e_date.yyyy;
		strcpy(self->title,chapter);
}

void __printout__(struct TIMEMGMNT *self){
		pass;	
}
	