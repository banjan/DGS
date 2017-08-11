GetGameLibraryTradeInValue()
{
	lr_start_transaction("GameLibraryService_GetGameLibraryTradeInValue");

	web_service_call( "StepName=GetGameLibraryTradeInValue_101",
		"SOAPMethod=GameLibraryService|BasicHttpBinding_IGameLibraryService|GetGameLibraryTradeInValue",
		"ResponseParam=response",
		"Service=GameLibraryService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1482859358.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CustomerID>1131768783</CustomerID>"
				"<StoreNumber>1363</StoreNumber>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("GameLibraryService_GetGameLibraryTradeInValue", LR_AUTO);

	return 0;
}
