using _23.Models;
using Microsoft.EntityFrameworkCore;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _23;

class DBContext : DbContext
{
    public DbSet<Movie> Movies { get; set; }
    public DbSet<MovieRating> MovieRating { get; set; }

    protected override void OnConfiguring(DbContextOptionsBuilder optionsBuilder)
    {
        optionsBuilder.UseSqlServer("Data Source=localhost; Initial Catalog=HW; Integrated Security=True; Trust Server Certificate = True");
    }

    protected override void OnModelCreating(ModelBuilder modelBuilder)
    {
        var movie = modelBuilder.Entity<Movie>();
        var movieRating = modelBuilder.Entity<MovieRating>();

        movie
            .HasKey(o => o.Id);

        movie
            .Property(m => m.Name)
            .IsRequired();

        movie
            .Property(m => m.Descriiption)
            .IsRequired();

        movie
            .Property(m => m.Year)
            .IsRequired();

        movieRating
            .HasKey(mr => mr.Id);

        movieRating
            .Property(mr => mr.KP)
            .IsRequired(false);

        movieRating
            .Property(mr => mr.IMDB)
            .IsRequired(false);

        movieRating
            .Property(mr => mr.TMDB)
            .IsRequired(false);

        movieRating
            .HasMany(m => m.Movies)
            .WithOne(m => m.Rating)
            .HasForeignKey(m => m.RatingID);
    }
}