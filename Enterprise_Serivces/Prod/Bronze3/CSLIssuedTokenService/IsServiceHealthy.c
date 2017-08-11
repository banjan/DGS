IsServiceHealthy()
{
	lr_start_transaction("IssuedTokenService_IsServiceHealthy");

	web_service_call( "StepName=IsServiceHealthy_102",
		"SOAPMethod=IssuedTokenService|BasicHttpBinding_IIssuedTokenService|IsServiceHealthy",
		"ResponseParam=response",
		"Service=IssuedTokenService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483553054.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("IssuedTokenService_IsServiceHealthy", LR_AUTO);

	return 0;
}
