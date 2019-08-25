Imports DCE05.Ejemplos.EstrellaUno.ReglasNegocio

''' <summary>
''' Representa la aplicación cliente.
''' </summary>
Class PuntoDeVenta

    Private Shared _Salir As Boolean = False
    Private Shared _Venta As Venta = Nothing

    ''' <summary>
    ''' La venta actual que se está llevando a cabo en el Punto de Venta.
    ''' </summary>
    Friend Shared Property VentaActual() As Venta
        Get
            Return _Venta
        End Get
        Set(ByVal value As Venta)
            _Venta = value
        End Set
    End Property

    ''' <summary>
    ''' Controla el flujo de ejecución de la aplicación.
    ''' </summary>
    Friend Sub Iniciar()
        While Not PuntoDeVenta._Salir
            Dim OpcionSeleccionada As Integer = MostrarMenu()
            Try
                Dim MiOpcion As Opcion = ListaOpciones.Obtener(OpcionSeleccionada)
                MiOpcion.EjecutarAccion()
            Catch Ex As Exception
                Console.WriteLine(Ex.Message + Chr(13))
            End Try
            Iniciar()
        End While
    End Sub

    ''' <summary>
    ''' Permite finalizar la aplicación.
    ''' </summary>
    Friend Shared Sub Salir()
        _Salir = True
    End Sub

    ''' <summary>
    ''' El punto de acceso (Entry Point) a la aplicación.
    ''' Este método será invocado por el .NET Common Language Runtime.
    ''' </summary>
    Public Shared Sub Main()
        Dim Punto As PuntoDeVenta = New PuntoDeVenta()
        Punto.Iniciar()
    End Sub

    ''' <summary>
    ''' Muestra el menú de opciones en pantalla.
    ''' </summary>
    ''' <returns>La opción de menú seleccionada por el usuario.</returns>
    Private Function MostrarMenu() As Integer
        MostrarVentaActual()

        Console.WriteLine("Opciones")
        Console.WriteLine("--------" + Chr(13))

        Dim Opciones As List(Of Opcion) = ListaOpciones.ObtenerOpciones()
        For Each MiOpcion As Opcion In opciones
            Console.WriteLine("{0} - {1}", MiOpcion.Codigo, MiOpcion.Descripcion)
        Next

        Console.Write(Chr(13) + "Opción: ")
        Dim OpcionSeleccionada As Integer = 0
        Try
            OpcionSeleccionada = Integer.Parse(Console.ReadLine())
        Catch ex As FormatException
            Console.Clear()
            Console.WriteLine("Opción Inválida !!")
            MostrarMenu()
        End Try

        Console.Clear()
        Return opcionSeleccionada
    End Function

    ''' <summary>
    ''' Muestra los datos de la venta actual.
    ''' </summary>
    Private Sub MostrarVentaActual()
        If Not PuntoDeVenta.VentaActual Is Nothing Then
            Console.WriteLine("Venta Actual: Codigo Venta: {0} - Total: {1}" + Chr(13), PuntoDeVenta.VentaActual.Codigo.ToString(), PuntoDeVenta.VentaActual.Total().ToString())
            Console.WriteLine(Chr(13))
        End If
    End Sub

End Class