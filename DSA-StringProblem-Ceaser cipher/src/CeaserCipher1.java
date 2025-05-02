
public class CeaserCipher1 {
	public static String change(String str,int key) {
		int newkey=key%26;
		char[] charArray=new char[str.length()];
		for(int i=0;i<str.length();i++) {
			char c=str.charAt(i);
			int letterposition =c+newkey;
			if(letterposition<='z') {
				charArray[i]=(char)letterposition;
				
			}else {
				charArray[i]=(char)('a'+(letterposition-'z'-1));
			}
			
		}
		return new String(charArray);
		
	}
public static void main(String[] args) {
	String value ="ayana";
	System.out.println(change(value,2));
}
}

