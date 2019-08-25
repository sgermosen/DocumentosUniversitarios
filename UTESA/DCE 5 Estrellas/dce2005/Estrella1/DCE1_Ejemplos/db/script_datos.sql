IF EXISTS (SELECT name FROM master.dbo.sysdatabases WHERE name = N'dce05_ejemplos_estrella1')
	DROP DATABASE [dce05_ejemplos_estrella1]
GO

CREATE DATABASE [dce05_ejemplos_estrella1]  
	ON 
	(NAME = N'dce05_ejemplos_estrella1_Data', 
	FILENAME = N'c:\dce05\dce05_ejemplos_estrella1_Data.MDF', 
	SIZE = 2, FILEGROWTH = 10%) 
	LOG ON (
	NAME = N'dce05_ejemplos_estrella1_Log', 
	FILENAME = N'c:\dce05\dce05_ejemplos_estrella1_Log.LDF', 
	SIZE = 1, FILEGROWTH = 10%)
	COLLATE SQL_Latin1_General_CP1_CI_AS
GO

USE [dce05_ejemplos_estrella1]
GO

/*  CREACION DE TABLAS */
CREATE TABLE [dbo].[Productos] ( 
	[Codigo] [int] IDENTITY(1,1) NOT NULL,
	[Descripcion] [varchar](30) NOT NULL,
	[Precio] [float] NOT NULL
) ON [PRIMARY]

CREATE TABLE [dbo].[ItemsVenta] ( 
	[Codigo] [int] identity(1,1) NOT NULL,
	[CodigoVenta] [int],
	[CodigoProducto] [int],
	[Cantidad] [int] DEFAULT 0
) ON [PRIMARY]

CREATE TABLE [dbo].[Ventas] ( 
	[Codigo] [int] identity(1,1) NOT NULL,
	[Fecha] [datetime] DEFAULT getdate()
) ON [PRIMARY]
GO

DELETE [Ventas]
DELETE [ItemsVenta]
DELETE [Productos]
GO

/*  CREACION DE CONSTRAINTS */
ALTER TABLE Productos ADD CONSTRAINT PK_Productos 
PRIMARY KEY (Codigo) 

ALTER TABLE ItemsVenta ADD CONSTRAINT PK_ItemsVenta 
PRIMARY KEY (Codigo) 

ALTER TABLE Ventas ADD CONSTRAINT PK_Venta 
PRIMARY KEY (Codigo) 

ALTER TABLE ItemsVenta ADD CONSTRAINT FK_ItemsVenta_Productos 
FOREIGN KEY (CodigoProducto) REFERENCES Productos (Codigo)

ALTER TABLE ItemsVenta ADD CONSTRAINT FK_ItemsVenta_Ventas 
FOREIGN KEY (CodigoVenta) REFERENCES Ventas (Codigo)
GO

INSERT INTO Productos (Descripcion, Precio) VALUES ('MotherBoard PC333', 45.30);
INSERT INTO Productos (Descripcion, Precio) VALUES ('Placa de Red 100 Mbps', 15.75);
INSERT INTO Productos (Descripcion, Precio) VALUES ('Microprocesador 1GHz', 112.90);
INSERT INTO Productos (Descripcion, Precio) VALUES ('Disco Rígido 7200 rpm', 84.10);
INSERT INTO Productos (Descripcion, Precio) VALUES ('Access Point Wi-Fi 802.11g', 66.40);
INSERT INTO Productos (Descripcion, Precio) VALUES ('Placa de Red PCMCIA', 25.00);
INSERT INTO Productos (Descripcion, Precio) VALUES ('Hub USB 4 Puertos', 12.80);
INSERT INTO Productos (Descripcion, Precio) VALUES ('Mouse óptico', 33.60);
INSERT INTO Productos (Descripcion, Precio) VALUES ('Monitor 17 pulgadas', 175.50);
INSERT INTO Productos (Descripcion, Precio) VALUES ('Gabinete Mid-Tower', 35.30);
INSERT INTO Productos (Descripcion, Precio) VALUES ('Teclado Internet', 25.80);
INSERT INTO Productos (Descripcion, Precio) VALUES ('Placa de Video 128 MB', 45.70);
INSERT INTO Productos (Descripcion, Precio) VALUES ('DVD-ROM 8x', 45.00);
GO	