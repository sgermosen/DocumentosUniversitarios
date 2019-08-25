Imports DCE05.Ejemplos.EstrellaUno.ReglasNegocio

''' <summary>
''' Representa la opcion de cancelar la venta actual.
''' </summary>
Public Class OpcionCancelarVenta
    Inherits Opcion

    ''' <summary>
    ''' Ejecuta la acción asociada a la opción.
    ''' </summary>
    Friend Overrides Sub EjecutarAccion()
        If PuntoDeVenta.VentaActual Is Nothing Then
            Throw New OpcionInvalidaException("La venta no fue iniciada.")
        End If

        Try
            Dim Catalogo As CatalogoVentas = New CatalogoVentas()
            Catalogo.CancelarVenta(PuntoDeVenta.VentaActual)
            PuntoDeVenta.VentaActual = Nothing
            Console.WriteLine("Venta cancelada." + Chr(13))
        Catch Ex As ReglasNegocioException
            Console.WriteLine("Error al cancelar la venta actual: " + Ex.Message)
        End Try
    End Sub

    ''' <summary>
    ''' Construye una instancia de la opción con sus datos básicos.
    ''' </summary>
    ''' <param name="codigo">El código de la opción.</param>
    Friend Sub New(ByVal Codigo As Integer)
        Me.Codigo = Codigo
        Descripcion = "Cancelar Venta Actual"
    End Sub

End Class
