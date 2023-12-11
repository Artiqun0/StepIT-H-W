using _26._1.Builder;
using _26._1.Builders;
using _26._1.Services.Interfaces;
using _26._1.Services;
using _26._1;

ComputerDirector director = new ComputerDirector();

IComputerBuilder officeBuilder = new OfficeComputerBuilder();
IComputerBuilder gamingBuilder = new GamingComputerBuilder();
IComputerBuilder designerBuilder = new DesignerComputerBuilder();

director.ConstructComputer(officeBuilder);
Computer officeComputer = officeBuilder.GetComputer();

director.ConstructComputer(gamingBuilder);
Computer gamingComputer = gamingBuilder.GetComputer();

director.ConstructComputer(designerBuilder);
Computer designerComputer = designerBuilder.GetComputer();

System.Console.WriteLine("Office Computer:");
officeComputer.PrintInfo();

System.Console.WriteLine("Gaming Computer:");
gamingComputer.PrintInfo();

System.Console.WriteLine("Designer Computer:");
designerComputer.PrintInfo();