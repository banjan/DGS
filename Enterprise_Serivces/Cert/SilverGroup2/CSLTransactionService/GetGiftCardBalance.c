GetGiftCardBalance()
{
	lr_start_transaction("TransactionService_GetGiftCardBalance");

	web_service_call( "StepName=GetGiftCardBalance_101",
		"SOAPMethod=TransactionService|BasicHttpBinding_ISalesTransactionService|GetGiftCardBalance",
		"ResponseParam=response",
		"Service=TransactionService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484800249.inf",
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

	lr_end_transaction("TransactionService_GetGiftCardBalance", LR_AUTO);

	return 0;
}
