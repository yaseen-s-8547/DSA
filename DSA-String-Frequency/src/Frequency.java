
public class Frequency {
	public static void main(String[] args) {
		String str ="yaseen";
		int len =str.length();
		boolean[] visited=new boolean[len];
		for(int i=0;i<len;i++) {
			if(visited[i])
				continue;
			int count=1;
			for(int j=i+1;j<len;j++) {
				if(str.charAt(i)==str.charAt(j)) {
					count++;
					visited[j]=true;
				}
			}
			System.out.println(str.charAt(i)+"->"+count+"times");
		}
	}
	
}


