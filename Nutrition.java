import java.util.*;

class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner scanner = new Scanner(System.in);
        int testCases = scanner.nextInt();
        
        while (testCases > 0) {
            List<Integer> uniqueTypes = new ArrayList<>();
            HashMap<Integer, Integer> typeNutritionMap = new HashMap<>();
            int n = scanner.nextInt();
            int[] foodTypes = new int[n];
            
            for (int i = 0; i < n; i++) {
                int foodType = scanner.nextInt();
                foodTypes[i] = foodType;
            }
            
            for (int i = 0; i < n; i++) {
                int nutritionValue = scanner.nextInt();
                int foodType = foodTypes[i];
                
                if (!typeNutritionMap.containsKey(foodType)) {
                    uniqueTypes.add(foodType);
                    typeNutritionMap.put(foodType, nutritionValue);
                } else {
                    int existingValue = typeNutritionMap.get(foodType);
                    if (nutritionValue > existingValue) {
                        typeNutritionMap.put(foodType, nutritionValue);
                    }
                }
            }
            
            int totalNutrition = 0;
            for (int i = 0; i < uniqueTypes.size(); i++) {
                int nutritionValue = typeNutritionMap.get(uniqueTypes.get(i));
                if (nutritionValue > 0) {
                    totalNutrition += nutritionValue;
                }
            }
            
            System.out.println(totalNutrition);
            testCases--;
        }
    }
}
