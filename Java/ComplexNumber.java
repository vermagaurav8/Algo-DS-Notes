public class ComplexNumber {

    public static int NumOfObject = 0;
    public int real, imaginary;

    ComplexNumber(int realN, int imaginaryN) {
        this.real = realN;
        this.imaginary = imaginaryN;
    }

    {
        NumOfObject += 1;
    }

    public ComplexNumber addComplex(ComplexNumber Num1, ComplexNumber Num2) {
        ComplexNumber temp = new ComplexNumber(0, 0);
        temp.real = Num1.real + Num2.real;
        temp.imaginary = Num1.imaginary + Num2.imaginary;
        return temp;
    }

    public ComplexNumber subComplex(ComplexNumber Num1, ComplexNumber Num2) {
        ComplexNumber temp = new ComplexNumber(0, 0);
        temp.real = Num1.real - Num2.real;
        temp.imaginary = Num1.imaginary - Num2.imaginary;
        return temp;
    }

    public void printComplex() {
        System.out.println("Complex number: " + real + " + " + imaginary + "i");
    }

    public static void main(String[] args) {
        ComplexNumber Number1 = new ComplexNumber(9, 5);
        Number1.printComplex();

        ComplexNumber Number2 = new ComplexNumber(3, 2);
        Number2.printComplex();

        ComplexNumber Number3 = new ComplexNumber(0, 0);
        Number3 = Number3.addComplex(Number1, Number2);
        System.out.println("Sum: ");
        Number3.printComplex();

        Number3 = Number3.subComplex(Number1, Number2);
        System.out.println("Difference: ");
        Number3.printComplex();

        System.out.println("Object: " + ComplexNumber.NumOfObject);
    }
}
