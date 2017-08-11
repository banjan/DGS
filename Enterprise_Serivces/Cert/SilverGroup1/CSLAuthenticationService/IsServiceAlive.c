IsServiceAlive()
{
	lr_start_transaction("AuthenticationService_IsServiceAlive");

	web_service_call( "StepName=IsServiceAlive_101",
		"SOAPMethod=AuthenticationService|BasicHttpBinding_IAuthenticationService|IsServiceAlive",
		"ResponseParam=response",
		"Service=AuthenticationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484772881.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("AuthenticationService_IsServiceAlive", LR_AUTO);

	return 0;
}
