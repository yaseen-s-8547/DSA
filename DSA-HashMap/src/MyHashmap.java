public class MyHashmap<K, V> {

    // Entry class for each key-value pair
    static class Entry<K, V> {
        K key;
        V value;
        Entry<K, V> next;

        public Entry(K key, V value) {
            this.key = key;
            this.value = value;
        }
    }

    private static final int CAPACITY = 16; // Default bucket size
    private Entry<K, V>[] buckets;

    // Constructor
    @SuppressWarnings("unchecked")
    public MyHashmap() {
        buckets = new Entry[CAPACITY];
    }

    // Hashing function to calculate index
    private int getIndex(K key) {
        return Math.abs(key.hashCode()) % buckets.length;
    }

    // Put method to insert or update key-value pairs
    public void put(K key, V value) {
        int index = getIndex(key);
        Entry<K, V> current = buckets[index];

        // If no entry exists at index, insert directly
        if (current == null) {
            buckets[index] = new Entry<>(key, value);
            return;
        }

        // Traverse the linked list
        while (current != null) {
            if (current.key.equals(key)) {
                current.value = value; // Key exists, update value
                return;
            }
            if (current.next == null) break; // Reached end of chain
            current = current.next;
        }

        // Add new entry at the end of chain
        current.next = new Entry<>(key, value);
    }

    // Get method to retrieve a value
    public V get(K key) {
        int index = getIndex(key);
        Entry<K, V> current = buckets[index];

        while (current != null) {
            if (current.key.equals(key)) {
                return current.value;
            }
            current = current.next;
        }

        return null; 
    }
    public void remove(K key) {
    	int index=getIndex(key);
    	Entry<K, V> current=buckets[index];
    	Entry<K, V> prev=null;
    	while(current!=null) {
    		if(current.key.equals(key)) {
    			if(prev==null) {
    				buckets[index]=current.next;
    			}else {
    				prev.next=current.next;
    			}
    		}
    		prev=current;
    		current=current.next;
    	}}
    public void resize() {
    		int newcapacity=buckets.length*2;
    		Entry<K,V>[]newbuckets=new Entry[newcapacity];
    		for(Entry<K,V> entry:buckets) {
    			while(entry!=null) {
    				Entry<K, V>nextnodeinoldchain=entry.next;
    				int neewindex=Math.abs(entry.key.hashCode())%newcapacity;
    				entry.next=newbuckets[neewindex];
    				newbuckets[neewindex]=entry;
    				entry=nextnodeinoldchain;
    				}
    		}
    		buckets=newbuckets;
    		}
  public void printbuckets() {
	  for(int i=0;i<buckets.length;i++) {
		  System.out.print("Bucket"+i+":");
		  Entry<K,V> current=buckets[i];
		   while(current!=null) {
			  System.out.print("["+current.key+"="+current.value+"]->");
			  current=current.next;
		  }
		   System.out.print("null->");
		  
	  }
	 
  }

    // Main method to test it
    public static void main(String[] args) {
        MyHashmap<String, String> myhash = new MyHashmap<>();
        myhash.put("name", "ayana");
        myhash.put("place", "village");
        myhash.put("food","biriyani");
        myhash.put("color","pink");

        //System.out.println("name: " + myhash.get("name")); // ayana updated
        //System.out.println("place: " + myhash.get("place")); // village
        //System.out.println("unknown: " + myhash.get("unknown")); // null
        myhash.printbuckets();
    }
}


