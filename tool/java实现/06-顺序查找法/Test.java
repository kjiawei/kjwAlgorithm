public class Test
{
	public static void main( String[] args ){		
		int[] ary = { 7, 9, 5, 1, 3, 6 };
		//�����������в��ҳ� 1 ������λ��
		int index = -1;		
		//��һ�����̳�Ϊ: ��������
		for( int i=0; i<ary.length; i++ ){
			if( ary[i]==10 ){
				index = i;
				break;
			}
		}		
		System.out.println(			
			(index==-1) ? "û���ҵ�" : "index = "+ index		
		);		
	}
}