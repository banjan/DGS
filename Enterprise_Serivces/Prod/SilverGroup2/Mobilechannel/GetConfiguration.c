GetConfiguration()
{
	lr_start_transaction("MobileChannel_GetConfiguration");
	
	web_custom_request("Availability",
        "URL=http://mobilechannelprod.gha.pvt/configuration/", 
        "Method=GET", 
        "Resource=0", 
        "EncType=application/json", 
        "Mode=HTTP",
        LAST);
	
	lr_end_transaction("MobileChannel_GetConfiguration", LR_AUTO);
	
	return 0;
}
