using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _23.Models;

public class Movie
{
    public string Id { get; set; } = Guid.NewGuid().ToString();
    public string Name { get; set; }
    public string Descriiption { get; set; }
    public int Year { get; set; }
    public string RatingID { get; set; }
    public MovieRating Rating { get; set; }
}