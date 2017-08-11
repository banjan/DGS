GetCompaniesCompanyIdPostedVendorPaymentsDocumentId()
{
	//web_reg_find ("Text=BatchKey", LAST );
	
	lr_start_transaction("GreatPlains_GetCompaniesCompanyIdPostedVendorPaymentsDocumentId");
	
	web_custom_request("Get Companies Company Id Posted Vendor Payments Document Id",
        "URL=http://cslgreatplainsprod.gha.pvt/v1/GreatPlainsApi/Companies/4/PostedVendorPayments/0000037786", 
        "Method=GET", 
        "Resource=0", 
        "EncType=application/json", 
        "Mode=HTTP",
        LAST);
	
	lr_end_transaction("GreatPlains_GetCompaniesCompanyIdPostedVendorPaymentsDocumentId", LR_AUTO);
	
	return 0;
}
