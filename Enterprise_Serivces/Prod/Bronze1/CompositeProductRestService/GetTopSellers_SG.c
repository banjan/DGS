GetTopSellers_SG()
{
	
lr_think_time(1);

		web_reg_find ("Text=ProductID", LAST );
lr_start_transaction("GetTopSellers");
		web_custom_request("Get Top Sellers",
        "URL=https://gateway.gha.pvt/v1/Products/Topsellers", 
        "Method=GET", 
        "Resource=0", 
        "EncType=application/json", 
        "Mode=HTTP",
        LAST); 
lr_end_transaction("GetTopSellers", LR_AUTO);

lr_think_time(1);

	return 0;
}
