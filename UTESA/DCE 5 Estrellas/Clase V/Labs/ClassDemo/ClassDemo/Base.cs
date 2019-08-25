using System;
using System.Collections.Generic;
using System.Text;

namespace ClassDemo
{
    public class Base : IDemo
    {
        private int _valor1;

        public int Valor1
        {
            get { return _valor1; }
            set { _valor1 = value; }
        }
        private string _valor2;

        public string Valor2
        {
            get { return _valor2; }
            set { _valor2 = value; }
        }
        #region IDemo Members

        public void Mostrar()
        {
            throw new Exception("The method or operation is not implemented.");
        }

        #endregion
}
}
