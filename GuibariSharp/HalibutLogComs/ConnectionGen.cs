using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Halibut;
using Shibari.Sub.Core.Shared.IPC;

namespace HalibutLogComs
{
    public class ConnectionGen
    {
        public void S()
        {
            var services = new Halibut.ServiceModel.DelegateServiceFactory();
            var Haltime = new HalibutRuntime(services, Configuration.ServerCertificate);
        }
    }
}
