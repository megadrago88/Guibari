using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Serilog;
namespace HalibutLogComs
{
    class Program
    {
        public static void Main()
        {
            Log.Logger = new LoggerConfiguration()
                .WriteTo.Console()
                .CreateLogger();
            TestDaService SS = new TestDaService();
            SS.StartServer();
            SS.StartClient();
            Console.ReadKey();
        }
    }
}
