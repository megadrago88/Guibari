using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Halibut;
using Halibut.ServiceModel;
using Shibari.Sub.Core.Shared.IPC;

namespace HalibutLogComs
{
    class TestDaService
    {

        public void StartServer()
        {
            var services = new DelegateServiceFactory();
            services.Register<ITestService>(() => new TestService());
            var DaServer = new HalibutRuntime(services,Configuration.ServerCertificate);
            DaServer.Listen(1337);
            DaServer.Trust(Configuration.ClientCertificate.Thumbprint);
        }
        public void StartClient()
        {
            var DaClient = new HalibutRuntime(Configuration.ClientCertificate);
            var DaService = DaClient.CreateClient<ITestService>(new ServiceEndPoint(new Uri("https://localhost:1337"), Configuration.ServerCertificate.Thumbprint));
            var IntTester = DaService.Add(1, 5);
            var StringSender = DaService.Send("Hi mom");
        }
    }
}
