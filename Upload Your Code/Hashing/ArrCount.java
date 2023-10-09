import java.util.HashMap;

public class ArrCount {
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 1, 2, 1, 4, 5, 4, 3};
        HashMap<Integer, Integer> occurrenceCount = new HashMap<>();

            for (int element : arr) {
                occurrenceCount.put(element, occurrenceCount.getOrDefault(element, 0) + 1);
            }

        System.out.println(occurrenceCount);
    }
}
