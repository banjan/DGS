GetInventoryCountByAllSparkId()
{
	lr_start_transaction("DigitalCatalogService_GetInventoryCountByAllSparkId");

	web_service_call( "StepName=GetInventoryCountByAllSparkId_101",
		"SOAPMethod=DigitalCatalogService|AllSparkCatalogService_HTTP|GetInventoryCountByAllSparkId",
		"ResponseParam=response",
		"Service=DigitalCatalogService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1485878470.inf",
		BEGIN_ARGUMENTS,
		"xml:GetInventoryCountRequest="
			"<GetInventoryCountRequest>"
				"<allSparkID>20140</allSparkID>"
				"<partnerKey>TEST-US</partnerKey>"
			"</GetInventoryCountRequest>",
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

	lr_end_transaction("DigitalCatalogService_GetInventoryCountByAllSparkId", LR_AUTO);

	return 0;
}
