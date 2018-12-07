USE [master]
GO
/*NOMBRE: Anderson David Alies Martinez  SECCION: 0541    MATRICULA: 16-EIIT-1-089*/
CREATE DATABASE [directores y despacho] ON  PRIMARY 
( NAME = N'directores y despacho', FILENAME = N'c:\Program Files\Microsoft SQL Server\MSSQL10_50.SQLEXPRESS\MSSQL\DATA\directores y despacho.mdf' , SIZE = 2048KB , MAXSIZE = UNLIMITED, FILEGROWTH = 1024KB )
 LOG ON 
( NAME = N'directores y despacho_log', FILENAME = N'c:\Program Files\Microsoft SQL Server\MSSQL10_50.SQLEXPRESS\MSSQL\DATA\directores y despacho_log.ldf' , SIZE = 1024KB , MAXSIZE = 2048GB , FILEGROWTH = 10%)
GO
ALTER DATABASE [directores y despacho] SET COMPATIBILITY_LEVEL = 100
GO
IF (1 = FULLTEXTSERVICEPROPERTY('IsFullTextInstalled'))
begin
EXEC [directores y despacho].[dbo].[sp_fulltext_database] @action = 'enable'
end
GO
ALTER DATABASE [directores y despacho] SET ANSI_NULL_DEFAULT OFF
GO
ALTER DATABASE [directores y despacho] SET ANSI_NULLS OFF
GO
ALTER DATABASE [directores y despacho] SET ANSI_PADDING OFF
GO
ALTER DATABASE [directores y despacho] SET ANSI_WARNINGS OFF
GO
ALTER DATABASE [directores y despacho] SET ARITHABORT OFF
GO
ALTER DATABASE [directores y despacho] SET AUTO_CLOSE OFF
GO
ALTER DATABASE [directores y despacho] SET AUTO_CREATE_STATISTICS ON
GO
ALTER DATABASE [directores y despacho] SET AUTO_SHRINK OFF
GO
ALTER DATABASE [directores y despacho] SET AUTO_UPDATE_STATISTICS ON
GO
ALTER DATABASE [directores y despacho] SET CURSOR_CLOSE_ON_COMMIT OFF
GO
ALTER DATABASE [directores y despacho] SET CURSOR_DEFAULT  GLOBAL
GO
ALTER DATABASE [directores y despacho] SET CONCAT_NULL_YIELDS_NULL OFF
GO
ALTER DATABASE [directores y despacho] SET NUMERIC_ROUNDABORT OFF
GO
ALTER DATABASE [directores y despacho] SET QUOTED_IDENTIFIER OFF
GO
ALTER DATABASE [directores y despacho] SET RECURSIVE_TRIGGERS OFF
GO
ALTER DATABASE [directores y despacho] SET  DISABLE_BROKER
GO
ALTER DATABASE [directores y despacho] SET AUTO_UPDATE_STATISTICS_ASYNC OFF
GO
ALTER DATABASE [directores y despacho] SET DATE_CORRELATION_OPTIMIZATION OFF
GO
ALTER DATABASE [directores y despacho] SET TRUSTWORTHY OFF
GO
ALTER DATABASE [directores y despacho] SET ALLOW_SNAPSHOT_ISOLATION OFF
GO
ALTER DATABASE [directores y despacho] SET PARAMETERIZATION SIMPLE
GO
ALTER DATABASE [directores y despacho] SET READ_COMMITTED_SNAPSHOT OFF
GO
ALTER DATABASE [directores y despacho] SET HONOR_BROKER_PRIORITY OFF
GO
ALTER DATABASE [directores y despacho] SET  READ_WRITE
GO
ALTER DATABASE [directores y despacho] SET RECOVERY SIMPLE
GO
ALTER DATABASE [directores y despacho] SET  MULTI_USER
GO
ALTER DATABASE [directores y despacho] SET PAGE_VERIFY CHECKSUM
GO
ALTER DATABASE [directores y despacho] SET DB_CHAINING OFF
GO
USE [directores y despacho]
GO
/****** Object:  Table [dbo].[directores]    Script Date: 08/02/2017 19:53:15 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
SET ANSI_PADDING ON
GO
CREATE TABLE [dbo].[directores](
	[nd1] [numeric](6, 0) NOT NULL,
	[nomapels] [nvarchar](255) NULL,
	[dn1jefes] [varchar](8) NULL,
	[despacho] [int] NULL,
PRIMARY KEY CLUSTERED 
(
	[nd1] ASC
)WITH (PAD_INDEX  = OFF, STATISTICS_NORECOMPUTE  = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS  = ON, ALLOW_PAGE_LOCKS  = ON) ON [PRIMARY]
) ON [PRIMARY]
GO
SET ANSI_PADDING OFF
GO
/****** Object:  Table [dbo].[despacho]    Script Date: 08/02/2017 19:53:15 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[despacho](
	[numero] [int] NULL,
	[capacidad] [int] NULL
) ON [PRIMARY]
GO
