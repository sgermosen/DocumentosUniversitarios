using System;

/// <summary>
/// Summary description for Product
/// </summary>
public class Product
{
    #region Private Member Variables
    private int productID;
    private string productName;
    private string quantityPerUnit;

    // Consider making _unitPrice & _unitInStock nullable fields,
    // since they are NULL in the Northwind database.
    private decimal unitPrice;
    private int unitsInStock;
    #endregion

    #region Constructors
    public Product() { }
    public Product(int productID, string productName, string quantityPerUnit,
                decimal unitPrice, int unitsInStock)
    {
        this.productID = productID;
        this.productName = productName;
        this.quantityPerUnit = quantityPerUnit;
        this.unitPrice = unitPrice;
        this.unitsInStock = unitsInStock;
    }
    #endregion

    #region Public Properties
    public int ProductID
    {
        get
        {
            return productID;
        }
        set
        {
            if (productID < 0)
                throw new ArgumentException("ProductID must be greater than or equal to zero.");
            else
                productID = value;
        }
    }

    public string ProductName
    {
        get
        {
            return productName;
        }
        set
        {
            productName = value;
        }
    }

    public string QuantityPerUnit
    {
        get
        {
            return quantityPerUnit;
        }
        set
        {
            quantityPerUnit = value;
        }
    }

    public decimal UnitPrice
    {
        get
        {
            return unitPrice;
        }
        set
        {
            if (unitPrice < 0)
                throw new ArgumentException("UnitPrice must be greater than or equal to zero.");
            else
                unitPrice = value;
        }
    }

    public int UnitsInStock
    {
        get
        {
            return unitsInStock;
        }
        set
        {
            if (unitsInStock < 0)
                throw new ArgumentException("UnitsInStock must be greater than or equal to zero.");
            else
                unitsInStock = value;
        }
    }
    #endregion
}
