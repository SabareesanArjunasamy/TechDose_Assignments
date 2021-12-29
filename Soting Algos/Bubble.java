class BubbleSort {
	public static void bubbleSort(int[] arr) {
		for(int x=0;x<arr.length-1;x++) {
			for(int y=x+1;y<arr.length;y++) {
				if(arr[x] > arr[y]) {
					arr[x] ^= arr[y];
					arr[y] ^= arr[x];
					arr[x] ^= arr[y];					
				}
			}

		}
	}
}