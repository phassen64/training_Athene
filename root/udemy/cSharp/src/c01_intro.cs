using System;
using System.Collections.Generic;
using System.Text;
using System.IO; // dazugefügt
using System.Diagnostics;   // ProcessStartInfo()
// using System.Management.Automation;

namespace Tutor
{
    class CIntroduction
    {
        // mein Info Text
        private int f__iReply()
        {
            return 1234;
        }

        private  void f__powershell_call()
        {
            //            Runspace sp = RunspaceFactory.CreateRunspace();
            // string sPathScript  = @"C:\public\my\cmd\py\hello.py";
            string sPathScript = @"C:\public\my\cmd\py\y01_hello.py";
            string sPathPython  = @"C:\public\my\tools\Python\python.exe";
            // var ps = PowerShell.Create();
            var psi = new ProcessStartInfo();
            var p_sArg1 = "2022-01-02";
            var p_sArg2 = "2022-03-02";
            var reply_error = "";
            var reply_output = "";

            if (!File.Exists(sPathPython))
            {
                return;
            }
            if (!File.Exists(sPathScript))
            {
                return;
            }

            psi.FileName    = sPathPython;
            psi.Arguments = $"\"{sPathScript}\"";
            psi.Arguments = $"\"{sPathScript}\" \"{p_sArg1}\" \"{p_sArg2}\"";

            psi.UseShellExecute = false;
            psi.CreateNoWindow  = true;
            psi.RedirectStandardOutput = true;
            psi.RedirectStandardError  = true;

            using (var process = Process.Start(psi))
            {
                CLibrary pLib = new CLibrary();
                reply_error = process.StandardError.ReadToEnd();
                reply_output = process.StandardOutput.ReadToEnd();
                pLib.f_puts("<<< reply.Error  = <" + reply_error + ">");
                pLib.f_puts("<<< reply.Result = <" + reply_output + ">");
            }
        }

        // meine öffentlicher Zugang
        public int f__test()
        {
            CLibrary pLib = new CLibrary();

            pLib.f_log("Start Test");

            int iRc = f__iReply();
            pLib.f_puts("*** Teste den ReturnCode<" + iRc + ">");

            string sDtm = pLib.f_sDateTime();
            pLib.f_puts("*** DateTime:<" + sDtm + ">");

            pLib.f_puts("*** powershell ....");
            pLib.f_delay(1);
            f__powershell_call();

            pLib.f_log("End Of Test");
            pLib.f_log("stop",true);

            return iRc;
        }

        ~CIntroduction()
        {
            Console.WriteLine("my descructor01");
        }

    }
}
