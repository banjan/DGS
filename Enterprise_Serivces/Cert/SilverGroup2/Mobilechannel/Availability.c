Availability()
{
	lr_start_transaction("MobileChannel_Availability");
	
	web_custom_request("Availability",
        "URL=http://mobilechannelprod.gha.pvt/product/LOY-144/availability?q=76051", 
        "Method=GET", 
        "Resource=0", 
        "EncType=application/json", 
        "Mode=HTTP",
        LAST);
	
	lr_end_transaction("MobileChannel_Availability", LR_AUTO);
	
	return 0;
}
