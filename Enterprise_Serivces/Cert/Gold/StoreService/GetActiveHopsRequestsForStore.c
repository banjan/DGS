GetActiveHopsRequestsForStore()
{
	lr_start_transaction("StoreService_GetActiveHopsRequestsForStore");

	web_service_call( "StepName=GetActiveHopsRequestsForStore_101",
		"SOAPMethod=StoreService|StoreService|GetActiveHopsRequestsForStore",
		"ResponseParam=response",
		"Service=StoreService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1486585172.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CountryCode>US</CountryCode>"
				"<StoreNumber>1363</StoreNumber>"
				"<StoreStatus>Open</StoreStatus>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("StoreService_GetActiveHopsRequestsForStore", LR_AUTO);

	return 0;
}
