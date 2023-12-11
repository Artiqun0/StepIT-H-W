using _26._2.Factories;
using _26._2.Interfaces;

IAutomobileFactory sedanFactory = new SedanFactory();
IAutomobileFactory suvFactory = new SUVFactory();
IAutomobileFactory truckFactory = new TruckFactory();

IAutomobile sedan = sedanFactory.CreateAutomobile();
IAutomobile suv = suvFactory.CreateAutomobile();
IAutomobile truck = truckFactory.CreateAutomobile();

Console.WriteLine(sedan.GetModelInfo());
Console.WriteLine(suv.GetModelInfo());
Console.WriteLine(truck.GetModelInfo());