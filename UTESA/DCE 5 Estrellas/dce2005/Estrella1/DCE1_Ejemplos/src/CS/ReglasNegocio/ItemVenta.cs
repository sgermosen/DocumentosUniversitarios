using System;
using System.Collections.Generic;
using System.Text;

namespace DCE05.Ejemplos.EstrellaUno.ReglasNegocio {

    /// <summary>
    /// Representa un ítem en una venta.
    /// </summary>
    public class ItemVenta {

        private int codigo;
        private Producto producto;
        private int cantidad;

        /// <summary>
        /// Cosntruye una instancia del ítem con los datos básicos.
        /// </summary>
        /// <param name="producto">El producto asociado.</param>
        /// <param name="cantidad">La cantidad de unidades del producto.</param>
        public ItemVenta(Producto producto, int cantidad) : this(0, producto, cantidad) {
        }

        /// <summary>
        /// Construye una inastancia del ítem completo.
        /// </summary>
        /// <param name="codigo">El código del ítem</param>
        /// <param name="producto">El producto asociado.</param>
        /// <param name="cantidad">La cantidad de unidades del producto.</param>
        public ItemVenta(int codigo, Producto producto, int cantidad) {
            this.codigo = codigo;
            Producto = producto;
            Cantidad = cantidad;
        }

        /// <summary>
        /// El código del ítem.
        /// </summary>
        /// <exception cref="ArgumentException">Si el parámetro es inválido.</exception>
        public int Codigo {
            get{
                return this.codigo;
            }
            internal set {
                if (value <= 0) {
                    throw new ArgumentException("El código es inválido.");
                }
                this.codigo = value;
            }
        }

        /// <summary>
        /// El producto del ítem.
        /// </summary>
        /// <exception cref="ArgumentException">Si el parámetro es inválido.</exception>
        public Producto Producto {
            private set {
                if (value == null) {
                    throw new ArgumentException("El producto no puede ser nulo.");
                }
                this.producto = value;
            }
            get {
                return this.producto;
            }
        }

        /// <summary>
        /// La cantidad de productos en el ítem.
        /// </summary>
        /// <exception cref="ArgumentException">Si el parámetro es inválido.</exception>
        public int Cantidad {
            private set {
                if (value <= 0) {
                    throw new ArgumentException("La cantidad es inválida.");
                }
                this.cantidad = value; 
            }
            get {
                return this.cantidad;
            }
        }

        /// <summary>
        /// Calcula el total del ítem de venta.
        /// </summary>
        /// <returns>El total del ítem.</returns>
        public double CalcularTotal(){
            return producto.Precio * cantidad;
        }
    }
}
