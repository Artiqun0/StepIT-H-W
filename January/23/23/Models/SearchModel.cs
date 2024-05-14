using System.Text.Json.Serialization;

namespace _23.Models;

public class RootObject
{
    [JsonPropertyName("docs")]
    public Docs[] docs { get; set; }

    [JsonPropertyName("total")]
    public int total { get; set; }

    [JsonPropertyName("limit")]
    public int limit { get; set; }

    [JsonPropertyName("page")]
    public int page { get; set; }

    [JsonPropertyName("pages")]
    public int pages { get; set; }
}

public class Docs
{
    [JsonPropertyName("id")]
    public int id { get; set; }

    [JsonPropertyName("name")]
    public string name { get; set; }

    [JsonPropertyName("alternativeName")]
    public string alternativeName { get; set; }

    [JsonPropertyName("enName")]
    public string enName { get; set; }

    [JsonPropertyName("type")]
    public string type { get; set; }

    [JsonPropertyName("year")]
    public int year { get; set; }

    [JsonPropertyName("description")]
    public string description { get; set; }

    [JsonPropertyName("shortDescription")]
    public string shortDescription { get; set; }

    [JsonPropertyName("movieLength")]
    public int movieLength { get; set; }

    [JsonPropertyName("rating")]
    public Rating rating { get; set; }
}

public class Rating
{
    [JsonPropertyName("kp")]
    public object kp { get; set; }

    [JsonPropertyName("imdb")]
    public object imdb { get; set; }

    [JsonPropertyName("tmdb")]
    public object tmdb { get; set; }
}