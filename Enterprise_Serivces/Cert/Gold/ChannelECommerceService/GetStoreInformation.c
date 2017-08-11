GetStoreInformation()
{
	lr_start_transaction("ECommerceService_GetStoreInformation");

	web_service_call( "StepName=GetStoreInformation_101",
		"SOAPMethod=ECommerceService|ECommerceService|GetStoreInformation",
		"ResponseParam=response",
		"Service=ECommerceService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484873777.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CountryCode>US</CountryCode>"
				"<StoreId>8746</StoreId>"
				"<StoreNumber>672</StoreNumber>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("ECommerceService_GetStoreInformation", LR_AUTO);

	return 0;
}
