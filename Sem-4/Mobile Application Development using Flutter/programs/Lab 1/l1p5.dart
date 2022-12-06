import 'dart:io';

void main(){
    stdout.write("Enter Meter : ");
    // print("");
    int? m = int.parse(stdin.readLineSync()!);
    double feet = m*3.281;
    print("$m meter  = $feet  feet");
}
