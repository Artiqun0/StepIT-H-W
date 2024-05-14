using _23.Models;
using _23.Services.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _23.Services.Classes;

class DBEntryService : IDBEntryService
{
    public Movie toMovie(Docs movie)
    {
        if (movie.name != "")
        {
            double[] ratings = new double[3];
            
            double.TryParse(movie.rating.kp.ToString(), out ratings[0]);
            double.TryParse(movie.rating.imdb.ToString(), out ratings[1]);
            double.TryParse(movie.rating.tmdb.ToString(), out ratings[2]);

            MovieRating rating = new()
            {
                KP = ratings[0],
                IMDB = ratings[1],
                TMDB = ratings[2]
            };

            Movie newMovie = new Movie()
            {
                Name = movie.name,
                Descriiption = movie.description,
                Year = movie.year,
                RatingID = rating.Id,
                Rating = rating
            };

            return newMovie;
        }

        throw new ArgumentException("Invalid data!");    
    }
}