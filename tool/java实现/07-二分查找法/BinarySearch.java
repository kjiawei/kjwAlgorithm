public class BinarySearch{

	public static void main( String[] args ){	
		//���ֲ��ҷ�, ǰ��������  "�����"
		int[] ary = { -2, 1, 3, 6, 7, 9 };		
		int num = Integer.valueOf( args[0] );
		
		//��Ҫ�������ҵ� "5"
		int ret = getNum( ary, num );
		
		System.out.println( "ret : "+ ret );	
	}

	public static int getNum( int[] ary, int num ){

		int mid  = ary.length / 2;		
		int left = 0;                //���
		int right = ary.length - 1;  //�ұ�

		while( left <= right ){
			if( ary[mid]==num ){
				return mid;
			}
			if( ary[mid] > num ){
				right = mid - 1;     //���� "��"  ��ֵ
				System.out.println( "���� right: "+ right );
			}else if( ary[mid]<num ){
				left  = mid + 1;
				System.out.println( "���� left: "+ left );
			}
			mid = (left+right)/2;    //����һ���µ��е�
			System.out.println( "���� mid: "+ mid );
		}
		return -1;     //-1 �� ����û���ҵ�
	}
	


}