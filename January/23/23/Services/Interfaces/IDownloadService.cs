namespace _23.Services.Interfaces;

public interface IDownloadService
{
    public string DownloadData(string movieName, string page = "1");
}