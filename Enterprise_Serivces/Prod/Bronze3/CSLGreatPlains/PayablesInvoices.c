PayablesInvoices()
{
	lr_start_transaction("GreatPlains_PayablesInvoices");
	
	web_custom_request("Payables Invoices",
        "URL=http://cslgreatplainsprod.gha.pvt/v1/GreatPlainsApi/Companies/4/PayablesDocuments", 
        "Method=GET", 
        "Resource=0", 
        "EncType=application/json", 
        "Mode=HTTP",
        LAST);
	
	lr_end_transaction("GreatPlains_PayablesInvoices", LR_AUTO);
	
	return 0;
}
