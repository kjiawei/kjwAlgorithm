public class Test
{
	public static void main( String[] args ){		
		int[] ary = { 7, 9, 5, 1, 3, 6 };
		//从以上数组中查找出 1 的所在位置
		int index = -1;		
		//这一个过程称为: 遍历数组
		for( int i=0; i<ary.length; i++ ){
			if( ary[i]==10 ){
				index = i;
				break;
			}
		}		
		System.out.println(			
			(index==-1) ? "没有找到" : "index = "+ index		
		);		
	}
}