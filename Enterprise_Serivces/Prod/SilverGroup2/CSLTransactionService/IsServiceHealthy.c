IsServiceHealthy()
{
	lr_start_transaction("TransactionService_IsServiceHealthy");

	web_service_call( "StepName=IsServiceHealthy_101",
		"SOAPMethod=TransactionService|BasicHttpBinding_ISalesTransactionService|IsServiceHealthy",
		"ResponseParam=response",
		"Service=TransactionService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484843621.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("TransactionService_IsServiceHealthy", LR_AUTO);

	return 0;
}
