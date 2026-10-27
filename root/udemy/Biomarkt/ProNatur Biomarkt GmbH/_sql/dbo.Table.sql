CREATE TABLE [dbo].[Product]
(
	[Id] INT NOT NULL PRIMARY KEY IDENTITY, 
    [Name] VARCHAR(50) NOT NULL, 
    [Category] VARCHAR(50) NOT NULL, 
    [Brand] VARCHAR(50) NOT NULL, 
    [Prices] FLOAT NOT NULL
)
