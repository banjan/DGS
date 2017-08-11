GetGameLibrary()
{
	lr_start_transaction("StoreService_GetGameLibrary");

	web_service_call( "StepName=GetGameLibrary_101",
		"SOAPMethod=StoreService|StoreService|GetGameLibrary",
		"ResponseParam=response",
		"Service=StoreService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484886339.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<LoyaltyCardNumber>3876180269047</LoyaltyCardNumber>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("StoreService_GetGameLibrary", LR_AUTO);

	return 0;
}
