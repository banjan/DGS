GetCompaniesCompanyIdPayablesInvoicePayablesInvoiceId()
{
	web_reg_find ("Text=CompanyKey", LAST );
	
	lr_start_transaction("GreatPlains_GetCompaniesCompanyIdPayablesInvoicePayablesInvoiceId");
	
	web_custom_request("Get Companies Company Id Payables Invoice Payables Invoice Id",
        "URL=http://cslgreatplainsprod.gha.pvt/v1/GreatPlainsApi/Companies/4/PayablesInvoices/000073865", 
        "Method=GET", 
        "Resource=0", 
        "EncType=application/json", 
        "Mode=HTTP",
        LAST);
	
	lr_end_transaction("GreatPlains_GetCompaniesCompanyIdPayablesInvoicePayablesInvoiceId", LR_AUTO);
	
	return 0;
}
