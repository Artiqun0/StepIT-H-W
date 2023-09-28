#region Task 1

/*double[] A = new double[5];
double[,] B = new double[3, 4];

for (int i = 0; i < 5; i++)
{
    Console.Write("Enter number - ");
    A[i] = double.Parse(Console.ReadLine());
}

Console.Clear();

Random random = new Random();

for (int i = 0;i < 3;i++)
{
    for (int j = 0; j < 4; j++)
    {
        B[i,j] = random.NextDouble() * 10;
    }
}

// Min and Max elements

double maxA = A[0];
double minA = A[0];
double maxB = B[0, 0];
double minB = B[0, 0];

foreach (double element in A)
{
    if (element > maxA)
        maxA = element;
    if (element < minA)
        minA = element;
}

foreach (double element in B)
{
    if (element > maxB)
        maxB = element;
    if (element < minB)
        minB = element;
}


double summaA = 0;
double proizvedA = 1;
double summaB = 0;
double proizvedB = 1;

foreach (double element in A)
{
    summaA += element;
    proizvedA *= element;
}

foreach (double element in B)
{
    summaB += element;
    proizvedB *= element;
}

double evenSumA = 0;

foreach (double element in A)
{
    if (element % 2 == 0)
        evenSumA += element;
}

double nonEvenSumB = 0;

for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 4; j++)
    {
        if (j % 2 == 0) // это условие для нечетных столбцов не по индексам.
        {
            nonEvenSumB += B[i, j];
        }
    }
}

for (int i = 0; i < 5; i++)
{
    Console.Write(A[i]);
}

Console.WriteLine("\n");

for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 4; j++)
    {
        Console.Write($"{B[i, j].ToString("0.00")} ");
    }
    Console.WriteLine("\n");
}

Console.WriteLine($"Максимальный элемент в массиве A: {maxA}");
Console.WriteLine($"Минимальный элемент в массиве A: {minA}");
Console.WriteLine($"Максимальный элемент в массиве B: {maxB.ToString("0.00")}");
Console.WriteLine($"Минимальный элемент в массиве B: {minB.ToString("0.00")}");
Console.WriteLine($"Общая сумма всех элементов в массиве A: {summaA}");
Console.WriteLine($"Общее произведение всех элементов в массиве A: {proizvedA}");
Console.WriteLine($"Общая сумма всех элементов в массиве B: {summaB.ToString("0.00")}");
Console.WriteLine($"Общее произведение всех элементов в массиве B: {proizvedB.ToString("0.00")}");
Console.WriteLine($"Сумма четных элементов в массиве A: {evenSumA}");
Console.WriteLine($"Сумма нечетных столбцов в массиве B: {nonEvenSumB.ToString("0.00")}");*/

#endregion

#region Task 2

/*Random random = new Random();
int[,] arr = new int[5, 5];

for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
        arr[i, j] = random.Next(-100, 101);
    }
}

for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
        Console.Write($"{arr[i, j]} ");
    }
    Console.WriteLine("\n");
}

int minValue = arr[0, 0];
int maxValue = arr[0, 0];
int minI = 0;
int maxI = 0;
int minJ = 0;
int maxJ = 0;

for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
        if (minValue > arr[i, j])
        {
            minValue = arr[i, j];
            minI = i;
            minJ = j;
        }
        if (maxValue < arr[i, j])
        {
            maxValue = arr[i, j];
            maxI = i;
            maxJ = j;
        }
    }
}

int num;
int num2;


if (minI > maxI)
{
    num = minI;
    minI = maxI;
    maxI = num;

    num2 = minJ;
    minJ = maxJ;
    maxJ = num2;
}
else if (minI == maxI && minJ > maxJ)
{
    num2 = minJ;
    minJ = maxJ;
    maxJ = num2;
}

int sum = 0;

if (minI == maxI)
{
    for (int i = minI; i <= maxI; i++)
    {
        for (int j = minJ; j <= maxJ; j++)
        {
            sum += arr[i, j];
            Console.WriteLine($"{arr[i, j]} ");
        }
    }
}
else
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == minI && j >= minJ)
            {
                sum += arr[i, j];
                Console.Write($"{arr[i, j]} ");
            }
            else if (i > minI && i < maxI)
            {
                sum += arr[i, j];
                Console.Write($"{arr[i, j]} ");
            }
            else if (i == maxI && j <= maxJ)
            {
                sum += arr[i, j];
                Console.Write($"{arr[i, j]} ");
            }
        }
    }
}


Console.WriteLine("\n");
Console.WriteLine(minValue);
Console.WriteLine(maxValue);
Console.WriteLine(sum);*/

#endregion

#region Task 3

