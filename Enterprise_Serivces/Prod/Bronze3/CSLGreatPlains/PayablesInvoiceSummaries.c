PayablesInvoiceSummaries()
{
	web_reg_find ("Text=BatchKey", LAST );
	
	lr_start_transaction("GreatPlains_PayablesInvoiceSummaries");
	
	web_custom_request("Payables Invoice Summaries",
        "URL=http://cslgreatplainsprod.gha.pvt/v1/GreatPlainsApi/Companies/4/PayablesInvoiceSummaries/0", 
        "Method=GET", 
        "Resource=0", 
        "EncType=application/json", 
        "Mode=HTTP",
        LAST);
	
	lr_end_transaction("GreatPlains_PayablesInvoiceSummaries", LR_AUTO);
	
	return 0;
}
