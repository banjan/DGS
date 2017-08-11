GetCatalogByAllSparkID()
{
	lr_start_transaction("DigitalCatalogService_GetCatalogByAllSparkID");

	web_service_call( "StepName=GetCatalogByAllSparkID_101",
		"SOAPMethod=DigitalCatalogService|AllSparkCatalogService_HTTP|GetCatalogByAllSparkID",
		"ResponseParam=response",
		"Service=DigitalCatalogService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1485877013.inf",
		BEGIN_ARGUMENTS,
		"xml:GetCatalogByAllSparkIDRequest="
			"<GetCatalogByAllSparkIDRequest>"
				"<AllSparkID>20140</AllSparkID>"
				"<PartnerKey>TEST-US</PartnerKey>"
			"</GetCatalogByAllSparkIDRequest>",
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

	lr_end_transaction("DigitalCatalogService_GetCatalogByAllSparkID", LR_AUTO);

	return 0;
}
