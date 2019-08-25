using System;
using System.Collections.Generic;
using System.Text;

namespace DCE05.Ejemplos.EstrellaUno.ReglasNegocio {

    /// <summary>
    /// Representa un producto genérico.
    /// </summary>
    public class Producto {

        private int codigo;
        private string descripcion;
        private double precio;

        /// <summary>
        /// Construye una instancia del producto con sus datos completos.
        /// </summary>
        /// <param name="codigo">El código del producto.</param>
        /// <param name="descripcion">La descripción del producto.</param>
        /// <param name="precio">El precio del producto.</param>
        public Producto(int codigo, string descripcion, double precio) {
            Codigo = codigo;
            Precio = precio;
            Descripcion = descripcion;
        }

        /// <summary>
        /// El precio del producto.
        /// </summary>
        /// <exception cref="ArgumentException">Si el parámetro es inválido.</exception>
        public double Precio {
            get { return this.precio; }
            private set {
                if (value < 0f) {
                    throw new ArgumentException("El precio es inválido.");
                }
                this.precio = value; 
            }
        }

        /// <summary>
        /// El codigo del producto.
        /// </summary>
        /// <exception cref="ArgumentException">Si el parámetro es inválido.</exception>
        public int Codigo {
            get { return this.codigo; }
            private set {
                if (value <= 0) {
                    throw new ArgumentException("El código es inválido.");
                }
                this.codigo = value;
            }
        }

        /// <summary>
        /// La descripcion del producto.
        /// </summary>
        /// <exception cref="ArgumentException">Si el parámetro es inválido.</exception>
        public string Descripcion {
            get { return descripcion; }
            private set {
                if (value.Equals(string.Empty)) {
                    throw new ArgumentException("La descripción es inválida.");
                }
                this.descripcion = value;
            }
        }

    }
}