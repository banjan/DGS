GetCompaniesCompanyIdVendorsVendorId()
{
	web_reg_find ("Text=CompanyId", LAST );
	
	lr_start_transaction("GreatPlains_GetCompaniesCompanyIdVendorsVendorId");
	
	web_custom_request("Get Companies Company Id Vendors Vendor Id",
        "URL=http://cslgreatplainsprod.gha.pvt/v1/GreatPlainsApi/Companies/4/Vendors/300036", 
        "Method=GET", 
        "Resource=0", 
        "EncType=application/json", 
        "Mode=HTTP",
        LAST);
	
	lr_end_transaction("GreatPlains_GetCompaniesCompanyIdVendorsVendorId", LR_AUTO);
	
	return 0;
}
