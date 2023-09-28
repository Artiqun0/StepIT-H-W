
using System.Xml.Serialization;

#region Task1
/*bool key = true;
while (key)
{
    Console.WriteLine("Выберите направление перевода:");
    Console.WriteLine("1. Из десятичной в двоичную");
    Console.WriteLine("2. Из двоичной в десятичную");
    Console.WriteLine("3. Выйти из программы");
    Console.Write("Enter choice - ");

    int choice = int.Parse(Console.ReadLine());

    switch (choice)
    {
        case 1:
            ConvertDecimalToBinary();
            break;
        case 2:
            ConvertBinaryToDecimal();
            break;
        case 3:
            key = false;
            break;
        default:
            Console.WriteLine("Неверный выбор. Пожалуйста, введите 1, 2 или 3.");
            Console.WriteLine("\n"); 
            break;
    }
}
    

    static void ConvertDecimalToBinary()
{
    Console.Write("Введите число в десятичной системе: ");
    if (int.TryParse(Console.ReadLine(), out int decimalNumber))
    {
        string binaryNumber = Convert.ToString(decimalNumber, 2);
        Console.WriteLine($"Число {decimalNumber} в двоичной системе: {binaryNumber}");
    }
    else
    {
        Console.WriteLine("Неверный ввод. Пожалуйста, введите целое число не более 2 147 483 000.");
    }
}

static void ConvertBinaryToDecimal()
{
    Console.Write("Введите число в двоичной системе: ");
    string binaryInput = Console.ReadLine();

    if (IsValidBinary(binaryInput))
    {
        int decimalNumber = Convert.ToInt32(binaryInput, 2);
        Console.WriteLine($"Число {binaryInput} в десятичной системе: {decimalNumber}");
    }
    else
    {
        Console.WriteLine("Неверный ввод. Пожалуйста, введите корректное двоичное число.");
    }
}

static bool IsValidBinary(string input)
{
    foreach (char c in input)
    {
        if (c != '0' && c != '1')
        {
            return false;
        }
    }
    return true;
}*/
#endregion

#region Task2

/*string[] numberWords = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

for (int i = 0; i < 10; i++)
{
    Console.WriteLine($"{i} - {numberWords[i]}");
}*/

#endregion

#region Task3

/*Console.Write("Enter ID - ");
string id = Console.ReadLine();

Console.Write("Enter name - ");
string name = Console.ReadLine();

Console.Write("Enter surname - ");
string surname = Console.ReadLine();

Console.Write("Enter date - ");
string date = Console.ReadLine();

Pasport pasport = new(id, name, surname, date);*/


#endregion

#region Task4

/*Console.Write("Введите логическое выражение (например, 3 > 2 или 7 < 3): ");
string input = Console.ReadLine();

try
{
    bool result = solverFoo(input);
    Console.WriteLine($"Результат: {result}");
}
catch (Exception ex)
{
    Console.WriteLine($"Ошибка: {ex.Message}");
}
    

    static bool solverFoo(string input)
{
    string[] parts = input.Split(' ');

    if (parts.Length != 3)
    {
        throw new FormatException("Неверный формат выражения, выражение должно иметь вид - (3 > 2 или 7 < 3).");
    }

    int leftOperand = int.Parse(parts[0]);
    string operatorStr = parts[1];
    int rightOperand = int.Parse(parts[2]);


    switch (operatorStr)
    {
        case ">":
            return leftOperand > rightOperand;
        case "<":
            return leftOperand < rightOperand;
        case ">=":
            return leftOperand >= rightOperand;
        case "<=":
            return leftOperand <= rightOperand;
        case "==":
            return leftOperand == rightOperand;
        case "!=":
            return leftOperand != rightOperand;
        default:
            throw new FormatException("Неверный оператор. Допустимые операторы: <, >, <=, >=, ==, !=");
    }
}*/
#endregion