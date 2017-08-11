GetCompanies()
{	
	web_reg_find ("Text=CompanyId", LAST );
	
	lr_start_transaction("GreatPlains_GetCompanies");
	
	web_custom_request("Get Companies",
        "URL=http://cslgreatplainsprod.gha.pvt/v1/GreatPlainsApi/Companies", 
        "Method=GET", 
        "Resource=0", 
        "EncType=application/json", 
        "Mode=HTTP",
        LAST);
	
	lr_end_transaction("GreatPlains_GetCompanies", LR_AUTO);
	
	return 0;
}
