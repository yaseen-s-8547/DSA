
public class customhashmap<K, V> {
	
		 class Entry<K,V>{
			K key;
			V value;
			Entry<K,V> next;
			public Entry(K key,V value) {
				this.key=key;
				this.value=value;
			}
			}
		 class myhash{
			 private static final int capacity=16;
			 private Entry<K, V>[] buckets;
			@SuppressWarnings("unchecked")
			public void MyHashMap() {
				buckets=new Entry[capacity];
				
			}
			 private int getindex(K key) {
				 return Math.abs(key.hashCode()%buckets.length);
				 
			 }
			 public void put(K key,V value) {
				 int index =getindex(key);
				 Entry<K,V>current=buckets[index];
				 if(current==null) {
					 buckets[index]=new Entry<>(key,value);
				 }else {
					 while(current!=null) {
						 if(current.key.equals(key)) {
							 current.value =value;
							 return;
						 }
						 if(current.next==null) {
							 break;//breaks the while loop
						 }
						 current=current.next;
					 }
					 current.next=new Entry<K, V>(key, value);
				 }}
				public V get(K key) {
					int index=getindex(key);
					Entry<K,V>current=buckets[index];
					while(current!=null) {
						if(current.key.equals(key))
							return current.value;
						current=current.next;
							}return null;
					}
			 }
			public static void main(String[] args) {
				customhashmap<String,String> myhash=new customhashmap<>();
				myhash.put("name","ayana");
				
			}
			
		
		 

}
