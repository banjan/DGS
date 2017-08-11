GetStoreInformation()
{
	lr_start_transaction("LoyaltyService_GetStoreInformation");

	web_service_call( "StepName=GetStoreInformation_102",
		"SOAPMethod=LoyaltyService|BasicHttpBinding_LoyaltyService|GetStoreInformation",
		"ResponseParam=response",
		"Service=LoyaltyService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484857027.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CountryCode>US</CountryCode>"
				"<StoreId>8130</StoreId>"
				"<StoreNumber>6</StoreNumber>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("LoyaltyService_GetStoreInformation", LR_AUTO);

	return 0;
}
