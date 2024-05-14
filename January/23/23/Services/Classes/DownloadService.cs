using _23.Services.Interfaces;
using System.IO;
using System.Net.Http;

namespace _23.Services.Classes;

public class DownloadService : IDownloadService
{
    public string DownloadData(string movieName, string page = "1")
    {
        var client = new HttpClient();

        var request = new HttpRequestMessage
        {
            Method = HttpMethod.Get,
            RequestUri = new Uri($"https://api.kinopoisk.dev/v1.4/movie/search?page={page}&limit=10&query={movieName}"),
            Headers =
            {
                { "accept", "application/json" },
                { "X-API-KEY", "2ANT1NW-HJ943TY-KC35ZWZ-Y0DCG4D" },
            },
        };

        using var response = client.Send(request);
    
        try
        {
            response.EnsureSuccessStatusCode();
        }
        catch(Exception e)
        {
            Console.WriteLine(e.Message);
        }

        var stream = response.Content.ReadAsStream();

        using StreamReader sr = new(stream);

        return sr.ReadToEnd() ?? throw new NullReferenceException("Data is not found");
    }
}