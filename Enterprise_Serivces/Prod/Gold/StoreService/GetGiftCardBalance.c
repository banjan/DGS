GetGiftCardBalance()
{
	lr_start_transaction("StoreService_GetGiftCardBalance");

	web_service_call( "StepName=GetGiftCardBalance_101",
		"SOAPMethod=StoreService|StoreService|GetGiftCardBalance",
		"ResponseParam=response",
		"Service=StoreService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484886599.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<AccountNumber>6006493504999901586</AccountNumber>"
				"<StoreNumber>814</StoreNumber>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("StoreService_GetGiftCardBalance", LR_AUTO);

	return 0;
}
