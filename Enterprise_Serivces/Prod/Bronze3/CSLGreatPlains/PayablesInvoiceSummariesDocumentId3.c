PayablesInvoiceSummariesDocumentId3()
{
	web_reg_find ("Text=BatchKey", LAST );
	
	lr_start_transaction("GreatPlains_PayablesInvoiceSummariesDocumentId3");
	
	web_custom_request("Payables Invoice Summaries Document Id 3",
        "URL=http://cslgreatplainsprod.gha.pvt/v1/GreatPlainsApi/Companies/4/PayablesInvoiceSummaries/3", 
        "Method=GET", 
        "Resource=0", 
        "EncType=application/json", 
        "Mode=HTTP",
        LAST);
	
	lr_end_transaction("GreatPlains_PayablesInvoiceSummariesDocumentId3", LR_AUTO);
	return 0;
}
