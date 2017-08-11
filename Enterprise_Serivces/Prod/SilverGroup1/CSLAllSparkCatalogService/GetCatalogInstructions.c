GetCatalogInstructions()
{
	lr_start_transaction("DigitalCatalogService_GetCatalogInstructions");

	web_service_call( "StepName=GetCatalogInstructions_101",
		"SOAPMethod=DigitalCatalogService|AllSparkCatalogService_HTTP|GetCatalogInstructions",
		"ResponseParam=response",
		"Service=DigitalCatalogService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1485877509.inf",
		BEGIN_ARGUMENTS,
		"xml:GetProductInstructionRequest="
			"<GetProductInstructionRequest>"
				"<AllSparkID>20140</AllSparkID>"
				"<PartnerKey>TEST-US</PartnerKey>"
			"</GetProductInstructionRequest>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("DigitalCatalogService_GetCatalogInstructions", LR_AUTO);

	return 0;
}
