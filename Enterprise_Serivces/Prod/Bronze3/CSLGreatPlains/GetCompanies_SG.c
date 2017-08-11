GetCompanies_SG()
{
	web_reg_find ("Text=CompanyId", LAST );
	
	lr_start_transaction("GreatPlains_GetCompanies_SG");
	
	web_custom_request("Get Companies",
        "URL=https://gatewaydev.testgs.pvt:443/v1/GreatPlainsApi/Companies", 
        "Method=GET", 
        "Resource=0", 
        "EncType=application/json", 
        "Mode=HTTP",
        LAST);
	
	lr_end_transaction("GreatPlains_GetCompanies_SG", LR_AUTO);
	
	return 0;
}
