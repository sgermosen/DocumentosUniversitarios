Public Class BaseDatosException
    Inherits ApplicationException

    ''' <summary>
    ''' Construye una instancia en base a un mensaje de error y la una excepción original.
    ''' </summary>
    ''' <param name="mensaje">El mensaje de error.</param>
    ''' <param name="original">La excepción original.</param>
    Public Sub New(ByVal mensaje As String, ByVal original As Exception)
        MyBase.New(mensaje, original)
    End Sub

    ''' <summary>
    ''' Construye una instancia en base a un mensaje de error.
    ''' </summary>
    ''' <param name="mensaje">El mensaje de error.</param>
    Public Sub New(ByVal mensaje As String)
        MyBase.New(mensaje)
    End Sub

End Class
