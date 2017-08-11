GetProductAvailableInventoryByPartner()
{
	lr_start_transaction("AllSparkService_GetProductAvailableInventoryByPartner");

	web_service_call( "StepName=GetProductAvailableInventoryByPartner_101",
		"SOAPMethod=AllSparkService|AllSparkService_HTTP|GetProductAvailableInventoryByPartner",
		"ResponseParam=response",
		"Service=AllSparkService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1485977492.inf",
		BEGIN_ARGUMENTS,
		"PartnerKey=TEST-US",
		"xml:MachineName="
			"<MachineName>"
				"<Text>"
					"<string>test</string>"
				"</Text>"
			"</MachineName>",
		"xml:CorrelationID="
			"<CorrelationID>"
				"<Text>"
					"<string>ebab6a4d-4f04-4edb-9211-790a49e9de65</string>"
				"</Text>"
			"</CorrelationID>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("AllSparkService_GetProductAvailableInventoryByPartner", LR_AUTO);

	return 0;
}
