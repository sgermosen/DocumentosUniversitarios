Imports DCE05.Ejemplos.EstrellaUno.ReglasNegocio

''' <summary>
''' Representa la opción de listar los productos disponibles.
''' </summary>
Public Class OpcionListarProductos
    Inherits Opcion

    ''' <summary>
    ''' Construye una instancia de la opción con sus datos básicos.
    ''' </summary>
    ''' <param name="codigo">El código de la opción.</param>
    Friend Sub New(ByVal Codigo As Integer)
        Me.Codigo = Codigo
        Descripcion = "Listar Productos"
    End Sub

    ''' <summary>
    ''' Construye una instancia de la opción vacía.
    ''' </summary>
    Friend Sub New()
        Me.New(0)
    End Sub

    ''' <summary>
    ''' Ejecuta la acción asociada a la opción.
    ''' </summary>
    Friend Overrides Sub EjecutarAccion()
        Try
            Dim Catalogo As CatalogoProductos = New CatalogoProductos()
            Dim Productos As List(Of Producto) = Catalogo.ObtenerProductos()

            Console.WriteLine("Listado de Productos")
            Console.WriteLine("--------------------" + Chr(13))
            Console.WriteLine("Codigo".PadRight(7) + Chr(7) + "Descripcion".PadRight(30) + Chr(7) + "Precio")
            For Each Prod As Producto In Productos
                Console.WriteLine(Prod.Codigo.ToString().PadRight(7) + Chr(7) + Prod.Descripcion.PadRight(30) + Chr(7) + Prod.Precio.ToString())
            Next
            Console.WriteLine(Chr(13) + Chr(13))
        Catch Ex As ReglasNegocioException
            Console.WriteLine("Error al listar los productos: " + Ex.Message)
        End Try
    End Sub
End Class
