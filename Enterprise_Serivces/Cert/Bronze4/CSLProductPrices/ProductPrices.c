ProductPrices()
{
	web_reg_find ("Text=ProductId", LAST );
	
	lr_start_transaction("ProductPrices_ProductPrices");
	
	web_custom_request("Product Prices",
        "URL=http://cslproductpricesprod.gha.pvt/v1/productprices/?search=115283&storeNumber=1782", 
        "Method=GET", 
        "Resource=0", 
        "EncType=application/json", 
        "Mode=HTTP",
        LAST);
	
	lr_end_transaction("ProductPrices_ProductPrices", LR_AUTO);
	
	return 0;
}
