GetInventoryUpdateInterval()
{
	lr_start_transaction("StoreService_GetInventoryUpdateInterval");

	web_service_call( "StepName=GetInventoryUpdateInterval_101",
		"SOAPMethod=StoreService|StoreService|GetInventoryUpdateInterval",
		"ResponseParam=response",
		"Service=StoreService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1486585906.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CountryCode>US</CountryCode>"
				"<StoreNumber>1363</StoreNumber>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("StoreService_GetInventoryUpdateInterval", LR_AUTO);

	return 0;
}
