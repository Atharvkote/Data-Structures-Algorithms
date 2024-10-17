import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

class Array {
	ArrayList<Integer> array;

	Array(int size) {
		array = new ArrayList<>(size);
		// Overloaded Constructor
	}

	Array() {
		array = new ArrayList<>(5);
		// Default Constructor
	}

	public void insert(int num) {
		array.add(num);
	}

	public void insert(List<Integer> nums) {
		array.addAll(nums);
	}

	public int get(int index) throws Exception {
		if (index >= array.size()) {
			throw new Exception("Indexing Error: ArrayIndex Out of Bound");
		}
		return array.get(index);
	}

	public void linearSearch(int target) {
		if (!isSorted()) {
			System.out.print("Given Array Is Not Sorted, Sorting Given Array....\n");
			selectionSort();

		}
		printArray();

		System.out.print("Sorted Index  : [ ");
		for (int i = 0; i < array.size(); i++) {
			System.out.print(i + " ,");
		}
		System.out.println("]");

		List<Integer> occurrences = new ArrayList<>();
		for (int i = 0; i < array.size(); i++) {
			if (target == array.get(i)) {
				occurrences.add(i);
			}
		}

		if (occurrences.isEmpty()) {
			System.out.println("No Match Found");
		} else {
			System.out.println("Occurrences of the Target: " + occurrences);
		}
	}

	public void binarySearch(int target) {
		if (!isSorted()) {
			System.out.print("Given Array Is Not Sorted, Sorting Given Array....\nSorted Array: ");
			selectionSort();
			printArray();
		}

		int left = 0;
		int right = array.size() - 1;
		int foundIndex = -1;

		while (left <= right) {
			int mid = left + (right - left) / 2;

			if (array.get(mid) == target) {
				foundIndex = mid;
				break;
			} else if (array.get(mid) < target) {
				left = mid + 1;
			} else {
				right = mid - 1;
			}
		}

		if (foundIndex == -1) {
			System.out.println("No Match Found");
		} else {
			System.out.println("First Occurrence of the Target: " + foundIndex);
		}
	}


	public void search(int target, boolean isLinearSearch) {
		if (isLinearSearch) {
			linearSearch(target);
		} else {
			binarySearch(target);
		}
	}

	public int size() {
		return array.size();
	}

	boolean isSorted() {
		for (int i = 1; i < array.size(); i++) {
			if (array.get(i - 1) > array.get(i)) {
				return false;
			}
		}
		return true;
	}

	void selectionSort() {
		for (int i = 0; i < array.size() - 1; ++i) {
			int min_idx = i;
			for (int j = i + 1; j < array.size(); ++j) {
				if (array.get(j) < array.get(min_idx)) {
					min_idx = j;
				}
			}
			int temp = array.get(min_idx);
			array.set(min_idx, array.get(i));
			array.set(i, temp);
		}
	}

	void printArray() {

		System.out.print("Sorted Array:   [ ");
		for (int i = 0; i < array.size(); i++) {
			System.out.print(array.get(i) + " ,");
		}
		System.out.println("]");
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter Array Size: ");
		int size = sc.nextInt();

		Array arr = new Array(size);

		for (int i = 0; i < size; i++) {
			System.out.print("Enter Element at [ " + i + " ]: ");
			int num = sc.nextInt();
			arr.insert(num);
		}

		System.out.print("Searching Menu :\n1. Linear Search\n\t• Time Complexity: O(n)\n2. Binary Search\n\t• Time Complexity: O(log n)\nSelect search method: ");
		int choice = sc.nextInt();
		boolean isLinearSearch = (choice == 1);

		if (isLinearSearch) {
			System.out.print("Enter Element to Search (Linear Search): ");
		} else {
			System.out.print("Enter Element to Search (Binary Search): ");
		}

		arr.search(sc.nextInt(), isLinearSearch);

		sc.close();
	}
                      }
