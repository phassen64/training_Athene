using System;
using System.IO;            // Combine
using System.Diagnostics;   // DateTime
using System.Threading;     // for sleep

namespace Tutor
{
    class CLibrary
    {
        private const string C_sNewLine = "\r\n";
        private const string C_sDtmFmt  = "yyyy-MM-dd;HH:mm:ss"; // g
        private const string C_sLogId   = "logTutor";

        private string      g_sLogFileName = null;
        private string      g_sLogFilePath = null;
        private bool        g_bLogging = false;
        private FileStream  g_fpLog = null;
        private DateTime    g_tDtm;
        private string      g_sDtm;

        // * constructur
        public CLibrary()
        {

            // log-fileName
            g_tDtm = DateTime.Now;
            g_sDtm = g_tDtm.ToString("yyMMddHHmmss");
            g_sLogFileName = C_sLogId;
            g_sLogFileName += "-";
            g_sLogFileName += g_sDtm;
            g_sLogFileName += ".log";

            //  log-filePath in the userDir
            string sDir = Environment.GetFolderPath(Environment.SpecialFolder.MyDocuments);
            g_sLogFilePath = Path.Combine(sDir, g_sLogFileName);
        }

        ~CLibrary()
        {
            Console.Write("Destructor!");
            f_log("EndOfRun", true);
        }


        private void f__puts(string s)
        {
            Console.Write(s);
            Console.Write(C_sNewLine);

        }

        //  *   public methods

        public void f_puts(string s)
        {
            f__puts(s);
        }

        public void f_delay(int p_iSeconds)
        {
            Thread.Sleep(p_iSeconds * 1000);
        }

        public void f_trace()
        {
            StackFrame stackFrame = new StackFrame(1, true);
            string sMethod  = stackFrame.GetMethod().ToString();
            int iLine       = stackFrame.GetFileLineNumber();
            f__puts("=== T:'" + sMethod + "' at:" + "[" + iLine + "]");
        }


        public string f_sDateTime(string p_sDtmFmt = C_sDtmFmt)
        {
            DateTime dtm = DateTime.Now;
            string sDtm = dtm.ToString(p_sDtmFmt);
            return sDtm;
        }


        public void f_log(string p_sText, bool p_bWriteLogInfo = false)
        {
            string s;

            if (!g_bLogging)
            {
                g_fpLog = File.Create(g_sLogFilePath);
                g_fpLog.Close();
                s = "*** automatic created logfile '" + g_sLogFileName + "'  at:[" + g_sDtm + "]";
                s += C_sNewLine;
                File.WriteAllText(g_sLogFilePath, s);
                g_bLogging = true;
                Thread.Sleep(1000);
            }

            //  write text and DateTime
            string sDtm = f_sDateTime();
            if (p_bWriteLogInfo)
            {
                s = "*** inf" + "[" + sDtm + "]: '" + p_sText + "' => '" + g_sLogFilePath + "'"; 
                s += C_sNewLine;
                File.AppendAllText(g_sLogFilePath, s);
            }
            else
            {
                s = ">>> log" + "[" + sDtm + "]: '" + p_sText + "'"; s += C_sNewLine;
                File.AppendAllText(g_sLogFilePath, s);
            }

            f__puts("=== L: logging'");
        }
    }
}
