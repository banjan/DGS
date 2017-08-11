GetPartnerCatalog()
{
	lr_start_transaction("DigitalCatalogService_GetPartnerCatalog");

	web_service_call( "StepName=GetPartnerCatalog_101",
		"SOAPMethod=DigitalCatalogService|AllSparkCatalogService_HTTP|GetPartnerCatalog",
		"ResponseParam=response",
		"Service=DigitalCatalogService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1485879053.inf",
		BEGIN_ARGUMENTS,
		"xml:GetPartnerCatalogRequest="
			"<GetPartnerCatalogRequest>"
				"<PageNumber>1</PageNumber>"
				"<PageSize>1</PageSize>"
				"<PartnerKey>TEST-US</PartnerKey>"
			"</GetPartnerCatalogRequest>",
		"xml:MachineName="
			"<MachineName>"
				"<Text>"
					"<string>test</string>"
				"</Text>"
			"</MachineName>",
		"xml:CorrelationID="
			"<CorrelationID>"
				"<Text>"
					"<string>3408e959-5454-4a39-bbc6-ba0d62f3d82e</string>"
				"</Text>"
			"</CorrelationID>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("DigitalCatalogService_GetPartnerCatalog", LR_AUTO);

	return 0;
}
