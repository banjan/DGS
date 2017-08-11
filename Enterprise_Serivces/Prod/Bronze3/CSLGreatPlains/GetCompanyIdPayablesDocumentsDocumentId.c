GetCompanyIdPayablesDocumentsDocumentId()
{
	web_reg_find ("Text=BatchKey", LAST );
	
	lr_start_transaction("GreatPlains_GetCompanyIdPayablesDocumentsDocumentId");
	
	web_custom_request("Get Company Id Payables Documents Document Id",
        "URL=http://cslgreatplainsprod.gha.pvt/v1/GreatPlainsApi/Companies/4/PayablesDocuments/0", 
        "Method=GET", 
        "Resource=0", 
        "EncType=application/json", 
        "Mode=HTTP",
        LAST);
	
	lr_end_transaction("GreatPlains_GetCompanyIdPayablesDocumentsDocumentId", LR_AUTO);
	
	return 0;
}
