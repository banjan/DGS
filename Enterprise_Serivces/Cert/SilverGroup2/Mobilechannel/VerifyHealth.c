VerifyHealth()
{
	lr_start_transaction("MobileChannel_VerifyHealth");
	
	web_custom_request("Availability",
        "URL=http://mobilechannelprod.gha.pvt/configuration/verify/health", 
        "Method=GET", 
        "Resource=0", 
        "EncType=application/json", 
        "Mode=HTTP",
        LAST);
	
	lr_end_transaction("MobileChannel_VerifyHealth", LR_AUTO);
	
	return 0;
}
