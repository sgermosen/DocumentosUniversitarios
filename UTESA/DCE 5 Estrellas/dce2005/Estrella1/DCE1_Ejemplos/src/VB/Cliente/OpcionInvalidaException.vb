''' <summary>
''' Representa un error que ocurre cuando se selecciona una opción inválida.
''' </summary>
Public Class OpcionInvalidaException
    Inherits ApplicationException

    ''' <summary>
    ''' Construye una instancia en base a un mensaje de error.
    ''' </summary>
    ''' <param name="mensaje">El mensaje de error.</param>
    Public Sub New(ByVal Mensaje As String)
        MyBase.New(Mensaje)
    End Sub

End Class
