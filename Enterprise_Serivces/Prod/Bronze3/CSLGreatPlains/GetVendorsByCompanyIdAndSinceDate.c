GetVendorsByCompanyIdAndSinceDate()
{
	web_reg_find ("Text=CreatedDate", LAST );
	
	lr_start_transaction("GreatPlains_GetVendorsByCompanyIdAndSinceDate");
	
	web_custom_request("Get Vendors By Company Id And Since Date",
        "URL=http://cslgreatplainsprod.gha.pvt/v1/GreatPlainsApi/Companies/4/Vendors?sinceDate=2015-01-01", 
        "Method=GET", 
        "Resource=0", 
        "EncType=application/json", 
        "Mode=HTTP",
        LAST);
	
	lr_end_transaction("GreatPlains_GetVendorsByCompanyIdAndSinceDate", LR_AUTO);
	
	return 0;
}
