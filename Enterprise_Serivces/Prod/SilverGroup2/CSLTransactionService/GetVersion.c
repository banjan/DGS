GetVersion()
{
	lr_start_transaction("TransactionService_GetVersion");

	web_service_call( "StepName=GetVersion_101",
		"SOAPMethod=TransactionService|BasicHttpBinding_ISalesTransactionService|GetVersion",
		"ResponseParam=response",
		"Service=TransactionService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484843501.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("TransactionService_GetVersion", LR_AUTO);

	return 0;
}
