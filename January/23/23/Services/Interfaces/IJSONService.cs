namespace _23.Services.Interfaces;

public interface IJSONService
{
    public T Deserialize<T>(string json);
}