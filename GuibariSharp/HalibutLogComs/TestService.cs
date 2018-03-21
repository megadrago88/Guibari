using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Serilog;
namespace HalibutLogComs
{
    public class TestService : ITestService
    {
        public long Add(long a, long b)
        {
            Log.Information("Adding {a} + {b}", a, b);
            return a + b;
        }

        public string Send(string s)
        {
            Log.Information("Returning string {s}", s);
            return s;
        }
    }
}
