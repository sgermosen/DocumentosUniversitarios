Imports DCE05.Ejemplos.EstrellaUno.ReglasNegocio

Public Class OpcionSalir
    Inherits Opcion

    ''' <summary>
    ''' Ejecuta la acción asociada a la opción.
    ''' </summary>
    Friend Overrides Sub EjecutarAccion()
        Try
            Dim Catalogo As CatalogoVentas = New CatalogoVentas()
            If Not PuntoDeVenta.VentaActual Is Nothing Then
                Catalogo.CancelarVenta(PuntoDeVenta.VentaActual)
            End If
            Catalogo.CancelarVentasPendientes()
            PuntoDeVenta.Salir()
        Catch Ex As ReglasNegocioException
            Console.WriteLine("Error al cancelar las ventas : " + Ex.Message)
        End Try
    End Sub

    ''' <summary>
    ''' Construye una instancia de la opción con sus datos básicos.
    ''' </summary>
    ''' <param name="MiCodigo">El código de la opción.</param>
    Friend Sub New(ByVal MiCodigo As Integer)
        Me.Codigo = MiCodigo
        Descripcion = "Salir"
    End Sub

End Class
