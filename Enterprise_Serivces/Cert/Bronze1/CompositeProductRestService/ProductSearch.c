ProductSearch()
{
	
lr_think_time(1);

		web_reg_find ("Text=StoreInventory", LAST );		
lr_start_transaction("ProductSearch");
		web_custom_request("Product Search",
        "URL=http://compositeproductrestserviceprod.gha.pvt/v1/Products/?search=%22Batman%20Begins%22&amp", 
        "Method=GET", 
        "Resource=0", 
        "EncType=application/json", 
        "Mode=HTTP",
        LAST); 
lr_end_transaction("ProductSearch", LR_AUTO);

lr_think_time(1);

	return 0;
}
