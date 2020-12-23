#include"time.h"
{
Mytime::Mytime():m_hours(0),m_minutes(0),m_seconds(0);
{
}
Mytime::Mytime(int hh,int mm,int ss):m_hours(hh),m_minutes(mm),m_seconds(ss);
{
}
 Mytime::MyTime(int hours,int minutes):m_hours(hh),m_minutes(mm),m_seconds(ss);
 {
 }
 MyTime operator+(const MyTime &ref) {
    
     int hr = m_hours + a.m_hours;
     int min = m_minutes+ a.m_minutes;
     int sec = m_seconds + a.m_seconds;
     if(sec >=60)
     {
     min += sec/60;
     sec = sec%60;
     }
     if(min >=60)
     {
     hrs += min/60;
     mins = sec%60;
     }
     if(hr >=24)
     {
     
     hr%=24 
     min %=60;
     }
     if(hr>=24)
     {
     hr%=24;
     }
         return MyTime(hr, min, sec);
    }
 MyTime operator-(const MyTime &ref);
 {
 int hr = m_hours - a.m_hours;
     int min = m_minutes - a.m_minutes;
     int sec = m_seconds - a.m_seconds;
   
    return Mytime(hrs,min,sec);   
 }
 void Mytime::display() const
 {
 std::cout<<"the time is "<<m_hours<<":"<<m_minutes<<":"<<m_seconds<<":";
 }
 MyTime operator+(int t1);
 {
 int hr1 = m_hours ;
     int min1 = m_minutes+ t1;
     int sec1 = m_seconds;
     if(sec1 >=60)
     {
     min1 += sec1/60;
     sec1 = sec1%60;
     }
     if(min1 >=60)
     {
     hrs1 += min1/60;
     mins1 = sec1%60;
     }
     if(hr1 >=24)
     {
     
     hr1%=24 
     min1 %=60;
     }
     if(hr1>=24)
     {
     hr1%=24;
     }
         return MyTime(hr1, min1, sec1);
         }
     
 
