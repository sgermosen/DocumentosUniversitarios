Imports DCE05.Ejemplos.EstrellaUno.ReglasNegocio

''' <summary>
''' Representa la opción de agregar un ítem de venta a una venta iniciada.
''' </summary>
Public Class OpcionAgregarItemVenta
    Inherits Opcion

    ''' <summary>
    ''' Construye una instancia de la opción con sus datos básicos.
    ''' </summary>
    ''' <param name="codigo">El código de la opción.</param>
    Friend Sub New(ByVal Codigo As Integer)
        Me.Codigo = Codigo
        Descripcion = "Agregar un Item de Venta"
    End Sub

    ''' <summary>
    ''' Ejecuta la acción asociada a la opción.
    ''' </summary>
    Friend Overrides Sub EjecutarAccion()
        If PuntoDeVenta.VentaActual Is Nothing Then
            Throw New OpcionInvalidaException("La venta no fue iniciada.")
        End If

        Try
            Dim OpcionListar As OpcionListarProductos = New OpcionListarProductos()
            OpcionListar.EjecutarAccion()
            Dim catalogoProd As CatalogoProductos = New CatalogoProductos()
            Dim producto As Producto = Nothing
            Console.Write("Seleccione un Producto de la lista a agregar: ")
            Try
                Dim idProducto As Integer = Integer.Parse(Console.ReadLine())
                Producto = catalogoProd.ObtenerProducto(idProducto)
                If Producto Is Nothing Then
                    Throw New OpcionInvalidaException("Producto inválido.")
                End If
            Catch ex As FormatException
                Throw New OpcionInvalidaException("Número inválido !")
            End Try

            Dim Cantidad As Integer = 0
            Console.Write("Seleccione la cantidad a agregar: ")
            Try
                Cantidad = Integer.Parse(Console.ReadLine())
            Catch Ex As FormatException
                Throw New OpcionInvalidaException("Cantidad inválida !")
            End Try

            PuntoDeVenta.VentaActual.AgregarItem(New ItemVenta(producto, Cantidad))

            Console.Clear()
            Console.WriteLine("Agregados {0} unidades del producto {1}." + Chr(13), Cantidad, producto.Descripcion)

        Catch Ex As ReglasNegocioException
            Console.Clear()
            Console.WriteLine("Error al agregar un ítem a la venta actual: " + Ex.Message)
        Catch Ex As OpcionInvalidaException
            Console.Clear()
            Console.WriteLine(Ex.Message)
        Catch Ex As Exception
            Console.Clear()
            Console.WriteLine("Error al agregar un ítem a la venta actual.")
        End Try
    End Sub
End Class
