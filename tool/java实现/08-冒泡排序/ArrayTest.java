
public class ArrayTest{

	public static void main( String[] args ){
		int[] ary = { 5, 1, 0, 3, 2, -2 };
		sort( ary );		
		for( int i=0; i<ary.length; i++ ){
			System.out.print( ary[i]+ "," );
		}
	}

	//ð��������㷨
	public static void sort( int[] ary ){
		int temp;   //��ʱ������
		int j = 0;	
		//i : 6 5 4 3 2
		for( int i=ary.length; i >= 2; i-- ){
			//�����Ƚ�
			j = 0;
			//j : 0, 1, 2, 3, 4 [������]
			//j : 0, 1          [���ٴ���] , i = 2 ʱ
			for( j=0; j<i-1; j++ ){
				if( ary[j] > ary[j+1] ){
					temp = ary[j];
					ary[j] = ary[j+1];
					ary[j+1] = temp;
				}
			}
		}	
	}

}