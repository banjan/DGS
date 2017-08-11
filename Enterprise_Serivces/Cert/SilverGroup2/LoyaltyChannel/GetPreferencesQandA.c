GetPreferencesQandA()
{
	lr_start_transaction("LoyaltyService_GetPreferencesQandA");

	web_service_call( "StepName=GetPreferencesQandA_101",
		"SOAPMethod=LoyaltyService|BasicHttpBinding_LoyaltyService|GetPreferencesQandA",
		"ResponseParam=response",
		"Service=LoyaltyService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1487019638.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<International nil=\"true\"></International>"
				"<Categories>"
					"<string>abcde</string>"
				"</Categories>"
				"<CustomerID>1276939253</CustomerID>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("LoyaltyService_GetPreferencesQandA", LR_AUTO);

	return 0;
}
