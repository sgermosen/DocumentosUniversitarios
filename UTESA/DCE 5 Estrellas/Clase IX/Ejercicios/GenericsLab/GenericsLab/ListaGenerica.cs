using System;
using System.Collections.Generic;
using System.Text;

namespace GenericsLab
{
    // Lista de tipo generico
    public class ListaGenerica<T>
    {
        protected Nodo head;
        
        // Define cada nodo de la lista
        // conoce su dato ( de tipo T )
        // y al proximo nodo
        protected class Nodo
        {
            public Nodo next;
            private T data;
            
            public Nodo(T t)
            {
                next = null;
                data = t;
            }
            
            public Nodo Next
            {
                get { return next; }
                set { next = value; }
            }
            
            public T Data
            {
                get { return data; }
                set { data = value; }
            }
        }

        // Constructor
        public ListaGenerica()
        {
            head = null;
        }

        // Agrega un nodo en el tope de la lista
        public void Agregar(T t)
        {
            Nodo n = new Nodo(t);
            n.Next = head;
            head = n;
        }

        // Obtiene el dato del primer nodo de la lista
        // y lo elimina
        public T Sacar()
        {
            Nodo current = head;

            if (current != null)
            {
                T data = current.Data;
                head = current.Next;
                return data;
            }
            return default(T);
        }

        // Implementa el GetEnumerator
        // Devuelve un IEnumerator<T> para poder hacer
        // un foreach de la lista
        public IEnumerator<T> GetEnumerator()
        {
            Nodo current = head;

            while (current != null)
            {
                yield return current.Data;
                current = current.Next;
            }
            // La lista fue vaciada
            head = null;
        }
    }
}
