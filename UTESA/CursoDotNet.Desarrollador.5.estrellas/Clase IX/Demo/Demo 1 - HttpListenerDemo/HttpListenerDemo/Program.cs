using System;
using System.Collections.Generic;
using System.Text;
using System.Net;

namespace HttpListenerDemo
{
    class Program
    {
        static void Main(string[] args)
        {
            // Crea un HttpListener
            HttpListener lst = new HttpListener();
            // Agrega el prefijo al listener
            lst.Prefixes.Add("http://localhost/Prueba/");
            // Comienza a escuchar
            lst.Start();
            Console.WriteLine("Comenzando la escucha...");

            // Bloquea esperando por conexiones
            HttpListenerContext ctx = lst.GetContext();
            
            // Muestra algunos datos del request
            Console.WriteLine(ctx.Request.Url);
            Console.WriteLine(ctx.Request.UserAgent);

            byte[] bytes = new byte[4096];

            // Genera y envia el response al cliente
            System.IO.FileStream fileHtml = System.IO.File.Open("index.html", System.IO.FileMode.Open);
            fileHtml.Read(bytes, 0, 4096);
            ctx.Response.OutputStream.Write(bytes, 0, bytes.Length);
            ctx.Response.OutputStream.Flush();

            // Envia el response y lo finaliza
            ctx.Response.Close();

            // Finaliza la escucha
            lst.Stop();

            // Frena la ejecucion para ver los resultados
            Console.ReadLine();
        }
    }
}
