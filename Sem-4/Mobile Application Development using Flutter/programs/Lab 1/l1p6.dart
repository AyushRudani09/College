import 'dart:io';

void main(){
    stdout.write("Enter Weight in pound : ");
    double? w = double.parse(stdin.readLineSync()!);
    stdout.write("Enter Height in inch : ");
    double? h = double.parse(stdin.readLineSync()!);
    w = w*0.4535923;
    h = h*0.254;
    double bmi = (w/(h*h));
    print("Your BMI is : $bmi");   
}
