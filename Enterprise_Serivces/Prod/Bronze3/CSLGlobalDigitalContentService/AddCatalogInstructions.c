AddCatalogInstructions()
{
	lr_start_transaction("GlobalDigitalContentService_AddCatalogInstructions");

	web_service_call( "StepName=AddCatalogInstructions_101",
		"SOAPMethod=GlobalDigitalContentService|BasicHttpBinding_IGlobalDigitalContentService|AddCatalogInstructions",
		"ResponseParam=response",
		"Service=GlobalDigitalContentService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1482862189.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request nil=\"true\"></request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("GlobalDigitalContentService_AddCatalogInstructions", LR_AUTO);

	return 0;
}
