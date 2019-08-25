using System;
using System.Collections.Generic;
using System.Text;
using System.Xml;

namespace XMLparser
{
    class Program
    {
        static void Main(string[] args)
        {
            XmlDocument doc = new XmlDocument();
            doc.Load("..\\..\\personas.xml");
            foreach (XmlNode nodo in doc.ChildNodes)
            {
                foreach (XmlNode nodo2 in nodo.ChildNodes)
                {
                    string nombre = nodo2.SelectSingleNode("nombre").InnerText;
                    string apellido = nodo2.SelectSingleNode("apellido").InnerText;
                    string domicilio = nodo2.SelectSingleNode("domicilio").InnerText;
                    string telefono = nodo2.SelectSingleNode("telefono").InnerText;
                    Console.WriteLine(nombre + " " + apellido + " vive en " + domicilio + " y su telefono es el " + telefono);
                }
            }
            Console.ReadLine();            
        }
    }
}
