MyArray array = new MyArray();

for (int i = 0; i < 10; i++)
{
    array.add(i);
}


Console.WriteLine(array.Less(5));
Console.WriteLine();
Console.WriteLine(array.Greater(8));

array.ShowEven();
array.ShowOdd();

Console.WriteLine(array.CountDistinct());
Console.WriteLine(array.EqualToValue(5));