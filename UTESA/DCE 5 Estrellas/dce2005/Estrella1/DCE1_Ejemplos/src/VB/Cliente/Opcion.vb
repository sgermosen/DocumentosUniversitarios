''' <summary>
''' Representa una opción genérica.
''' Todas las opciones del sistema deben heredar de esta opción.
''' </summary>
Public MustInherit Class Opcion

    Protected _Codigo As Integer = 0
    Protected _Descripcion As String

    ''' <summary>
    ''' El código de la opción.
    ''' </summary>
    Protected Friend Property Codigo() As Integer
        Get
            Return _Codigo
        End Get
        Set(ByVal Value As Integer)
            _Codigo = Value
        End Set
    End Property

    ''' <summary>
    ''' La descripción de la opción.
    ''' </summary>
    Protected Friend Property Descripcion() As String
        Get
            Return _Descripcion
        End Get
        Protected Set(ByVal Value As String)
            _Descripcion = Value
        End Set
    End Property

    ''' <summary>
    ''' Ejecuta la acción asociada a la opción.
    ''' </summary>
    Friend MustOverride Sub EjecutarAccion()

End Class
