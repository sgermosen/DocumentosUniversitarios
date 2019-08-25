Imports DCE05.Ejemplos.EstrellaUno.AccesoDatos
Imports System.Data.Common

''' <summary>
''' Representa el catálogo de productos del sistema.
''' </summary>
Public Class CatalogoProductos

    ''' <summary>
    ''' Obtiene la lista de productos del sistema.
    ''' </summary>
    ''' <returns>La lista de productos.</returns>
    ''' <exception cref="ReglasNegocioException">Si ocurre un error de negocio.</exception>
    Public Function ObtenerProductos() As List(Of Producto)
        Dim Productos As List(Of Producto) = New List(Of Producto)()
        Try
            Dim Sql As String = "SELECT Codigo, Descripcion, Precio FROM Productos"
            Dim Db As BaseDatos = New BaseDatos()
            Db.Conectar()
            Db.CrearComando(Sql)
            Dim Datos As DbDataReader = Db.EjecutarConsulta()

            Dim p As Producto = Nothing
            While Datos.Read()
                Try
                    p = New Producto(Datos.GetInt32(0), Datos.GetString(1), Datos.GetDouble(2))
                    Productos.Add(p)
                Catch ex As InvalidCastException
                    Throw New ReglasNegocioException("Los tipos no coinciden.", ex)
                Catch ex As DataException
                    Throw New ReglasNegocioException("Error de ADO.NET.", ex)
                End Try
            End While
            Datos.Close()
            Db.Desconectar()
        Catch ex As BaseDatosException
            Throw New ReglasNegocioException("Error al acceder a la base de datos para obtener los productos.")
        Catch ex As ReglasNegocioException
            Throw New ReglasNegocioException("Error a obtener los productos.")
        End Try
        Return Productos
    End Function

    ''' <summary>
    ''' Obtiene un producto en base a su código.
    ''' </summary>
    ''' <param name="Codigo">El código del producto.</param>
    ''' <returns>El producto encontrado.</returns>
    ''' <exception cref="ReglasNegocioException">Si ocurre un error de negocio.</exception>
    Public Function ObtenerProducto(ByVal Codigo As Integer) As Producto
        Dim MiProducto As Producto = Nothing
        Try
            If (Codigo <= 0) Then
                Throw New ReglasNegocioException("El código es inválido.")
            End If

            Dim Sql As String = "SELECT Codigo, Descripcion, Precio FROM Productos WHERE Codigo=@codigo"
            Dim Db As BaseDatos = New BaseDatos()
            Db.Conectar()
            Db.CrearComando(Sql)
            Db.AsignarParametroEntero("@codigo", Codigo)
            Dim Datos As DbDataReader = Db.EjecutarConsulta()

            While Datos.Read()
                Try
                    MiProducto = New Producto(Datos.GetInt32(0), Datos.GetString(1), Datos.GetDouble(2))
                Catch Ex As InvalidCastException
                    Throw New ReglasNegocioException("Los tipos no coinciden.", Ex)
                Catch Ex As DataException
                    Throw New ReglasNegocioException("Error de ADO.NET.", Ex)
                End Try
            End While

            Datos.Close()
            Db.Desconectar()
        Catch Ex As BaseDatosException
            Throw New ReglasNegocioException("Error al acceder a la base de datos para obtener los productos.")
        Catch Ex As ReglasNegocioException
            Throw New ReglasNegocioException("Error a obtener los productos. " + Ex.Message)
        End Try
        Return MiProducto
    End Function
End Class
