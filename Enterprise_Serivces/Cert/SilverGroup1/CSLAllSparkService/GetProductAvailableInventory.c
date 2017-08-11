GetProductAvailableInventory()
{
	lr_start_transaction("AllSparkService_GetProductAvailableInventory");

	web_service_call( "StepName=GetProductAvailableInventory_101",
		"SOAPMethod=AllSparkService|AllSparkService_HTTP|GetProductAvailableInventory",
		"ResponseParam=response",
		"Service=AllSparkService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1485970459.inf",
		BEGIN_ARGUMENTS,
		"AllSparkID=1893050",
		"AllSparkIDSpecified=true",
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

	lr_end_transaction("AllSparkService_GetProductAvailableInventory", LR_AUTO);

	return 0;
}
