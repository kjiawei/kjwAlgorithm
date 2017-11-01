
//2016 
//1��1��  --> �� 5

public class WeekTest{

	public static void main( String[] args ){
	
		int year = 2016;
		int month = 6;
		int monDay;
		boolean isLeap;
		
		isLeap = isLeapYear( year );   //ȷ��: �Ƿ���һ������ ?
		
		int total = getFirstDay( year );
		
		int curMonDay;   //���µ�����
		//Ϊ���� 5 �� 1 �������ڼ� ?
		for( int m = 1; m<month; m++ ){    //m: �����£�һֱ�㵽 4 ��			
			total += getDaysInMonth( m, isLeap );
		}
		System.out.println( "total: "+ total );
		System.out.println( "total: "+ (total % 7) );
		
		int startDay = total % 7 + 1;    //5�·ݵ�һ�����ܼ�
		
		int day = getDaysInMonth( month, isLeap );		//�õ� 5 �µ�����
		int len = startDay + day;    //day: 5 �·ݵ�����
		int curDay = 1;		
		for( int d = 1; d<len; d++ ){
			if( d<startDay ){                //��ӡ1��֮ǰ�Ŀո�
				System.out.print( "   " );   //��ӡ�ո�
			}else{                           //��ӡ��
				System.out.printf( "%3d", curDay );
				curDay ++;
			}
			if( d % 7 ==0 )
				System.out.printf( "\n" );
		}
		
		//�õ����µ�����
		
		//�����Ƿ�Ϊ���� ��
		
		//�õ�Ԫ��1�������ڼ�	
	
	}
	
	//���ʹ�÷�����������
	//��дһ������ĳһ���Ƿ�Ϊ����ķ���
	public static boolean isLeapYear( int year ){	
		//boolean ret = false;
		// 4 ��һ���Ұ��겻��,  400 ������
		//if( (year%4==0 && year%100!=0) || year%400==0 ){
		//	ret = true;
		//}		
		return ((year%4==0 && year%100!=0) || year%400==0)
				? true : false;	
		//����һ�����, ���ظ���һ���ĵ�����
	}
	
	
	//��õ�������
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
		return 5;    //Ԫ��1��������
	}
	
}

