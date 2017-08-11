GetStoreInformation()
{
	lr_start_transaction("StoreInformationService_GetStoreInformation");

	web_service_call( "StepName=GetStoreInformation_101",
		"SOAPMethod=StoreInformationService|BasicHttpBinding_IStoreInformationService|GetStoreInformation",
		"ResponseParam=response",
		"Service=StoreInformationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484797726.inf",
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

	lr_end_transaction("StoreInformationService_GetStoreInformation", LR_AUTO);

	return 0;
}
