
//2016 
//1月1日  --> 周 5

public class WeekTest{

	public static void main( String[] args ){
	
		int year = 2016;
		int month = 6;
		int monDay;
		boolean isLeap;
		
		isLeap = isLeapYear( year );   //确认: 是否是一个闰年 ?
		
		int total = getFirstDay( year );
		
		int curMonDay;   //当月的天数
		//为了拿 5 月 1 日是星期几 ?
		for( int m = 1; m<month; m++ ){    //m: 代表月，一直算到 4 月			
			total += getDaysInMonth( m, isLeap );
		}
		System.out.println( "total: "+ total );
		System.out.println( "total: "+ (total % 7) );
		
		int startDay = total % 7 + 1;    //5月份第一天是周几
		
		int day = getDaysInMonth( month, isLeap );		//拿到 5 月的天数
		int len = startDay + day;    //day: 5 月份的天数
		int curDay = 1;		
		for( int d = 1; d<len; d++ ){
			if( d<startDay ){                //打印1日之前的空格
				System.out.print( "   " );   //打印空格
			}else{                           //打印天
				System.out.printf( "%3d", curDay );
				curDay ++;
			}
			if( d % 7 ==0 )
				System.out.printf( "\n" );
		}
		
		//得到当月的天数
		
		//当年是否为闰年 ？
		
		//得到元月1日是星期几	
	
	}
	
	//如何使用方法来简化流程
	//编写一个计算某一年是否为闰年的方法
	public static boolean isLeapYear( int year ){	
		//boolean ret = false;
		// 4 年一闰并且百年不闰,  400 年再闰
		//if( (year%4==0 && year%100!=0) || year%400==0 ){
		//	ret = true;
		//}		
		return ((year%4==0 && year%100!=0) || year%400==0)
				? true : false;	
		//返回一个结果, 返回给上一级的调用者
	}
	
	
	//获得当月天数
	public static int getDaysInMonth( int month, boolean isLeap ){		
		if( isLeap && month==2 ){
			return 29;
		}
		switch( month ){
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				return 31;		
			case 4: case 6: case 9: case 11:
				return 30;
			case 2:
				return 28;
		}
		return 0;
	}
	
	public static int getFirstDay( int year ){
		return 5;    //元月1日是周五
	}
	
}

