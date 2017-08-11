IsServiceAlive()
{
	lr_start_transaction("TransactionService_IsServiceAlive");

	web_service_call( "StepName=IsServiceAlive_101",
		"SOAPMethod=TransactionService|BasicHttpBinding_ISalesTransactionService|IsServiceAlive",
		"ResponseParam=response",
		"Service=TransactionService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484843570.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("TransactionService_IsServiceAlive", LR_AUTO);

	return 0;
}
