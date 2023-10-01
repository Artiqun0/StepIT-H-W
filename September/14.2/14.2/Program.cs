using _14._2;
Calculator calculator = new Calculator();

Calculator.MathOperation addition = calculator.Add;
Calculator.MathOperation subtraction = calculator.Subtract;
Calculator.MathOperation multiplication = calculator.Multiply;
Calculator.MathOperation division = calculator.Divide;

Console.WriteLine($"Результат сложения: {addition(5, 3)}");

Console.WriteLine($"Результат вычитания: {subtraction(10, 4)}");

Console.WriteLine($"Результат умножения: {multiplication(7, 2)}");

Console.WriteLine($"Результат деления: {division(8, 2)}");