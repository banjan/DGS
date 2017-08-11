GetPointsTransactionDetails()
{
	lr_start_transaction("TransactionService_GetPointsTransactionDetails");

	web_service_call( "StepName=GetPointsTransactionDetails_101",
		"SOAPMethod=TransactionService|BasicHttpBinding_ISalesTransactionService|GetPointsTransactionDetails",
		"ResponseParam=response",
		"Service=TransactionService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484801268.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<TransactionHeaderGUID>13bf434e-1073-4cb5-9690-34fb508f66ff</TransactionHeaderGUID>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("TransactionService_GetPointsTransactionDetails", LR_AUTO);

	return 0;
}
