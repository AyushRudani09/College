// Online Java Compiler
// Use this editor to write, compile and run your Java code online

class shortArray {
    public static void main(String[] args) {
        
        int a[] = {10,20,45,2,3,4,9,40};
        for(int i = 0;i<a.length-1;i++){
            int min = a[i];
            int minIndex = i;
            for(int j = i+1 ; j < a.length;j++){
                if(min > a[j]){
                    min = a[j];
                    minIndex = j;
                }
            }
            if(minIndex != i){
                a[minIndex] = a[i];
                a[i] = min;
            }
        }
        for(int temp:a){
            System.out.print(temp + " ");
        }
    }
}