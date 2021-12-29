import java.util.Arrays;

class insert {
	public static void insert(int[] arr) {
		int n = arr.length;

		for(int i=0;i<n;i++) {
			int val = arr[i];
			int j = i-1;
			while(j >= 0 && arr[j] > val) {
				arr[j+1] = arr[j--];
			}
			arr[j+1] = val;
		}

	}
	public static void main(String[] args) {
	    int[] arr = {12, 2, 9, 42};
		insert(arr);
		System.out.println(Arrays.toString(arr));	
	}
}