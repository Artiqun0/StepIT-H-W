using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Text;
using System.Text.Json.Serialization;
using System.Threading.Tasks;

namespace _23.Models;

public class MovieRating
{
    public string Id { get; set; } = Guid.NewGuid().ToString();

    public double? KP { get; set; }

    public double? IMDB { get; set; }

    public double? TMDB { get; set; }

    public ICollection<Movie> Movies { get; set; }
}