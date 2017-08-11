GetAddressesByCompanyIdAndVendorId()
{
	
	web_reg_find ("Text=VendorKey", LAST );
	
	lr_start_transaction("GreatPlains_GetAddressesByCompanyIdAndVendorId");
	
	web_custom_request("Get Addresses By Company Id And Vendor Id",
        "URL=http://cslgreatplainsprod.gha.pvt/v1/GreatPlainsApi/Companies/4/Vendors/300036/Addresses", 
        "Method=GET", 
        "Resource=0", 
        "EncType=application/json", 
        "Mode=HTTP",
        LAST);
	
	lr_end_transaction("GreatPlains_GetAddressesByCompanyIdAndVendorId", LR_AUTO);
	
	return 0;
}
