using _23.Models;
using _23.Services.Classes;
using _23.Services.Interfaces;
using System.Collections.ObjectModel;
using System.ComponentModel;
using System.Text;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace _23
{
    public partial class MainWindow : Window
    {
        private readonly DBContext _context = new();

        private readonly IDownloadService _downloadService = new DownloadService();
        private readonly IJSONService _jsonService = new JSONService();
        private readonly IDBEntryService _dbentry = new DBEntryService();

        public ObservableCollection<Movie> Movies { get; set; }

        private void Close(object sender, RoutedEventArgs e)
        {
            App.Current.Shutdown();
        }

        private void DragWindow(object sender, MouseButtonEventArgs e)
        {
            if (e.LeftButton == MouseButtonState.Pressed)
            {
                DragMove();
            }
        }

        private void Search(object sender, RoutedEventArgs e)
        {
            var response = _downloadService.DownloadData(SearchText.Text);

            var movies = _jsonService.Deserialize<RootObject>(response);

            foreach (var item in movies.docs)
            {
                try
                {
                    Movies.Add(_dbentry.toMovie(item));
                }
                catch (Exception) { }
            }
        }

        public MainWindow()
        {
            InitializeComponent();
            DataContext = this;
            Movies = new();
        }

        private void Save(object sender, RoutedEventArgs e)
        {
            Button clickedButton = sender as Button;

            Movie movie = clickedButton.DataContext as Movie;

            _context.MovieRating.Add(movie.Rating);
            _context.Movies.Add(movie);

            _context.SaveChanges();
        }
    }
}