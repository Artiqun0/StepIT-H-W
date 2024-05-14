using System.Text.Json;
using _23.Services.Interfaces;

namespace _23.Services.Classes;

public class JSONService : IJSONService
{
        public T Deserialize<T>(string json) 
        {
            try
            {
                return JsonSerializer.Deserialize<T>(json) ?? throw new NullReferenceException("Deserialize error");
            }
            catch
            {
                throw;
            }
        }
}