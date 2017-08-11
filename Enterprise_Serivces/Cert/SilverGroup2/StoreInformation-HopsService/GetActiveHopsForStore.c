GetActiveHopsForStore()
{
	lr_start_transaction("HopsService_GetActiveHopsForStore");

	web_service_call( "StepName=GetActiveHopsForStore_101",
		"SOAPMethod=HopsService|BasicHttpBinding_IHopsService|GetActiveHopsForStore",
		"ResponseParam=response",
		"Service=HopsService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1487089811.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CountryCode>US</CountryCode>"
				"<StoreNumber>16</StoreNumber>"
				"<StoreStatus>Open</StoreStatus>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("HopsService_GetActiveHopsForStore", LR_AUTO);

	return 0;
}
