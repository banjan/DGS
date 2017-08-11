IsServiceHealthy()
{
	lr_start_transaction("NonceService_IsServiceHealthy");

	web_service_call( "StepName=IsServiceHealthy_104",
		"SOAPMethod=NonceService|BasicHttpBinding_INonceService|IsServiceHealthy",
		"ResponseParam=response",
		"Service=NonceService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483629024.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("NonceService_IsServiceHealthy", LR_AUTO);

	return 0;
}
