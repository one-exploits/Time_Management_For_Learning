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
int time_to_sec(struct TIME t);
struct TIME sec_to_h_m_s(int sec);
void __set_deadline__(struct TIMEMGMNT *self,struct DATE s_date,struct DATE edate,struct TIME ttime,const char *chapter);
void __printout__(struct TIMEMGMNT *self);
void __commit__(struct TIMEMGMNT *self,int dd,int mm,int yyyy,int h,int m,int s,const char *title);
int main(){
	
	{
	struct TIMEMGMNT conic_section;
	struct DATE sdate={5,6,2021};
	struct DATE edate={10,6,2021};
	struct TIME ttime={8,0,0};
	__set_deadline__(&conic_section,sdate,edate,ttime,"conic section chapter no 11,11th mathematics");
    printf("\n%d\n",conic_section.t_time_sec);	
    printf("%d:%d:%d",conic_section.hours,conic_section.minutes,conic_section.seconds);


	__commit__(&conic_section,5,6,2021,1,36,43,"(1)Exercise 11.1 going on okay.");
	printf("\n%d\n",conic_section.hours);	
	
	printf("%d:%d:%d",conic_section.hours,conic_section.minutes,conic_section.seconds);
		
	}

   {
	struct TIMEMGMNT i_3d_geometry;
	struct DATE sdate={11,6,2021};
	struct DATE edate={13,6,2021};
	struct TIME ttime={4,0,0};
	__set_deadline__(&i_3d_geometry,sdate,edate,ttime,"3d geometry chapter no 12,11th mathematics");
	printf("\n%s",i_3d_geometry.title);	
	}
//	struct TIME t=sec_to_h_m_s(125);
//	printf("\nH:M:S %d:%d:%d",t.hours,t.minutes,t.seconds);
			
	return 0; 	
	
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
void __commit__(struct TIMEMGMNT *self,int dd,int mm,int yyyy,int h,int m,int s,const char *title){
			struct TIME used_time={h,m,s};
			//printf("%d:%d:%d==%d",used_time.hours,used_time.minutes,used_time.seconds,time_to_sec(used_time));
			struct TIME new_time_update;
			struct DATE present_date={dd,mm,yyyy};
			int used_time_sec;
			used_time_sec=time_to_sec(used_time);
			//printf("\n%d",used_time_sec);
			
				self->t_time_sec=self->t_time_sec-used_time_sec;
				new_time_update=sec_to_h_m_s(self->t_time_sec);
				self->hours=new_time_update.hours;
				self->minutes=new_time_update.minutes;
				self->seconds=new_time_update.seconds;
			strcat(self->title,"\n");
			strcat(self->title,title);
	
	}
void __printout__(struct TIMEMGMNT *self){
		pass;	
}
	