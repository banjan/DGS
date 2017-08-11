PostedVendorPaymentsWithModifiedDateTime()
{
	web_reg_find ("Text=BatchKey", LAST );
	
	lr_start_transaction("GreatPlains_PostedVendorPaymentsWithModifiedDateTime");
	
	web_custom_request("Posted Vendor Payments With Modified Date Time",
        "URL=http://cslgreatplainsprod.gha.pvt:80/v1/GreatPlainsApi/Companies/4/PostedVendorPayments?modifiedDateTime=01-01-2012", 
        "Method=GET", 
        "Resource=0", 
        "EncType=application/json", 
        "Mode=HTTP",
        LAST);
	
	lr_end_transaction("GreatPlains_PostedVendorPaymentsWithModifiedDateTime", LR_AUTO);
	
	return 0;
}
