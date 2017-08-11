GetCustomerStatusByOpenID()
{
	lr_start_transaction("GetCustomerStatusByOpenID");
		web_custom_request("Get Customer Status By Open ID",
        "URL=http://partnerchannelprod.gha.pvt/loyalty/OpenID?id=610328a8-45a7-4ece-acb4-1b382796d506&token=token&clientkey=0DAB1F97-EAD1-475B-A201-E54289565E55", 
        "Method=GET", 
        "Resource=0", 
        "EncType=application/json", 
        "Mode=HTTP",
        LAST); 
	lr_end_transaction("GetCustomerStatusByOpenID", LR_AUTO);
	
	return 0;
}
