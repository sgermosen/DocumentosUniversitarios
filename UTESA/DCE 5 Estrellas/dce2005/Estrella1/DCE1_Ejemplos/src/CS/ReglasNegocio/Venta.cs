using System;
using System.Collections.Generic;
using System.Text;

namespace DCE05.Ejemplos.EstrellaUno.ReglasNegocio {

    /// <summary>
    /// Representa la comercialización de un conjunto de productos (ítems de venta).
    /// </summary>
    public class Venta {

        private int codigo;
        private DateTime fecha;
        private List<ItemVenta> items;

        /// <summary>
        /// Construye una instancia vacía de la venta.
        /// </summary>
        internal Venta() {
            this.codigo = 0;
            this.fecha = DateTime.MaxValue;
            this.items = new List<ItemVenta>();
        }

        /// <summary>
        /// La lista de items de la venta.
        /// </summary>
        public List<ItemVenta> Items {
            get { return items; }
        }

        /// <summary>
        /// El código de la venta.
        /// </summary>
        /// <exception cref="ArgumentException">Si el parámetro es inválido.</exception>
        public int Codigo {
            get { return codigo; }
            internal set {
                if (value <= 0) {
                    throw new ArgumentException("El código es inválido.");
                }
                codigo = value;
            }
        }

        /// <summary>
        /// La fecha de la venta.
        /// </summary>
        public DateTime Fecha {
            get { return fecha; }
            internal set { fecha = value; }
        }

        /// <summary>
        /// Calcula el total de la venta.
        /// </summary>
        /// <returns>El total de la venta.</returns>
        public double Total() {
            double total = 0f;
            foreach (ItemVenta item in items) {
                total += item.CalcularTotal();
            }
            return total;
        }

        /// <summary>
        /// Agrega un ítem a la venta.
        /// </summary>
        /// <param name="item">El ítem a agregar.</param>
        /// <exception cref="ArgumentException">Si el parámetro es inválido.</exception>
        public void AgregarItem(ItemVenta item) {
            if (item == null || item.Producto == null || item.Cantidad.Equals(0)) {
                throw new ArgumentException("El ítem es inválido.");
            }
            Items.Add(item);
        }
    }
}
