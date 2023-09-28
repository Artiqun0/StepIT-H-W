using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace modul3
{
    class Web
    {
        public string Url { get; set; }
        public string IP { get; set; }
        public string WebsiteName { get; set; }
        public string Information { get; set; }
        public Web() { }
        public Web(string url, string ip, string name, string info)
        {
            Url = url;
            IP = ip;
            WebsiteName = name;
            Information = info;
        }
    }
}