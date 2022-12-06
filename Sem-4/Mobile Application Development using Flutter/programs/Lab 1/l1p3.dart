void main(){
    int f = 100;
    double c = ((f-32)*5)/9;
    String ans =  c.toStringAsFixed(2); //To Fix A Decimal Part in Any Types
    print("Temp In Celceous : $ans");
}