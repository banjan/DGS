IsServiceAlive()
{
	lr_start_transaction("NonceService_IsServiceAlive");

	web_service_call( "StepName=IsServiceAlive_104",
		"SOAPMethod=NonceService|BasicHttpBinding_INonceService|IsServiceAlive",
		"ResponseParam=response",
		"Service=NonceService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483628941.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("NonceService_IsServiceAlive", LR_AUTO);

	return 0;
}