/*Console.Write("Enter number of shifts  - ");
int shift = int.Parse(Console.ReadLine());

Console.Write("Enter a sentence - ");
string sentence = (Console.ReadLine());

char[] charSentence = sentence.ToCharArray();
char[] newSentence = new char[charSentence.Length];

for (int i = 0; i < charSentence.Length - shift; i++)
{
    newSentence[i] = charSentence[i + shift];
}
for (int i = charSentence.Length - shift; i < charSentence.Length; i++)
{
    newSentence[i] = charSentence[i - (charSentence.Length - shift)];
}

Console.WriteLine(newSentence);*/

#endregion

#region Task 4

/*int[,] matrix_1 = new int[5, 5];
int[,] matrix_2 = new int[5, 5];
Random rand = new Random();

for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
        matrix_1[i,j] = rand.Next(0,9);
        matrix_2[i,j] = rand.Next(0,9);
    }
}
for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
        Console.Write($"{matrix_1[i, j]}\t");
    }
    Console.WriteLine("\n");
}
Console.WriteLine("\n");
Console.WriteLine("\n");
for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
        Console.Write($"{matrix_2[i, j]}\t");
    }
    Console.WriteLine("\n");
}

Console.WriteLine("\n");

Console.Write(
    "1.Multiplying a Matrix by a Number\n"+
    "2.Matrix addition\n"+
    "3.matrix multiplication\n"+
    "Enter your choice - ");
int choice = int.Parse(Console.ReadLine());
Console.Clear();

switch (choice)
{
    case 1:
        Console.Write("Enter a number to multiply - ");
        int multiplicatNumber = int.Parse(Console.ReadLine());

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                matrix_1[i,j] *= multiplicatNumber;
            }
        }

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                matrix_2[i, j] *= multiplicatNumber;
            }
        }

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                Console.Write($"{matrix_1[i, j]}\t");
            }
            Console.WriteLine("\n");
        }
        Console.WriteLine("\n");
        Console.WriteLine("\n");
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                Console.Write($"{matrix_2[i, j]}\t");
            }
            Console.WriteLine("\n");
        }
        break;
    case 2:
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                matrix_1[i, j] += matrix_2[i, j];
            }
        }
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                Console.Write($"{matrix_1[i, j]}\t");
            }
            Console.WriteLine("\n");
        }
        break;
    case 3:
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                matrix_1[i, j] *= matrix_2[i, j];
            }
        }
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                Console.Write($"{matrix_1[i, j]}\t");
            }
            Console.WriteLine("\n");
        }
        break;

    default:
        break;
}*/
#endregion

#region Task 5

/*Console.Write("Enter an expression  - ");
string expression = Console.ReadLine();

string _operator = "";
double operand_1;
double operand_2;

int operatorIndex = 0;


for (int i = 0; i < expression.Length; i++)
{
    if (expression[i] == '+')
    {
        _operator = "+";
        operatorIndex = i;
        break;
    }
    if (expression[i] == '-')
    {
        _operator = "-";
        operatorIndex = i;
        break;
    }
}



if (string.IsNullOrEmpty(_operator))
{
    Console.WriteLine("Operator + or - not found.");
}
else
{
    operand_1 = double.Parse(expression.Substring(0, operatorIndex));
    operand_2 = double.Parse(expression.Substring((operatorIndex + 1)));

    double result = 0;

    if (_operator == "+")
    {
        result = operand_1 + operand_2;
    }
    else if (_operator == "-")
    {
        result = operand_1 - operand_2;
    }

    Console.WriteLine($"Result: {result}");

}*/


#endregion

#region Task 6
/*using System.Text;

Console.WriteLine("Введите текст:");
string inputText = Console.ReadLine();
string resultText = UpperFoo(inputText);

Console.WriteLine("Результат:");
Console.WriteLine(resultText);
static string UpperFoo(string text)
{
    char[] sentenceDelimiters = { '.', '!', '?' };
    StringBuilder sb = new StringBuilder();
    for (int i = 0; i < text.Length; i++)
    {
        if (i == 0)
        {
            sb.Append(char.ToUpper(text[i]));
        }
        else if(i == 1)
        {
            sb.Append(text[i]);
        }
        else
        {
            for (int j = 0; j < sentenceDelimiters.Length; j++)
            {
                if (i > 1)
                {
                    if (sentenceDelimiters[j] == text[i - 2] && i != text.Length - 1)
                    {
                        sb.Append(char.ToUpper(text[i]));
                        break;
                    }
                    else if(j == sentenceDelimiters.Length - 1) 
                    {
                        sb.Append(text[i]);
                        break;
                    }
                }
            }
        }
    }
    return sb.ToString();
}*/








#endregion

#region Task 7

/*Console.Write("Enter text - ");
string text = Console.ReadLine();

Console.Write("Enter word  - ");
string word = Console.ReadLine();

string newWord = "";
for (int i = 0; i < word.Length; i++)
{
    newWord += '*';
}

text = text.Replace(word, newWord);
Console.WriteLine(text);
*/

#endregion