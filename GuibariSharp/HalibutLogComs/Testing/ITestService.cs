using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HalibutLogComs
{
    interface ITestService
    {
        string Send(string s);
        long Add(long a, long b);
    }
}
