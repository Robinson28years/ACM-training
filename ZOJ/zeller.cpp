#include <bits/stdc++.h>
using namespace std;

int ReturnWeekDay( unsigned int iYear, unsigned int iMonth, unsigned int iDay )
{
    int iWeek = 0;
    unsigned int y = 0, c = 0, m = 0, d = 0;

    if ( iMonth == 1 || iMonth == 2 )
    {
        c = ( iYear - 1 ) / 100;
        y = ( iYear - 1 ) % 100;
        m = iMonth + 12;
        d = iDay;
    }
    else
    {
        c = iYear / 100;
        y = iYear % 100;
        m = iMonth;
        d = iDay;
    }

    iWeek = y + y / 4 + c / 4 - 2 * c + 26 * ( m + 1 ) / 10 + d - 1;    //蔡勒公式
    iWeek = iWeek >= 0 ? ( iWeek % 7 ) : ( iWeek % 7 + 7 );    //iWeek为负时取模
    if ( iWeek == 0 )    //星期日不作为一周的第一天
    {
        iWeek = 7;
    }

    return iWeek;
}
int zeller(int year, int month, int day){
	if(month<3){year-=1;month+=12;}
    int c=year/100;
    int y=year-100*c;
    int w =c/4-2*c+y+y/4+26*(month+1)/10+day-1;
    w=(w%7+7)%7;
    return w;
}

int main(){
	std::cout << zeller(2017,4,23) << '\n';
	// std::cout << ReturnWeekDay(9999,12,31) << '\n';
	int y,c,m,d,w,year,month,day;
	std::cin >> year>>month>>day;
	y=year%100;
	c=year/100;
	m=month;d=day;
	if(m==1||m==2){
		y--;
		m+=12;
	}
	w=y+y/4+c/4-2*c+13*(m+1)/5+d-1;
	while(w<0)w+=7;
	w%=7;
	std::cout << w << '\n';
	return 0;
}
