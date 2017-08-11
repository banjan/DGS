TradeValues_SG()
{
	
lr_think_time(1);

	web_reg_find ("Text=Price", LAST );
	web_add_header("SKUs","270529,270496,919088,939251,938747,939239,939250,914894,950836,939255,935065,970097");
lr_start_transaction("TradeValues");
	web_custom_request("Trade Values",
        "URL=https://gateway.gha.pvt/v1/Products/TradeValues", 
        "Method=GET", 
        "Resource=0", 
        "EncType=application/json", 
        "Mode=HTTP",
        LAST); 	
lr_end_transaction("TradeValues", LR_AUTO);

lr_think_time(1);
	
	return 0;
}
