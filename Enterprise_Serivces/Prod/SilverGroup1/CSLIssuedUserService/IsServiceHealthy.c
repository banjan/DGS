IsServiceHealthy()
{
	lr_start_transaction("IssuedUserService_IsServiceHealthy");

	web_service_call( "StepName=IsServiceHealthy_102",
		"SOAPMethod=IssuedUserService|BasicHttpBinding_IIssuedUserService|IsServiceHealthy",
		"ResponseParam=response",
		"Service=IssuedUserService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484774638.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("IssuedUserService_IsServiceHealthy", LR_AUTO);

	return 0;
}
